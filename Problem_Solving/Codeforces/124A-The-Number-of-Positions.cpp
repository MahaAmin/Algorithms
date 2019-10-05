#include<iostream>
#include<algorithm>

int main(){
  int n,a,b;
  std::cin>>n>>a>>b;
  int result = n - std::max(a+1, n-b) + 1;
  std::cout<<result<<'\n';
  return 0;
}
