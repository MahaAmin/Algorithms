#include <iostream>
using namespace std;

int main()
{
  char s[100];
  cin>>s;
  int i = 0;
  while(s[i])
  {
    int forward = s[i];
    int reverse = s[i];

    int diff = abs(s[i] - s[i+1]);

    for(int j=0; j<diff; j++)
    {
      
    }
    i++;
  }
  return 0;
}
