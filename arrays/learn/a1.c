//Write a program to read and display n numbers using an array

#include<stdio.h>
#include<stdlib.h>

int main()
{
int a[10],size;
printf("Enter the size of the array:\n");
scanf("%d",&size);
if(size>10)
{
    printf("your entered size is greter than maximum array size\n");
    exit(0);
}
else
{
    printf("Enter the elements of the array\n");
    for(int i=0;i<size;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Elements in the array are:\n");
    for(int i=0;i<size;i++)
    {
        printf("%d\n",a[i]);
    }

}
}
