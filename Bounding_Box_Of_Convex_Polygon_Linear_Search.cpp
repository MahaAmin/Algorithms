#include<iostream>
using namespace std;

struct point
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

BoundingBox BoundingBoxOfConvexPolygon(point Points[], int N)
{
  BoundingBox result;
  result.minX = Points[0].x;
  result.maxX = Points[0].x;
  result.minY = Points[0].y;
  result.maxY = Points[0].y;
  for(int i=0; i<N; i++)
  {
    if(Points[i].x>result.maxX)
      result.maxX = Points[i].x;
    if(Points[i].y < result.minY)
      result.minY = Points[i].y;
    if(Points[i].y > result.maxY)
      result.maxY = Points[i].y;
  }


  return result;
}

int main()
{
  int t;
  cin>>t;
  for(int i=0; i<t; i++)
  {
    int n;
    cin>>n;
    point p[n];
    for(int j=0; j<n; j++)
    {
      cin>>p[j].x>>p[j].y;
    }
    BoundingBox display = BoundingBoxOfConvexPolygon(p,n);
    cout<<display.minX<<" "<<display.maxX<<" "<<display.minY<<" "<<display.maxY<<endl;

  }
  return 0;
}
