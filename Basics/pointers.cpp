#include <iostream>

using namespace std;


void print(int *p,int size){

  for(int i=0;i<size;i++){
    cout<<*p<<endl;
    p++;
  }
}

int main(){

  int a [] = {4,5,6};
  int size = 3;
  print(a,size);
  return 0;
}
