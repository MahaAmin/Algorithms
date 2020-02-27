#include<iostream>
#include<string>
using namespace std;

int main(){
  string str;
  cin>>str;
  int n = str.length();
  int luckies = 0;
  for(int i=0; i<n; i++){
    if(str[i]=='4' || str[i]=='7')
      luckies++;
  }
  if(luckies==4 || luckies==7)
    cout<<"YES"<<endl;
  else
    cout<<"NO"<<endl;
  return 0;
}
