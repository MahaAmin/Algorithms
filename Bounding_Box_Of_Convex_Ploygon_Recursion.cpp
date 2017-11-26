#include<iostream>
using namespace std;

struct Point
{
  double x;
  double y;
};


struct BoundingBox
{
  double minX;
  double minY;
  double maxX;
  double maxY;
};


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


double PointMin(double Points[], int low, int high)
{
  /* Base case : only one element remains --> pointMin = Points[low/high]*/
  if (high == low)
  {
    cout<<"case 0 ";
      return Points[low];
  }


  /* case 1: only two elements and the first is smaller --> pointMin = first element */
    if((high == low+1) && (Points[low] <= Points[high]))
    {
      cout<<"case 1 ";
      return Points[low];
    }


  /* case 2: only two elements and the second is greater --> pointMin = second element*/
  if((high == low+1) && (Points[low] >= Points[high]))
  {
    cout<<"case 2 ";
      return Points[high];
  }



  int mid = (low + high)/2;
  /* case 3: Points[mid-1] > Points[mid ] < Points[mid+1] --> pointMin = Points[mid]*/
  if((Points[mid] < Points[mid-1]) && (Points[mid] < Points[mid+1]))
  {
    cout<<"mid = "<<mid<<" case 3 ";
      return Points[mid];
  }



  /* case 4: Points[mid-1] < Points[mid] < Points[mid+1] --> go left */
  if((Points[mid] > Points[mid-1]) && (Points[mid] < Points[mid+1]))
  {
    cout<<"mid = "<<mid<<" case 4";
    return PointMax(Points, low, mid-1);
  }



  /* case 5: Points[mid-1] > Points[mid] > Points[mid+1] --> go right */
  else
  {
    cout<<"else case ";
    return PointMax(Points, mid+1, high);
  }


}

/*BoundingBox BoundingBoxOfConvexPolygon(Point Points[], int N)
{

}*/

int main()
{
  int n;
  cin>>n;
  double arr[n];
  for(int i=0; i<n; i++)
    cin>>arr[i];
//  cout<<PointMax(arr, 0, n-1)<<endl;
double result = PointMin(arr, 0, n-1);
  cout<<result<<endl;

  return 0;
}
