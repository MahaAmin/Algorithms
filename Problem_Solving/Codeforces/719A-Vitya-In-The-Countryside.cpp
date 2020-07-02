#include <iostream>
using namespace std;

int main(){
  int n;
  cin>>n;
  int days[n];
  for(int i=0; i<n; i++)
    cin>>days[i];
  if(days[n-1]==0)
    cout<<"UP"<<endl;
  else if(days[n-1]==15)
    cout<<"DOWN"<<endl;
  else if(n==1 && days[0]!=0 && days[0]!=15)
    cout<<"-1"<<endl;
  else if(days[n-2]>days[n-1])
    cout<<"DOWN"<<endl;
  else if(days[n-2]<days[n-1])
    cout<<"UP"<<endl;

  return 0;
}
