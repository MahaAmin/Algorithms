#include<iostream>
using namespace std;

int main()
{
  char name[100] = { '!'};
  for(int i=0; i<100; i++)
    name[i] = '!';
  cin>>name;
  int result = 0;
  bool chars[26];

  for(int i=0; i<26; i++)
    chars[i] = false;

int i=0;
while(name[i]!= '!')
{
  if(chars[(name[i]-'a')] == false)
    chars[(name[i]-'a')] = true;
  i++;
}

  for(int i=0; i<26; i++)
  {
    if(chars[i])
      result++;
  }

  if(result%2 == 0)
    cout<<"CHAT WITH HER!";
  else
    cout<<"IGNORE HIM!";
  return 0;
}
