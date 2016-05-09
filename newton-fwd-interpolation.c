#include<stdio.h>
#include<math.h>
int main ()
{
	float ax[20], ay[20], diff[19][19], p, x0, y=0;
	int i, j,n;
	printf("\t\tNEWTON'S FORWARD INTERPOLATION\t\t\n\n");
	printf("Enter the number of pairs you would like to feed:\t\a");
	scanf("%d", &n);
	printf("\n\nEnter the values of x and y in the format shown below:\n\n\t x         y\n\n\a");
	for(i=0;i<n;i++)
	 scanf("%f%f", &ax[i], &ay[i]);
	
	printf("\n\nThe difference table is as follows:\n");
	
	for(i=0;i<n-1;i++)
	{
		printf("\n\nDifferences of order %f are as follows:\n", i+1);
		for(j=0;j<n-i-1;j++)
		{
			diff[i][j] = ay[j+1] - ay[j];
			printf("\n\t%c(%f,%d) = %f", 30, i+1,j, diff[i][j]);
		}
		
		for(j=0;j<n-1-i;j++)
		 ay[j] = diff[i][j];
		
	}
	j=0;
	printf("\nEnter the value at which interpolation is desired:\t");
	scanf("%f", &x0);
	 
	p = (x0 - ax[0])/(ax[1]-ax[0]);
	
	y = y + ay[0];
	if(i>n) {
	 	for(j=0;j<n-1;j++)  diff[j][0] = 0; 
	}
	 y = p*diff[0][0]  + (p*(p-1)*diff[1][0])/2 + (p*(p-1)*(p-2)*diff[2][0])/6 + (p*(p-1)*(p-2)*(p-3)*diff[3][0])/24;
	 printf("\n\nThe value after interpolation is %f", y);
         return 0;
 }
