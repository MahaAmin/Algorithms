#include<iostream>
#include<string>
using namespace std;

int main(){
  string s;
  int ones=0,twos=0,threes=0,n=0;
  cin>>s;
  int l=s.length();
  for(int i=0; i<l; i++){
    if(s[i]=='1'){
      ones++;
      n++;
    }
    else if(s[i]=='2'){
      twos++;
      n++;
    }
    else if(s[i]=='3'){
      threes++;
      n++;
    }
  }
  if(ones==n)
  {
    for(int i=0; i<ones-1; i++)
    cout<<"1+";
    cout<<"1"<<endl;
  }
  else if(ones<n){
    for(int i=0; i<ones; i++)
    cout<<"1+";
  }
  if(twos!=0 && ones+twos==n)
  {
    for(int i=0; i<twos-1; i++)
    cout<<"2+";
    cout<<"2"<<endl;
  }
  else if(ones+twos<n){
    for(int i=0; i<twos; i++)
    cout<<"2+";
  }
  if(threes!=0){
    for(int i=0; i<threes-1; i++)
    cout<<"3+";
    cout<<"3"<<endl;
  }


}
