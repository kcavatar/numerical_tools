#include<stdio.h>
#include<math.h>
#include<stdlib.h>

int main()

{
	FILE *fp;
	fp = fopen("solutions.txt", "w");
	float x[20], y[20], sum = 0;
	int n, i;
	printf("\tTRAPEZOIDAL RULE:\n\n");
	fprintf(fp, "\tTRAPEZOIDAL RULE:\n\n");
	printf("Enter the value of 'n' you would like to feed:\t\a");
	scanf("%d", &n);
	printf("\n\nEnter the values of x and y = f(x) in the format shown below:\n\n\t x         y\n\n\a");
	for(i=0;i<=n;i++)
	 scanf("%f%f", &x[i], &y[i]);
	sum+=y[0] + y[n];
    fprintf(fp,"x\t\ty\n\n");
	
	for(i=1;i<n;i++)
	{
		 sum+=2*y[i];
	}
	
	sum = (x[2]-x[1])*(sum/2);
	
	printf("\aThe result is %f", sum);
	for(i=0;i<=n;i++)  
	{
		fprintf(fp, "%f\t%f\n\n", x[i], y[i]);
	}
	fprintf(fp, "The result after computation is %f\n\n(c) Krishna, 2015", sum);
	
}
