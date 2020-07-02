#include <iostream>
using namespace std;

long long intSummation(long long start, long long end)
{
  //F(m,n) = m + m+1 + m+2, .... + n = ((n+m)*(n+1-m))/2
  long long result = ((end+start)*(end+1-start))/2;
  return result;
}


int main()
{
  int n;
  cin>>n;
  for(int i=0; i<n; i++)
  {
    long long l,r;
    cin>>l>>r;
    long long out = intSummation(l,r);
    cout<<out<<endl;
  }
  return 0;
}
