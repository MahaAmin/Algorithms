#include <iostream>
#include <sstream>
using namespace std;

int main()
{
  string line = "1 2 3 4";
  int arr[4];
  int sum = 0;
  int i = 0;
  stringstream anyth(line);
  while(anyth.good() && i<4)
  {
    anyth >> arr[i];
    sum += arr[i];
    i++;
  }

  for(int i=0; i<4; i++)
    cout<<arr[i]<<endl;
  cout<<sum<<endl;
  return 0;
}
