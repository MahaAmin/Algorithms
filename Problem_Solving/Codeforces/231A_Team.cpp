#include<iostream>

int main()
{
  int n,prob=0;
  char p,v,t;
  std::cin>>n;
  for(int i=0; i<n; i++)
  {
    std::cin>>p>>v>>t;
    if(v=='1' && t=='1')
      prob++;
    else if(p=='1' && t=='1')
      prob++;
    else if(p=='1' && v=='1')
      prob++;
  }

  std::cout<<prob<<std::endl;
  return 0;
}
