//EulerProblem1
#include<iostream>
#include<math.h>

// using standard namespace
using namespace std;

// function definition
int multiple(int x)
{
   x=x-1;
   int q=x/3;
   int w=x/5;
   int r=x/15;
   int c= 3*(q*(q+1))/2+5*(w*(w+1))/2-15*(r*(r+1))/2;
   return (c);
}
//End of Function

//Main function begins
int main ()
   {
       int a;
       cout<<"Enter the number";
       cin>>a;
       cout<<"The sum of all the multiples of 3 or 5 below "<<a<<" is "<<multiple(a);
    }
//End Of Main
