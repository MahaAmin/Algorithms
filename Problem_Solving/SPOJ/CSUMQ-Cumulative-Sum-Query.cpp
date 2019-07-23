#include <iostream>
using namespace std;

int main(){
  int n;
  cin>>n;
  int arr[n];
  for(int i=0; i<n; i++){
    cin>>arr[i];
  }
  int q;
  cin>>q;
  for(int i=0; i<q; i++){
    int start,end;
    long long result=0;
    cin>>start>>end;
    for(int j=start; j<=end; j++){
      result+=arr[j];
    }
    cout<<result<<endl;
  }
  return 0;
}
