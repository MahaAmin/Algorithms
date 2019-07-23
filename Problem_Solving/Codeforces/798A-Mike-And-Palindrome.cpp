#include<iostream>
#include<string>
using namespace std;

int main(){
  string str;
  cin>>str;
  int n = str.length();
  int missHits = 0;
  for(int i=0; i<n/2; i++){
    if(str[i] != str[n-i-1])
      missHits++;
  }
  if(missHits == 1 || (missHits == 0 && n%2==1))
    cout<<"YES"<<endl;
  else
    cout<<"NO"<<endl;
  return 0;
}
