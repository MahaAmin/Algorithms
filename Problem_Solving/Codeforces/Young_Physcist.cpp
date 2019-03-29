#include <iostream>
using namespace std;

int main()
{
  int t;
  int x=0,y=0,z=0;
  cin>>t;
  for(int i=0; i<t; i++)
  {
    int a,b,c;
    cin>>a>>b>>c;
    x+=a;
    y+=b;
    z+=c;
  }
  if(x==0 && y==0 && z==0)
    cout<<"YES"<<endl;
  else
    cout<<"NO"<<endl;
}
