#include <iostream>

using namespace std;

void swap(int *a,int *b){

  int t = *a;
  *a = *b;
  *b = t;
}

int main(){

  int a = 5;
  int b = 10;
  swap(&a,&b);
  cout<<"a ="<<a;
  cout<<"b ="<<b;
  return 0;
}
