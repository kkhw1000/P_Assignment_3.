#include <stdio.h>


int main(){

int n,i;
float num[100],Max,Save;

printf("Enter the number of elements:");

scanf("%d", &n);

while(n>100 || n<=0)
{
printf("Error! number should in range of (1 to 100)\n");
printf("Enter the number again:");
scanf("%d", &n);
}




 
 for(i=0;i<n;++i)
{
printf("%d.Number:  ",i+1);
scanf("%f", &num[i]);

}



	for(i=0;i<n;i++) 
	{
		
		if (num[0] < num[i]) 
		{
			Save = num[0];
			num[0] = num[i];
			num[i] = Save;
		}
		else if (num[0] == num[i]) num[i] = 0;
		
	} 
	num[0] = 0;




for (i = 0; i<n; i++) 
{

	if (num[0] < num[i])
	{
		Save = num[0];
		num[0] = num[i];
		num[i] = Save;
		Max = num[0];

	}
}
printf("second largest number is %f", Max);

return 0; 
}