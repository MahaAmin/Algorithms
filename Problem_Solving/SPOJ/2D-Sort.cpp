#include<iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){
  int t;
  cin>>t;
  for(int i=0; i<t; i++){
    int n;
    cin>>n;
    long long arr[n];
    for(int j=0; j<n; j++)
      cin>>arr[j];

    sort(arr,arr+n);
    for(int j=0; j<n; j++)
      cout<<arr[j]<<" ";
    cout<<endl;
  }
  return 0;
}
