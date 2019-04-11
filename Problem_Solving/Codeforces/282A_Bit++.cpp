#include<iostream>
using namespace std;

int main(){
  int n;
  int result=0;
  cin>>n;
  for(int i=0; i<n; i++){
    char x[3];
    bool pos_flag=0, neg_flag=0;
    for(int j=0; j<3; j++){
      cin>>x[j];
      if(x[j]=='+'){
        pos_flag=1;
        neg_flag=0;
      }
      else if(x[j]=='-'){
        pos_flag=0;
        neg_flag=1;
      }
    }
    if(pos_flag)
    result+=1;
    else if(neg_flag)
    result-=1;
  }
  cout<<result<<endl;
  return 0;
}
