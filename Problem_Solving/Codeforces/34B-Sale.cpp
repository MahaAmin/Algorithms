#include<iostream>
#include<algorithm>

int main(){
  int n,m;
  std::cin>>n>>m;
  int arr[n];
  for(int i=0; i<n; i++)
    std::cin>>arr[i];
  std::sort(arr, arr+n);
  int result=0;
  for(int i=0; i<m; i++)
    if(arr[i]<0)
      result+=arr[i];

  result*=-1;
  std::cout<<result<<'\n';
  return 0;
}
