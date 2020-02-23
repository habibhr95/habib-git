/*Prime Number Check using c programming
This program can check a integer number either it is prime or not */

#include<stdio.h>
int main()
{
    int i,n,flag=0;
    while(1){
    printf("Enter a integer number:\n");
    scanf("%d",&n);
        for(i=2;i<n/2;i++)
        {
            if(n%i==0)
            {
               flag=1;
            }
        }
         if(flag==0)
            printf("Number is prime.\n");
         else
             printf("Number is not prime.\n");
 /*scanf("%d",&i); */
    }
}