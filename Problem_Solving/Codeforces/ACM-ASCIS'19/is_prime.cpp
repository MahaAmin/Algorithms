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

int countPrimesInRange(long long n)
{
  // print number of prime numbers in range [0 - n] --> forward thinking
  int count=0;
  for(long long i=0; i<n; i++)
    if(isPrime(i))
      count++;
  return count;
}

int countPrimesInRange_sieve(long long n)
{
  // print number of prime numbers in range [0 - n] --> backward thinking
  bool arr[n+1];
  arr[0] = arr[1] = false;
  for (int i=2; i<n; i++)
    arr[i] = true;
  for(long long i=2; i*i<=n; i++)
    if(isPrime(i))
      for(int j=i*2; j<=n; j+=i)
        arr[j] = false;

  int count = 0;
  long long l = sizeof(arr)/sizeof(arr[0]);
  for(int i=0; i<l; i++)
    if(arr[i])
      count++;
  return count;

}

int main()
{
  long long n;
  cin>>n;
  cout<<countPrimesInRange_sieve(n)<<endl;
  return 0;
}
