#include <iostream>
using namespace std;

int main()
{
  int n;
  cin>>n;
  int left_zeros=0, right_zeros=0, left_ones=0, right_ones=0,t=0;
  for(int i=0; i<n; i++){
    int l,r;
    cin>>l>>r;
    if(l)
      left_ones++;
    else
      left_zeros++;
    if(r)
      right_ones++;
    else
      right_zeros++;
  }

  if(left_zeros <= left_ones)
    t+=left_zeros;
  else
    t+=left_ones;
  if(right_zeros<=right_ones)
    t+=right_zeros;
  else
    t+=right_ones;

  cout<<t<<endl;
  return 0;
}
