#include<iostream>
using namespace std;

int main(){
  int n,k;
  cin>>n>>k;
  long long arr[n];
  for(int i=0; i<n; i++){
    cin>>arr[i];
  }
  cout<<arr[n-k]-arr[0]<<endl;
  return 0;
}
