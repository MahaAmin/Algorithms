#include <iostream>
#include <string>
using namespace std;

int main(){
  string arr;
  cin>>arr;
  bool yes=false;
  int l=arr.length();
  for(int i=0; i<l; i++)
  {
    if(arr[i]=='H' || arr[i]=='Q' || arr[i]=='9'){
      cout<<"YES"<<endl;
      yes=true;
      break;
    }
  }
  if(!yes)
    cout<<"NO"<<endl;
  return 0;
}
