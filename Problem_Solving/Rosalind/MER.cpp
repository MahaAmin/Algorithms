#include <iostream>
using namespace std;

void MER(int arr1[], int n1, int arr2[], int n2, int c[])
{
  int j=0;
  int n;
  bool one = false;
  bool two = false;
  if(n1 <= n2)
  {
    n = n1;
    for(int i=0; i<n; i++)
    {

    }
  }
  else
  {
    n = n2;
    for(int i=0; i<n; i++)
    {

    }
  }
  for(int i=0; i<n; i++)
  {
    if(arr1[i] >= arr2[i])
    {
      c[j] = arr2[i];
      c[j+1] = arr1[i];
      j+=2;
    }
    else
    {
      c[j] = arr1[i];
      c[j+1] = arr2[i];
      j+=2;
    }
  }

  for(int i=0; i<n; i++)
    cout<<c[i]<<" ";
  cout<<endl;
}

int main()
{
  int arr1[4] = {2,4,10,18};
  int arr2[3] = {-5,11,12};
  int c[7];
  MER(arr1,4,arr2,3,c);
  return 0;
}
