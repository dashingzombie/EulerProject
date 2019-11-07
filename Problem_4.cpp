//EulerProblem4
#include<iostream>
#include<math.h>

// using standard namespace
using namespace std;

// function definition
int palindrome (int a , int b)
{
  int x=a*b;
  int rem,c,k,fin=0;
  c=x;
  k=0;
  while(c>0)
    {
      rem=c%10;
      c=c/10;
      k=k*10+rem;
    }
  if (k==x)
  {
   fin=x;
  }
  return(fin);
}
//End of Function

//Main function begins
int main ()
   {
       int a;
       int b=0;
      for(int i=999;i>=100;i--)
      {
        for(int j=999;j>=100;j--)
        {
           a=palindrome(i,j);
           if(a>b)
           {
             b=a;
           }
        }
      }
      cout<<b;
   }
//End Of Main
