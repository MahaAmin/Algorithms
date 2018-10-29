#include <iostream>
using namespace std;

int main()
{
  int n;
  cin>>n;
  char stones[n];
  cin>>stones;
  int result = 0;
  for (int i=0; i<n-1; i++)
  {
    if(stones[i] == stones[i+1])
    {
      result ++;
    }
  }
  cout<<result<<endl;
  return 0;
}
