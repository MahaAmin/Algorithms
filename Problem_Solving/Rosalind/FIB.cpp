#include <iostream>
using namespace std;


int FibRec(int n, int k)
{
  if (n == 1 || n == 2)
    return 1;

  else if (n == 0)
    return 0;

  else
    return k*FibRec(n-2, k) + FibRec(n-1, k);
}

long long Fib(int n, int k)
{
  if (n == 1 || n == 2)
    return 1;
  else
  {
    long long fib = 1;
    long long fibPrev = 1;
    for(int i=2; i<n; i++)
    {
      long long temp = fib;
      fib += k*fibPrev;
      fibPrev = temp;
    }
    return fib;
  }
}

int main()
{
  cout<<Fib(33,3)<<endl;
  return 0;
}
