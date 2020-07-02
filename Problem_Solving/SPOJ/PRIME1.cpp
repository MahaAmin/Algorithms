#include<iostream>
#include<math.h>
using namespace std;

bool isPrime(long long n){
  if(n==0 || n==1)
  return false;
  else{
    long long root = sqrt(n);
    for(long long i=2; i <= root; i++)
      if(n%i==0)
      return false;
  return true;
  }
}

int main(){
  int t;
  cin>>t;
  for(int i=0; i<t; i++){
    long long m,n;
    cin>>m>>n;
    for(long long j=m; j<=n; j++){
      if(isPrime(j))
        cout<<j<<endl;
    }
  }
  return 0;
}
