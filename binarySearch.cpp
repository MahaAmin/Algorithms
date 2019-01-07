#include <iostream>

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

int main()
{
	int arr[5] = {10,20,30,40,50};
	std::cout<<binarySearch(arr, 40, 5)<<'\n';
	return 0;
}

