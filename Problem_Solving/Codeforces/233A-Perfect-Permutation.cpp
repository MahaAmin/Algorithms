#include<iostream>
using namespace std;

int main(){
  int n;
  cin>>n;
  int arr[n];
  bool flag=false;
  if(n%2==1){
    cout<<"-1"<<endl;
    flag=true;
  }
  else{
    for(int i=1; i<=n; i++)
      arr[i-1]=i;
    for(int i=0; i<n; i+=2)
      swap(arr[i],arr[i+1]);
  }
  if(!flag){
    for(int i=0; i<n; i++)
      cout<<arr[i]<<" ";
    cout<<endl;
  }
  return 0;
}
