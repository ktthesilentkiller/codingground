#include <stdio.h>

int main()
{
 
int temp, sum=0, i, number;
printf("\n \t Enter the number =");
scanf("%d",&number);
for(i=0; 0<number;i++)
{
    
temp=number%10;
number =number/10;
sum=sum+temp;

    
}

printf("\n \t Sum of digits = %d",sum);
printf("\n\t Enjoy The Proggramming With Me ");

return 0;
}

