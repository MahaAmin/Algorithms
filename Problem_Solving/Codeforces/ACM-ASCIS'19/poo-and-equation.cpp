#include <iostream>
#include<iomanip>
using namespace std;

int main()
{
  double a,b,c,result;
  cin>>a>>b>>c;
  result = (10.0*a*c) + (15.0*b*c);
  cout << fixed << showpoint;
  cout<<setprecision(6);
  cout<<result<<endl;
  return 0;
}
