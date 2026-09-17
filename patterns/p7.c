#include <stdio.h>

int pattern7(int n)

{
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i;j++){
            printf(" ");
        }
    for(int k=0;k<2*i+1;k++){
        printf("*");
    }
    printf("\n");
    }
}
int pattern8(int n)
{
    for(int i=0;i<n;i++){
        //space
        for(int k=0;k<i;k++){
            printf(" ");
        }
        //stars
        for(int j=0;j<(2*n-(2*i+1));j++){
            printf("*");
        }
        //space
        for(int k=0;k<i;k++){
            printf(" ");
        }

        printf("\n");
    }
}
int pattern9(int n)
{
    //just combine pattern 7 and 8 ig
}
int pattern10(int n)
{
    for(int i=0;i<n;i++){
        if(n<((n+1)/2))
        {
            for(int j=0;j<=i;j++)
            {
                printf("*");
            }
            printf("\n");
        }
        else
        {
            for(int k=0;k<n-i;k++)
            {
                printf("*");
            }
            printf("\n");
        }
    }
}
int pattern11(int n)
{
    int start = 1;
    for(int i=0;i<n;i++){
        if(i%2 == 0)// even row
        {
            start = 1;
        }
        else{
            //odd row
            start =0;
        }
        for(int j=0;j<=i;j++){
            printf("%d",start);
            start = 1 - start; //flipping of zero, dam so simple, i was just overthinking
            
        }
        printf("\n");
    }
}
int pattern12(int n)
{
    int fnSpace =2*(n-1);// first space value, we will decrement it by 2 after each row
    
    for(int i=1;i<=n;i++)
    {
        //numbers
        for(int j=1;j<=i;j++){
            printf("%d",j);
        }
        //space
        
        for(int j=0;j<fnSpace;j++){
            printf(" ");
        }
        fnSpace = fnSpace -2;

        

        //numbers
        for(int k=i;k>=1;k--){
            printf("%d",k);
        }

        //new line
        printf("\n");
    }
}
int pattern13(int n)
{
    int stNum = 1;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++){
            printf("%d",stNum);
            printf(" ");
            stNum=stNum+1;
        }
        
        printf("\n");


    }
}
int pattern14(int n)
{
    
    for(int i=0;i<n;i++)
    {
        char stChar = 'A';
        for(int j=0;j<=i;j++){
            printf("%c",stChar);
            stChar = stChar +1;
        }
        printf("\n");
    }
}
int pattern15(int n)
{
    for(int i=0;i<n;i++)
    {
        char stChar = 'A';
        for(int j=n;j>i;j--){
            printf("%c",stChar);
            stChar = stChar + 1;
        }
        printf("\n");
    }
}
int pattern16(int n)
{
    char stChar = 'A';
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<=i;j++){
            printf("%c",stChar);
        }
        stChar = stChar + 1;
        printf("\n");
    }
}
int pattern17(int n)
{
    for(int i=0;i<n;i++)
    {
        
        //space
        for(int j=n;j>i;j--){
            printf(" ");
        }

        //letters
        char stChar = 'A';
        int breakpoint = (2*i+1)/2;
        for(int k=0;k<(2*i+1);k++){
            printf("%c",stChar);
            if(k<breakpoint){
                stChar++;
            }
            else{
                stChar--;
            }
        }

        //space
        for(int l=n;l>i;l--){
            printf(" ");
        }

        //next line
        printf("\n");

    }
}
int pattern18(int n)
{
    for(int i=0;i<n;i++)
    {
         char stChar ='E';
         stChar = stChar - i;
        
        for(int j=0;j<=i;j++){
           
            
            printf("%c",stChar);
            stChar++;
        }

        //next line
        printf("\n");
    }
}
int pattern19(int n)
{
   // top pattern
    for(int i=0;i<n;i++)
    {
        //elements
        for(int j=0;j<n-i;j++){
            printf("*");
        }
        //space
        for(int k=0;k<2*i;k++){
            printf(" ");
        }
        

        //element
        for(int j=0;j<n-i;j++){
            printf("*");
        }

        //newline
        printf("\n");
    }
    //below pattern
    int intSpace = 8;
    for(int i=0;i<n;i++)
    {
        //elements
        for(int j=0;j<=i;j++){
            printf("*");
        }
        //space
        for(int k=0;k<intSpace;k++){
            printf(" ");
        }
        intSpace = intSpace -2;
        

        //element
        for(int j=0;j<=i;j++){
            printf("*");
        }

        //newline
        printf("\n");
}
}
int pattern20(int n)
{
    //top part
    for(int i=0;i<n;i++)
    {

    //stars
    for(int j=0;j<=i;j++){
        printf("*");
    }

    //space
    int space = 8;
    space = space-2*i;
    for(int k=0;k<space;k++){
        printf(" ");
    }
    

    //stars
    for(int j=0;j<=i;j++){
        printf("*");
    }
    //space
    printf("\n");

    }
    //lower part
    for(int i=0;i<n-1;i++)
    {
        //stars
        for(int j=n-1;j>i;j--){
            printf("*");
        }

        //space
        int space=2;
        space =space+2*i;
        for(int k=0;k<space;k++){
            printf(" ");
        }

        //stars
        for(int j=n-1;j>i;j--){
            printf("*");
        }

        //nextline
        printf("\n");
    }
    

}
int pattern21(int n)
{
    //to print a square 
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++){
          if(i==0 || j==0 || i==n-1 || j==n-1){
            printf("*");
          }
          else{
            printf(" ");
          }
        
        }
        //next line
        printf("\n");
    }
}
int pattern22(int n)
{
    //logic is wrong 
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++){
            if(i==0||j==0||j==n-1||i==n-1){
                printf("4");
            }
            if(i==1||j==1||j==n-2||i==n-2){
                printf("3");
            }
            if(i==2||j==2||j==n-3||i==n-3){
                printf("2");
            }
            else{
                printf(" ");
            }
        }
        //space
        printf("\n");
    }
}


void main()

{
    pattern22(7);

}