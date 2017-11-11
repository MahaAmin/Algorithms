#include<iostream>
using namespace std;



double PointMax(double Points[], int low, int high)
{
  /* Base case : only one element remains --> pointMax = Points[low/high]*/
  if (high == low)
    return Points[low];

  /* case 1: only two elements and the first is greater --> pointMax = first element */
    if((high == low+1) && (Points[low] >= Points[high]))
      return Points[low];

  /* case 2: only two elements and the second is greater --> pointMax = second element*/
  if((high == low+1) && (Points[low] <= Points[high]))
    return Points[high];


  int mid = (low + high)/2;
  /* case 3: Points[mid-1] < Points[mid ] > Points[mid+1] --> pointMax = Points[mid]*/
  if((Points[mid] > Points[mid-1]) && (Points[mid] > Points[mid+1]))
    return Points[mid];


  /* case 4: Points[mid-1] > Points[mid] > Points[mid+1] --> go left */
  if((Points[mid] < Points[mid-1]) && (Points[mid] > Points[mid+1]))
    return PointMax(Points, low, mid-1);


  /* case 5: Points[mid-1] < Points[mid] < Points[mid+1] --> go right */
  else
    return PointMax(Points, mid+1, high);

}


int main()
{
  int n;
  cout<<"Enter size of your array: ";
  cin>>n;
  double arr[n];
  cout<<"Your array: ";
  for(int i=0; i<n; i++)
    cin>>arr[i];
//  cout<<PointMax(arr, 0, n-1)<<endl;
double result = PointMax(arr, 0, n-1);
  cout<<result<<endl;

  return 0;
}
