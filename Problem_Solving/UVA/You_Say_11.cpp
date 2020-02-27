#include<iostream>
using namespace std;

int main()
{
  long long n;
  cin>>n;
  while(n != 0)
  {
    if (n%11 == 0)
      cout<<n<<" "<<"is a multiple of 11."<<endl;
    else
      cout<<n<<" "<<"is not a multiple of 11."<<endl;
    cin>>n;
  }
  return 0;
}
