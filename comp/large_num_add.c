
#include<stdio.h>
#include<string.h>
int main(){
  	int max = 10000;
    char num1[max],num2[max],*pa,*pb; //initializing strings num1 and num2
    int ac=0,bc=0,sc=0; // ac, bc, and sc are number of digits in the given numbers
 	int a[max],b[max],sum[max]; //initializing integer array a, b and sum array.
    int remainder = 0,i; // remainder and for loop variable i initialized
    
    printf("Enter first number : ");
    scanf("%s",num1); //taking first number from user in string format
    printf("\nEnter second number : ");
    scanf("%s",num2); //taking second number from user in string format

    pa = num1; //pointer to first number string
    pb = num2; //pointer to second number string

    //storing  first string number in the integer array
    while(*pa){  //loop while run untill it get null character
        a[ac++] = *pa++ - '0';  //48 is ASCII value of character zero
    }

    //storing  second string number in the integer array
    while(*pb){
         b[bc++] = *pb++ - '0';
    }

    //additin of two numbers
    if(ac<bc){
         for(i = ac;i > 0;i--){
             sum[sc++]= ((a[i-1] + b[--bc]) + remainder)%10;
             remainder = ((a[i-1] + b[bc]) + remainder)/10;
         }
         while(bc>0){
             sum[sc++] = b[--bc] + remainder;
             remainder = 0;
         }
    }
    else{
         for(i = bc;i > 0;i--){
             sum[sc++]= ((b[i-1] + a[--ac]) + remainder)%10;
            remainder = ((b[i-1] + a[ac]) + remainder)/10;
        }
         if(ac==0 && remainder==1)
             sum[sc++] = remainder;
            while(ac>0){
            sum[sc++] = a[--ac] + remainder;
                remainder = 0;
            }
    }
    printf("Sum of both number is : ");
    for(i=sc-1;i>=0;i--){
         printf("%d",sum[i]);
    }
    return 0;
}
