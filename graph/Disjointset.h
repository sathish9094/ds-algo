#include <iostream>
#include <unordered_map>

using namespace std;

class Disjoint_set{

  unordered_map <char,char> Parent;
  unordered_map <char,int> Rank;

public:

  char Find(char item){
    if(Parent[item] == item)
    {
      return item;
    }
    else{
      return Find(Parent[item]);
    }

  }

  void Union(char set1,char set2){
    if(Rank[set2] > Rank[set1]){
        Parent[set1] = set2;
    }
    else if(Rank[set1]> Rank[set2]){
        Parent[set2] = set1;
    }
    else{
       Parent[set1] = set2;
       Rank[set2]++;
    }

  }

  void Make_set(char vertex){
    Parent[vertex] = vertex;
    Rank[vertex] = 0;
  }


};
