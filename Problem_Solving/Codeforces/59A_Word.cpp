#include<iostream>
using namespace std;

int main()
{
  char word[200];
  int lower=0, upper = 0;
  for(int i=0; i<200; i++)
    word[i] = '!';

  cin>>word;

  int i=0;
  while(word[i]!='!')
  {
    if(isupper(word[i]))
      upper++;
    else if(islower(word[i]))
      lower++;
    i++;
  }

  if(upper>lower)
  {
    int j=0;
    while(word[j] != '!')
    {
      word[j] = toupper(word[j]);
      j++;
    }

  }
  else
  {
    int j=0;
    while(word[j] != '!')
    {
        word[j] = tolower(word[j]);
        j++;
    }

  }

  cout<<word;
  return 0;
}
