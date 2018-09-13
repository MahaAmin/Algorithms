#include<iostream>
using namespace std;

int main()
{
  int values[4];
  for (int i=0; i<4; i++)
  {
    cin>>values[i];
  }

  char stripes[100000];
  cin>>stripes;
  int result = 0;
  int i = 0;
  while(stripes[i])
  {
    int index = (int) stripes[i] -49;
    result += values[index];
    i++;
  }

  cout<<result<<endl;
  return 0;
}
