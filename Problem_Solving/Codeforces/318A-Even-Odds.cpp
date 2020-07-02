#include<iostream>

int main(){
  long long n,k,result;
  std::cin>>n>>k;

  if(n%2){  // n is odd
    if(k > ((n/2)+1))
    {
      k = k - ((n/2)+1);
      result = 0;
      for(int i=0; i<k; i++)
        result += 2;
    }
    else{
      result = 1;
      for(int i=0; i<k-1; i++)
        result +=2;
    }
  }
  else{   // n is even
    if(k > (n/2)){  // even numbers
      k = k - n/2;
      result = 0;
      for(int i=0; i<k; i++)
        result += 2;
    }
    else{
      result = 1;
      for(int i=0; i<k-1; i++)
        result +=2;
    }
  }
  std::cout << result << '\n';
  return 0;
}
