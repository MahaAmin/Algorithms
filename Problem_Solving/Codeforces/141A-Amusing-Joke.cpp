#include<iostream>
#include<string>
using namespace std;

int main(){
  string a,b,c;
  cin>>a>>b>>c;
  string z=a+b;
  if(z.length() != c.length())
    cout<<"NO"<<endl;
  else{
    bool flags[c.length()]={ false };
    for(int i=0; i<z.length(); i++)
    {
      for(int j=0; j<c.length(); j++){
        if(z[i]==c[j] && !flags[j]){
          flags[j]=true;
          break;
        }
      }
    }
    bool allused=true;
    for(int i=0; i<c.length(); i++){
      if(!flags[i]){
        cout<<"NO"<<endl;
        allused=false;
        break;
      }
    }
    if(allused)
      cout<<"YES"<<endl;

  }
  return 0;
}
