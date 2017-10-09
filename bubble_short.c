#include<stdio.h>
#include<stdlib.h>
void bubblesort(int a[],int size);
void main()
{
int a[50],n,i;
printf("\n enter the size of the array");
scanf("%d",&n);
if(n>50)
{
printf("\n error");
exit(0);
}
printf("\n enter the array\n");
for(i=0;i<n;i++)
scanf("%d",&a[i]);
bubblesort(a,n);
printf("\n the sorted array is\n");
for(i=0;i<n;i++)
printf("%d\t",a[i]);
}
void bubblesort(int a[],int size)
{
int temp,i,j;
for(i=0;i<size;i++)
{
for(j=0;j<size-1;j++)
{
if(a[j]>a[j+1])
{
temp=a[j];
a[j]=a[j+1];
a[j+1]=temp;
}
}
}
}
