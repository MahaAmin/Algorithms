#include <iostream>
#include <algorithm>
using namespace std;

int main(){
  int l;
  while(cin>>l, l!=0){
    char road[l];
    cin>>road;
    int indexLastR = -l;
    int indexLastD = -l;
    int result = l+100;
    for(int i=0; i<l; i++){
      if(road[i]=='Z'){
        result=0;
        break;
      }
      else if(road[i]=='R'){
        indexLastR = i;
        result = min(result, i - indexLastD);
      }
      else if(road[i]=='D'){
        indexLastD = i;
        result = min(result, i - indexLastR);
      }
    }
    cout<<result<<endl;
  }
  return 0;
}
