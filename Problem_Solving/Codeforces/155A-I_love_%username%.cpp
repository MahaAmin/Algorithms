#include<iostream>
using namespace std;

int main(){
  int n;
  cin>>n;
  int best,worst,count=0;
  cin>>best;
  worst=best;
  for(int i=1; i<n; i++){
    int tmp;
    cin>>tmp;
    if(tmp>best){
      count++;
      best=tmp;
    }
    else if(tmp<worst){
      count++;
      worst=tmp;
    }
  }
  cout<<count<<endl;
  return 0;
}