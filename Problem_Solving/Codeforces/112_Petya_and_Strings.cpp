#include<iostream>
#include <string>
using namespace std;


int main()
{
  string s1,s2;
  cin>>s1>>s2;
  int l = s1.length();
  for(int i=0; i<l; i++){
    s1[i]=tolower(s1[i]);
    s2[i]=tolower(s2[i]);
  }
  if(s1 < s2)
  cout<<"-1"<<endl;
  else if(s2 < s1)
  cout<<"1"<<endl;
  else
  cout<<"0"<<endl;
  return 0;
}
