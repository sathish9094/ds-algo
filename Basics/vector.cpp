#include <iostream>
#include <vector>

using namespace std;

void print(const vector<int> &n){

for(int i=0;i<n.size();i++){
  cout<<n[i]<<" ";
}

}

int main(){

   vector<int> a= {3,2,6};
   cout<<a.max_size()<<endl;
   print(a);
  return 0;
}
