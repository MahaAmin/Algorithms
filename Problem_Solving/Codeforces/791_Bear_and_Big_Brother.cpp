#include <iostream>

int main()
{
  int a,b,year=0;
  std::cin>>a>>b;
  while(a<=b)
  {
    a*=3;
    b*=2;
    year++;
  }
  std::cout<<year<<std::endl;
  return 0;
}
