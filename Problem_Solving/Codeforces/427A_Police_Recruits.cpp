#include <iostream>
using namespace std;

int main()
{
  int n;
  cin>>n;
  int event;
  int recruit = 0;
  int result = 0 ;
  for (int i=0; i<n; i++)
  {
    cin>>event;
    if(event != -1)
    {
      recruit += event;
    }
    else
    {
      if(recruit > 0)
      {
        recruit--;
      }
      else
      {
        result++;
      }
    }
  }

  cout<<result<<endl;
  return 0;
}
