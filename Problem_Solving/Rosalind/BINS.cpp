#include <iostream>
#include <fstream>
#include <sstream>
using namespace std;


int binarySearch(int arr[], int value, int l)
{
  int start = 0;
  int end = l-1;

  while(start <= end)
  {
    int mid = (start+end)/2;
    if(value == arr[mid])
      return mid+1;
    else if(value < arr[mid])
      end = mid - 1;
    else
      start = mid+1;
  }
  return -1;
}

void BINS(string fileName)
{
  int n=8982,m=9634;
  int arr1[n];
  int arr2[m];
  ifstream myfile(fileName);
  string line, file_contents;
  int counter=0;
  int i = 0;
  int j = 0;
  bool flag1 = false;
  bool flag2 = false;
  while(getline(myfile, line))
  {
    stringstream anyth(line);

    if(counter < n)
    {
      while(anyth.good() && counter<n)
      {
        anyth >> arr1[i];
        counter++;
        i++;
      }
    }
    else
    {
      while(anyth.good())
      {
        anyth >> arr2[j];
        j++;
        counter++;
      }
    }
  }


  // for(int i=0; i<n; i++)
  //   cout<<arr1[i]<<" ";
  // cout<<endl;
  // for(int i=0; i<m; i++)
  //   cout<<arr2[i]<<" ";
  // cout<<endl;

  for (int i=0; i<m; i++)
  {
    cout<<binarySearch(arr1, arr2[i], n)<<" ";
  }
  cout<<endl;
}

int main()
{
  BINS("rosalind_bins.txt");
  return 0;
}
