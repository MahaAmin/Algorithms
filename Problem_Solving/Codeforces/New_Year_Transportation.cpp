#include <iostream>
using namespace std;

int main()
{
  int n,t;
  cin>>n>>t;
  int a[n-1];
  int current = 1;
  bool flag = false;
  for(int i=0; i<n-1; i++)
    cin>>a[i];
  for(int i=0; i<n-1; i++)
  {
    if(current == t)
    {
      flag = true;
      break;
    }
    else
    {
      current += a[i];
    }
  }

  if(flag)
    cout<<"YES"<<endl;
  else
    cout<<"NO"<<endl;
  return 0;
}
