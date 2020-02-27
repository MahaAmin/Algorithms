#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main(){
  char a[]=cin>>a;
  char b[]=cin>>b;
  for(int i=0; i<a.length(); i++)
    a[i]=tolower(a[i]);
  for(int i=0; i<b.length(); i++)
    b[i]=tolower(b[i]);

  if(lexicographical_compare(a,a+a.length()-1,b,b+b.length()-1))
  {
    cout<<"-1"<<endl;
  }
  else if(lexicographical_compare(b,b.length(),a,a.length()))
  {
    cout<<"1"<<endl;
  }
  else
  {
    cout<<"0"<<endl;
  }

  return 0;
}
