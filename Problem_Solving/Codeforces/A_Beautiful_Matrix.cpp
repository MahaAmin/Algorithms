#include <iostream>
using namespace std;

int main()
{
  bool m[5][5];
  int i_index, j_index;
  int steps=0;
  for(int i=0; i<5; i++)
  {
    for(int j=0; j<5; j++)
    {
      cin>>m[i][j];
      if(m[i][j])
      {
        i_index=i;
        j_index=j;
      }
    }
  }

  if(i_index<2)
    steps+= (2-i_index);
  else
    steps+=(i_index-2);
  if(j_index<2)
    steps+= (2-j_index);
  else
    steps+=(j_index-2);

cout<<steps<<endl;


  return 0;
}
