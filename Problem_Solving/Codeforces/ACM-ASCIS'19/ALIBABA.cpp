#include<iostream>
using namespace std;

int main()
{
  long long a,b,c,result;
  cin>>a>>b>>c>>result;
  bool flag = false;
  if((a+b-c) == result)
    flag = true;
  else if((a+b*c) == result)
    flag = true;
  else if((a-b+c) == result)
    flag = true;
  else if((a-b*c) == result)
    flag = true;
  else if((a*b+c) == result)
    flag = true;
  else if((a*b-c) == result)
    flag = true;

  if(flag)
    cout<<"YES"<<endl;
  else
    cout<<"NO"<<endl;

  return 0;
}
