#include<iostream>
using namespace std;

int main()
{
  int n,h,tot_width=0;
  cin>>n>>h;
  int arr[n];
  for(int i=0; i<n; i++)
  {
    cin>>arr[i];
    if(arr[i]>h)
      tot_width += 2;
    else
      tot_width ++;
  }
  cout<<tot_width<<endl;

  return 0;
}
