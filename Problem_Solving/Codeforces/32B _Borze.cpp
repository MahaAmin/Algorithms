#include<iostream>
#include<string>
using namespace std;

int main()
{
  string c;
  cin>>c;
  int l=c.length();
  string result="";
  for(int i=0; i<l; i++)
  {
    if(c[i]=='-')
    {
      if(c[i+1]=='.')
        result.append("1");
      else if(c[i+1]=='-')
        result.append("2");
      i+=1;
    }
    else
      result.append("0");
  }
  cout<<result<<endl;
  return 0;
}
