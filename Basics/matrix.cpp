#include <iostream>

using namespace std;

int main(){

  int a[2][4];
  a[0][0] = 1;
  a[0][1] = 2;
  a[0][2] = 3;
  a[0][3] = 4;

  a[1][0] = 4;
  a[1][1] = 5;
  a[1][2] = 6;
  a[1][3] = 7;

   int sum1 =0,sum2=0;

    for(int j=0;j<4;j++){
      sum1 += a[0][j];
}

for(int j=0;j<4;j++){
  sum2 += a[1][j];
}

cout<<"sum1 = "<<sum1<<endl;
cout<<"sum2 ="<<sum2<<endl;
}
