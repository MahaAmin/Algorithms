#include<iostream>
using namespace std;


int main()
{
  char s1[100] = { 0 };
  char s2[100] = {0};
  cin>>s1>>s2;
  int i=0;
  while(s1[i])
  {
    s1[i] = tolower(s1[i]);
    S2[i] = tolower(s2[i]);
    i++;
  }
  return 0;
}
