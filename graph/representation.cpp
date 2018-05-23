#include<iostream>
#include <vector>

using namespace std;

int main(){

  cout<<"graph";
  vector<int> vec[10];
  int nodes;
  int edges;
  cout<<"node =";
  cin>>nodes;
  cout<<"\n Edges =";
  cin>>edges;

 int x,y;
  for(int i=0;i<edges;i++){
    cout<<"enter the node for edge"<<i+1<<endl;
    cin>>x>>y;
    vec[x].push_back(y);
  }

  for(int i=1;i<=nodes;i++){
    cout<<"Adjecent list of"<<i<<endl;
    for(int j=0;j<vec[i].size();j++){
      if(j == (vec[i].size()-1)){
          cout<<vec[i][j]<<endl;
      }
      else{
        cout<<vec[i][j]<<"-->";
      }

    }

    cout<<endl;

  }
}
