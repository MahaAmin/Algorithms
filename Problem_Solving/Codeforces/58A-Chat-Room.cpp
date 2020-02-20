#include<iostream>
using namespace std;

int main(){
  char s[200];
  cin>>s;
  int i=0;
  bool h=false, e=false, l1=false, l2=false, o=false;
  while(s[i]!='\0'){
    if(s[i]=='h')
      h=true;
    else if(s[i]=='e' && h)
      e=true;
    else if(s[i]=='l' && h && e && !l1)
      l1=true;
    else if(s[i]=='l' && h && e && l1)
      l2=true;
    else if(s[i]=='o' && h && e && l1 && l2)
      o=true;
    i++;
  }

  if(h&&e&&l1&&l2&&o)
    cout<<"YES"<<endl;
  else
    cout<<"NO"<<endl;
  return 0;
}
