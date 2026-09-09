// Write a program to find the mean of n numbers using arrays.

#include<stdio.h>


int main()
{
int n;
int sum = 0;
float mean;
printf("Enter the number of elements of array\n");
scanf("%d",&n);
int a[n];
printf("Enter the elements of the array\n");
for(int i=0;i<n;i++)
{
    scanf("%d",&a[i]);
}
for(int i=0;i<n;i++)
{
    sum = sum+a[i];
}
mean = (float)sum/n;
printf("the sum of %d number of elements is: %d\n",n,sum);
printf("the mean of %d number of elements is: %.2f\n",n,mean);

}