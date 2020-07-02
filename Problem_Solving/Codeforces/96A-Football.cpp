#include<iostream>

int main(){
  char arr[101];
  std::cin>>arr;

  int len=0, zeros=0, ones=0;
  while(arr[len]!='\0')
    len++;

  int i=0;
  while(zeros!=7 && ones!=7 && i<len){
    if(arr[i]=='0'){
      zeros++;
      ones=0;
    }
    else{
      ones++;
      zeros=0;
    }
    i++;
  }
  if(zeros==7 || ones==7)
    std::cout<<"YES"<<'\n';
  else
    std::cout<<"NO"<<'\n';
  return 0;
}
