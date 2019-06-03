#include<iostream>
using namespace std;

int main(){
  int n,k,l,c,d,p,nl,np;
  cin>>n>>k>>l>>c>>d>>p>>nl>>np;
  int liters=(k*l)/nl;
  int slices=c*d;
  int salt=p/np;
  cout<<min(liters,min(slices,salt))/n<<endl;
  return 0;
}
