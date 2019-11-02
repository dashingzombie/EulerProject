//EulerProblem2
#include<iostream>
#include<math.h>

// using standard namespace
using namespace std;

//  function definition
void fibonacci()
{
  long int j=1;
  long int i=2;
  long int k=1;
  long int sum=0;
  while (i<4000000)
   {
       sum=sum+i;
       k=j+i;
       j=i+k;
       i=k+j;

   }
   cout<<"The sum is "<<sum;
}
//End of Function

//Main function begins
int main ()
   {
       fibonacci();
   }
//End Of Main
