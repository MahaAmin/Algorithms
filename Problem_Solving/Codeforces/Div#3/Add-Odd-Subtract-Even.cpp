#include<iostream>
using namespace std;

int main(){
  int t;
  cin>>t;
  for(int i=0; i<t; i++){
    long long a,b;
    cin>>a>>b;
    int moves = 0;
    while(b>a){
      if((b-a)%2 == 1){
        a+=(b-a);
        moves++;
      }
      else{
        a+=(b-a);
        moves+=2;
      }
    }

    while(b<a){
      if((a-b)%2 == 0){
        a-=(a-b);
        moves++;
      }
      else{
        a-=(a-b);
        moves+=2;
      }
    }
    cout<<moves<<endl;
  }
  return 0;
}
