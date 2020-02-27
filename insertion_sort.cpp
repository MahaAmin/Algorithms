#include<iostream>
using namespace std;


// Function to print a given array
void print_array(double arr[], int n)
{
  for(int i=0; i<n; i++)
    cout<<arr[i]<<" ";
  cout<<endl;
}


void insertionSort(double arr[], int size)
{
  double key;
  for(int i=1; i<size; i++)
  {
    key = arr[i];
    int j = i-1;
    while(j>=0 && arr[j] > key)
    {
      arr[j+1] = arr[j];
      j--;
    }
    arr[j+1] = key;
  }
}

int main()
{
  int elements;
  cout<<"Enter the size of your array: ";
  cin>>elements;
  double input[elements];
  cout<<"Enter your array: ";
  for(int i=0; i<elements; i++)
    cin>>input[i];
  insertionSort(input, elements);
  print_array(input, elements);
  return 0;
}
