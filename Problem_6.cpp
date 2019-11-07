//EulerProblem6
#include<iostream>
#include<math.h>

// using standard namespace
using namespace std;

// function definition
int summ(int x)
{
   int b=x*(x+1)/2;
   return b;
}

int square_summ(int x)
{
   int b=(x*(2*x+1)*(x+1))/6;
   return b;
}
//End of Function

//Main function begins
int main ()
   {
       int a;
       long int b;
       cout<<"Enter the number";
       cin>>a;
       cout<<summ(a)<<"\n"<<square_summ(a)<<"\n";
       b=pow(summ(a),2)-square_summ(a);
       cout<<b;
   }
//End Of Main
