#include<iostream>
using namespace std;

int main()
{
  int no_cards;
  cin>>no_cards;
  int arr[no_cards];

  for(int i=0; i<no_cards; i++)
    cin>>arr[i];


  int right = no_cards - 1;
  int left = 0;
  int sereja = 0;
  int dima = 0;
  bool serejaTurn = true;

  while(left != right)
  {
    if(serejaTurn)
    {
      if(arr[left] >= arr[right])
      {
        sereja += arr[left];
        left ++;
      }
      else
      {
        sereja += arr[right];
        right -- ;
      }
      serejaTurn = false;
    }

    else
    {
      if(arr[left] >= arr[right])
      {
        dima += arr[left];
        left ++;
      }
      else
      {
        dima += arr[right];
        right -- ;
      }
      serejaTurn = true;
    }
  }

  if(serejaTurn)
  {
    sereja += arr[right];
  }
  else
  {
    dima += arr[right];
  }

  cout<<sereja<<" "<<dima<<endl;

  return 0;
}
