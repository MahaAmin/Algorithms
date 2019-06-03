#include<iostream>
using namespace std;

int main(){
  int n;
  cin>>n;
  int capacity=0;
  int max_capacity=0;
  for(int i=0; i<n; i++){
    int a,b;
    cin>>a>>b;
    capacity-=a;
    capacity+=b;
    if(capacity>max_capacity)
      max_capacity=capacity;
  }
  cout<<max_capacity<<endl;
  return 0;
}
