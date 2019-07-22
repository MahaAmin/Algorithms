#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){
  int t;
  cin>>t;
  for(int i=0; i<t; i++){
    int n;
    cin>>n;
    int k = n-2;
    int planks[n];
    for(int j=0; j<n; j++){
      cin>>planks[j];
    }

    // sort planks in descending order
    sort(planks, planks+n, greater<int>());

    while(k>0){
      if(planks[0]>k && planks[1]>k)
        break;
      else
        k--;
    }
    cout<<k<<endl;
  }
  return 0;
}
