#include<iostream>

int main(){
  int n, week[7], pages=0;
  std::cin>>n;
  for(int i=0; i<7; i++)
    std::cin>>week[i];

  int i=0;

  while(pages<n){
    pages += week[i%7];
    i++;
  }
  if(i%7)
    std::cout<<i%7<<'\n';
  else
    std::cout<<"7"<<'\n';
  return 0;
}
