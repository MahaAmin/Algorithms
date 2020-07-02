#include<iostream>
using namespace std;

int main(){
  int n;
  cin>>n;
  int arr[n],result;
  for(int i=0; i<n; i++)
    cin>>arr[i];
  int rightmost_min_index=n-1, leftmost_max_index=1;
  int rightmost_min = arr[0], leftmost_max = arr[0];
  for(int i=0; i<n; i++){
    if(arr[i]<=rightmost_min){
      rightmost_min=arr[i];
      rightmost_min_index=i;
    }
  }
  for(int i=n-1; i>=0; i--){
    if(arr[i]>=leftmost_max){
      leftmost_max=arr[i];
      leftmost_max_index=i;
    }

  }
  if(leftmost_max_index > rightmost_min_index)
    result=leftmost_max_index+(n-rightmost_min_index-2);
  else
    result=leftmost_max_index+(n-rightmost_min_index-1);
  cout<<result<<endl;
  //cout<<rightmost_min_index<<" "<<leftmost_max_index<<" "<<result<<endl;
  return 0;
}
