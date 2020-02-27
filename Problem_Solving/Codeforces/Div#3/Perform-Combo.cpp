#include<iostream>
#include<string>
using namespace std;

int main(){
  int t;
  cin>>t;
  string alpha="abcdefghijklmnopqrstuvwxyz";
  for(int i=0; i<t; i++){
    int n,m;
    cin>>n>>m;
    string s;
    int p[m];
    cin>>s;
    for(int j=0; j<m; j++)
      cin>>p[j];

    int count[26] = {0};

    for(int j=0; j<m; j++){
      for(int k=0; k<p[j]; k++){
        count[s[k]-'a']++;
      }
    }

    for(int j=0; j<n; j++)
      count[s[j]-'a']++;

    for(int j=0; j<26; j++){
      cout<<count[j]<<" ";
    }
    cout<<endl;
  }
  return 0;
}
