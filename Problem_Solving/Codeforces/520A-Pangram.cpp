#include<iostream>
using namespace std;

int main(){
  int n;
  cin>>n;
  char word[n];
  cin>>word;
  int alphabets[26] = { 0 };
  bool flag = false;
  if(n<26)
    flag = true;
  else{
    for(int i=0; i<n; i++){
      if(tolower(word[i]) == 'a')
        alphabets[0] = 1;
      else if(tolower(word[i]) == 'b')
        alphabets[1] = 1;
      else if(tolower(word[i]) == 'c')
        alphabets[2] = 1;
      else if(tolower(word[i]) == 'd')
        alphabets[3] = 1;
      else if(tolower(word[i]) == 'e')
        alphabets[4] = 1;
      else if(tolower(word[i]) == 'f')
        alphabets[5] = 1;
      else if(tolower(word[i]) == 'g')
        alphabets[6] = 1;
      else if(tolower(word[i]) == 'h')
        alphabets[7] = 1;
      else if(tolower(word[i]) == 'i')
        alphabets[8] = 1;
      else if(tolower(word[i]) == 'j')
        alphabets[9] = 1;
      else if(tolower(word[i]) == 'k')
        alphabets[10] = 1;
      else if(tolower(word[i]) == 'l')
        alphabets[11] = 1;
      else if(tolower(word[i]) == 'm')
        alphabets[12] = 1;
      else if(tolower(word[i]) == 'n')
        alphabets[13] = 1;
      else if(tolower(word[i]) == 'o')
        alphabets[14] = 1;
      else if(tolower(word[i]) == 'p')
        alphabets[15] = 1;
      else if(tolower(word[i]) == 'q')
          alphabets[16] = 1;
      else if(tolower(word[i]) == 'r')
        alphabets[17] = 1;
      else if(tolower(word[i]) == 's')
        alphabets[18] = 1;
      else if(tolower(word[i]) == 't')
        alphabets[19] = 1;
      else if(tolower(word[i]) == 'u')
        alphabets[20] = 1;
      else if(tolower(word[i]) == 'v')
        alphabets[21] = 1;
      else if(tolower(word[i]) == 'w')
        alphabets[22] = 1;
      else if(tolower(word[i]) == 'x')
        alphabets[23] = 1;
      else if(tolower(word[i]) == 'y')
        alphabets[24] = 1;
      else if(tolower(word[i]) == 'z')
        alphabets[25] = 1;
    }
  }
  for(int i=0; i<26; i++){
    if(alphabets[i] == 0){
      flag = true;
      break;
    }
  }
  if(!flag)
    cout<<"YES"<<endl;
  else
    cout<<"NO"<<endl;
  return 0;
}
