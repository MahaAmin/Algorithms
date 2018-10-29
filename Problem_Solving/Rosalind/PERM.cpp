#include <iostream>
using namespace std;

int factorial(int n)
{
  int result = 1;
  int tmp = n;
  for(int i=0; i<n; i++)
  {
    result *= tmp;
    tmp --;
  }
  return result;
}
void printArr(int a[], int n)
{
  for(int i=0; i<n; i++)
    {
      if(i != n-1)
        cout<<a[i]<<" ";
      else
        cout<<a[i]<<endl;
    }
}

void PERM(int a[], int size, int n)
{
    // if size becomes 1 then prints the obtained
    // permutation
    if (size == 1)
    {
        printArr(a, n);
        return;
    }

    for (int i=0; i<size; i++)
    {
        PERM(a,size-1,n);

        // if size is odd, swap first and last
        // element
        if (size%2==1)
            swap(a[0], a[size-1]);

        // If size is even, swap ith and last
        // element
        else
            swap(a[i], a[size-1]);
    }
}


int main()
{
  int n;
  cin>>n;
  int a[n];
  for (int i=1; i<=n; i++)
    a[i-1] = i;
  cout<<factorial(n)<<endl;
  PERM(a,n,n);
  return 0;
}
