#include<iostream>
using namespace std;

int main(){
  char s[101], t[101];
  cin>>s>>t;
  int len1=0,len2=0;
  while(s[len1]!='\0')
    len1++;
  while(t[len2]!='\0')
    len2++;
  if(len1!=len2)
    cout<<"NO"<<endl;
  else{
    bool flag = false;
    for(int i=0; i<len1; i++){
      if(s[i]!=t[len2-i-1]){
        flag=true;
        cout<<"NO"<<endl;
        break;
      }
    }
    if(!flag)
      cout<<"YES"<<endl;
  }
  return 0;
}
