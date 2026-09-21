// contains all sorting problems

#include<stdio.h>

void selectionSort(int arr[],int n)
// Tc - 0(n^2)
{
    int min;
    for(int i=0;i<=n-2;i++){  //observe and write logic
        min=i;
        for(int j=i;j<=n-1;j++)
        {
        if(arr[j]<arr[min]){
            min = j;
        }
    }
        int temp;
        temp = arr[i];
        arr[i] = arr[min];
        arr[min] = temp;
    }
}
void bubbleSort(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        int didSwap =0;
        for(int j=0;j<n-i-1;j++)
        {
            if(arr[j+1]<arr[j]){
                int temp = arr[j+1];
                arr[j+1] = arr[j];
                arr[j] = temp;
                didSwap++;
            }
        }
        if(didSwap == 0)
        {
        break;
        }
        printf("runs\n");
    }
}
void insertionSort(int arr, int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=1;j<n-)
    }// do this again, u messed up big time
}

int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    printf("Enter array elemets\n");
    for(int i=0;i<n;i++) // this is input
    {
        scanf("%d",&arr[i]);
    }
    // selectionSort(arr,n);
    insertionSort(arr,n);
    printf("After sorting the array elements are\n");
    for(int i=0;i<n;i++) // this is output 
    {
        printf("%d\t",arr[i]);
    }

}