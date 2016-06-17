
#include<iostream>
const int size= 3;
using namespace std;
int main()
{
  double a[size][size] = {{2.0,3,4.0},{4.366,7.8,7.21},{8.2111,4.5,8.988}}, b[size] = {2,6,7};
  int i,j,con;
  double alpha;
  //Generating upper triangular matrix

  //con controls the elimination process
  for(con=0;con<size;con++)
   for(i=con;i<size-1;i++)
   {
   	alpha = a[i+1][con]/a[con][con];
    for(j=con;j<size;j++)
    {
     a[i+1][j] = a[i+1][j] - alpha*a[con][j];
    }
    b[i+1] = b[i+1] - alpha*b[con];
   }
    
/* cons = (a[1][0]/a[0][0]);
  for(j=0;j<3;j++)
   {
     a[1][j] = a[1][j] - a[0][j]*cons;
   }
*/
 for(i=0;i<size;i++)
   {
    for(j=0;j<size;j++)
      cout<<a[i][j]<<"\t";

    cout<<endl<<endl;
   }
 for(i=0;i<size;i++)
   cout<<b[i]<<"\t";

   //Back substitution
return true;

}





