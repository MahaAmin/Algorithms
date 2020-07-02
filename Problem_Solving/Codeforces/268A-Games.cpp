#include<iostream>
using namespace std;

int main(){
  int n;
  cin>>n;
  int home[n], guest[n];
  for(int i=0; i<n; i++){
    cin>>home[i]>>guest[i];
  }

  int counter=0;
  for(int i=0; i<n; i++){
    for(int j=0; j<n; j++){
      if(home[i]==guest[j])
        counter++;
    }
  }

  cout<<counter<<endl;
  return 0;
}
