//EulerProblem5
#include<iostream>
#include<math.h>

// using standard namespace
using namespace std;

// function definition
int prime (long int x)
{
  int a=0;
  for (int j=2;j<=x/2;j++)
     {
         if (x%j==0)
           {
             a=1;
           }
    }
   return (a);
}

int up(int x,int y)
{
  int b=log(y)/log(x);
  return (b);
}
//End of Function

//Main function begins
int main ()
   {
     int a,b,sum=1;
     cout<<"Enter the last number \n";
     cin>>a;
     for(int i=2;i<=a;i++)
     {
       int c=0;
       c=prime(i);
       if (c==0)
       {
         b=up(i,a);
         sum=sum*pow(i,b);
       }
     }
     cout<<sum;
  }
//End Of Main
