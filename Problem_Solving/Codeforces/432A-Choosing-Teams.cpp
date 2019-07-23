#include<iostream>
using namespace std;

int main(){
  int n,k;
  cin>>n>>k;
  int arr[n];
  int result=0;
  for(int i=0; i<n; i++){
    cin>>arr[i];
    if(5 - arr[i] >= k)
      result++;
  }
  cout<<result/3<<endl;

  return 0;
}
