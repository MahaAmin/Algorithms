#include<iostream>
using namespace std;

int main(){
  int t;
  cin>>t;
  for(int i=0; i<t; i++){
    int n,m;
    cin>>n>>m;
    int a[n], p[m];
    for(int j=0; j<n; j++){
      cin>>a[j];
    }
    for(int j=0; j<m; j++){
      cin>>p[j];
    }

    bool canSort=true;
    // bubble sort
    for(int j=0; j<n-1; j++){
      for(int k=0; k<n-j-1; k++){
        if(a[k] > a[k+1]){
          bool flag = false;
          for(int w=0; w<m; w++){
            if(p[w]==k+1)
              flag=true;
          }

          if(flag){
            int tmp = a[k];
            a[k]=a[k+1];
            a[k+1]=tmp;
          }
          else{
            canSort=false;
          }
        }
      }
    }


    if(canSort)
      cout<<"YES"<<endl;
    else
      cout<<"NO"<<endl;

  }
  return 0;
}
