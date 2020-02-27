#include <iostream>
using namespace std;

int main()
{
  int n,p;
  cin>>n;
  int total=n*100;
  double percent;
  for(int i=0; i<n; i++){
    cin>>p;
    percent+=p;
  }
  cout<<(percent/total)*100<<endl;
  return 0;
}
