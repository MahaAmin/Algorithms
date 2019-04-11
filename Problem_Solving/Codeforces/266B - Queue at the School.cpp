#include <iostream>
using namespace std;

int main()
{
  int n,t;
  cin>>n>>t;
  char Q[n];
  for(int i=0; i<n; i++)
  {
    cin>>Q[i];
  }
  for(int i=0; i<t; i++)
  {
    for(int j=0; j<n; j++)
    {
      if(Q[j]=='B' && Q[j+1]=='G')
      {
        swap(Q[j],Q[j+1]);
        j+=1;

      }
    }
  }

  for(int i=0; i<n; i++)
  {
    cout<<Q[i];
  }
  cout<<endl;
  return 0;
}
