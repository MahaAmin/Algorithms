#include<iostream>
using namespace std;


// Function to print a given array
void print_array(double arr[], int n)
{
  for(int i=0; i<n; i++)
    cout<<arr[i]<<" ";
  cout<<endl;
}


// Function to sort given array using insertion Sort algorithm
void insertionSort(double arr[], int n)
{
  for(int i=1; i<n; i++)
  {
    for(int j=i; j>0; j--)
    {
      if(arr[j] < arr[j-1])
      {
        int tmp = arr[j];
        arr[j] = arr[j-1];
        arr[j-1] = tmp;
      }
    }
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

}
