#include<iostream>
using namespace std;

int main()
{
  char word[1010];
  cin>>word;
  word[0] = toupper(word[0]);
  cout<<word<<endl;
  return 0;
}
