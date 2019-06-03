#include<iostream>
using namespace std;

bool isPrime(int n){
  if(n==0 || n==1)
  return false;
  else{
    for(int i=2; i<n; i++)
      if(n%i==0)
      return false;
  return true;
  }
}

int main(){
  int n,m;
  cin>>n>>m;
  bool flag=0;
  if(!isPrime(m)){
    cout<<"NO"<<endl;
    flag=true;
  }
  else{
    for(int i=n+1; i<m; i++){
      if(isPrime(i)){
        cout<<"NO"<<endl;
        flag=true;
        break;
      }
    }
  }
  if(!flag)
  cout<<"YES"<<endl;
  return 0;
}
