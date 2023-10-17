#include<stdio.h>
void main()
{

float avg,sum=0;
int n;
printf("Enter array size. ");
scanf("%d",&n);
int arr[n];
printf("Enter array element ");

for(int I=0;I<n;I++)
{
scanf("%d",&arr[I]);
}
for(int I=0;I<n;I++)
{


sum=sum+arr[I];
avg=sum/n;}
printf("%f",avg);
}


