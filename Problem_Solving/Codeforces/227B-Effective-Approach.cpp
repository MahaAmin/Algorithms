#include <iostream>
using namespace std;

int main(){
  int n, q, vasya=0, petya=0;
  cin>>n;
  int arr[n];
  for(int i=0; i<n; i++){
    cin>>arr[i];
  }
  cin>>q;
  for(int i=0; i<q; i++){
    int query;
    cin>>query;
    int tmpVasya = 0;
    for(int j=0; j<n; j++){
      tmpVasya++;
      if(arr[j]==query)
        break;
    }
    vasya+=tmpVasya;
    petya += n-tmpVasya+1;
  }
  cout<<vasya<<" "<<petya<<endl;
  return 0;
}
