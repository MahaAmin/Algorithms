#include <iostream>
#include <sstream>
#include <fstream>
using namespace std;

int INS(string fileName, int size)
{
  int arr[size];
  ifstream myfile(fileName);
  string line;
  int i = 0;
  while(getline(myfile, line))
  {
    stringstream anyth(line);
    while(anyth.good() && i<size)
    {
      anyth >> arr[i];
      i++;
    }
  }
  double key;
  int counter = 0;
  for(int i=1; i<size; i++)
  {
    key = arr[i];
    int j = i-1;
    while(j>=0 && arr[j] > key)
    {
      arr[j+1] = arr[j];
      j--;
      counter++;
    }
    arr[j+1] = key;
  }
  return counter;
}

int main()
{
  cout<<INS("rosalind_ins.txt", 875)<<endl;
}
