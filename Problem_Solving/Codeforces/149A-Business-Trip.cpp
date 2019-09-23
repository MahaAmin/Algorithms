#include<iostream>
#include<algorithm>

int main(){
  int k, a[12];
  std::cin>>k;
  for(int i=0; i<12; i++)
    std::cin>>a[i];

  std::sort(a, a+12, std::greater<int>());

  int i=0, current=0;
  while(current < k && i<12){
    current += a[i];
    i++;
  }
  if(current<k)
    std::cout<<"-1"<<'\n';
  else
    std::cout<<i<<'\n';
  return 0;
}
