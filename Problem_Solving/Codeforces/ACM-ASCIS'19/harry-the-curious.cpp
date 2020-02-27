#include <iostream>
using namespace std;

bool isPrime(long long n)
{
  // tell whether number n is prime number or not
  if(n==2)
    return true;
  if(n<2 || n%2 == 0)
    return false;

  for (long long i=3; i*i<=n; i+=2)
    if(n%i==0)
      return false;
  return true;
}

void primeDivisors(int l, int r, int n)
{
  bool found = false;
  for(int i=l; i<=r; i++)
    if(n%i==0 && isPrime(i))
    {
      cout<<i<<" ";
      found = true;
    }
  cout<<endl;
  if(!found)
    cout<<"-1"<<endl;
}

int main()
{
  int l,r,n;
  cin>>l>>r>>n;
  primeDivisors(l,r,n);
  return 0;
}
