#include<iostream>
using namespace std;

int main(){
  int m[3][3];
  int n[3][3];
  for(int i=0; i<3; i++)
    for(int j=0; j<3; j++)
    cin>>m[i][j];

  n[0][0]=m[0][0]+m[0][1]+m[1][0];
  n[0][1]=m[0][1]+m[0][0]+m[1][1]+m[0][2];
  n[0][2]=m[0][2]+m[0][1]+m[1][2];
  n[1][0]=m[1][0]+m[0][0]+m[2][0]+m[1][1];
  n[1][1]=m[1][1]+m[0][1]+m[2][1]+m[1][2]+m[1][0];
  n[1][2]=m[1][2]+m[0][2]+m[2][2]+m[1][1];
  n[2][0]=m[2][0]+m[1][0]+m[2][1];
  n[2][1]=m[2][1]+m[1][1]+m[2][0]+m[2][2];
  n[2][2]=m[2][2]+m[1][2]+m[2][1];

  for(int i=0; i<3; i++){
    for(int j=0; j<3; j++){
      if(n[i][j]%2==0)
      cout<<"1";
      else
      cout<<"0";
    }
    cout<<endl;
  }

  return 0;
}
