#include<iostream>
using namespace std;



void rightPyramid(int height)
{
  for(int i=0; i<height; i++)
  {
    for(int j=0; j<=i; j++)
      cout<<"*";
    cout<<endl;
  }
}

void centerPyramid(int height)
{
  for(int i=0; i<height; i++)
  {
      for(int j=height-i; j>1; j--)
        cout<<" ";

      for(int j=0; j<=i; j++)
        cout<<"* ";

      cout<<endl;
  }
}


void hexagonPyramid(int height)
{
  for(int i=0; i<height; i++)
  {
      for(int j=height-i; j>1; j--)
        cout<<" ";

      for(int j=0; j<=i; j++)
        cout<<"* ";

      cout<<endl;
  }

  for(int i=0; i<height; i++){
    for(int j=0; j<=i; j++)
      cout<<" ";
    for(int j=height-i; j>1; j--)
      cout<<"* ";
    cout<<endl;

  }
}
int main()
{
  rightPyramid(6);
  centerPyramid(6);
  hexagonPyramid(6);
  return 0;
}
