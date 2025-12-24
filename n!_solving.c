#include<stdio.h>
int main(){
    int a,i;
    unsigned long long fact=1;
    printf("Enter the number:");
    scanf("%d",&a);
    if(a<0){
        printf("The factorial is invalid\n");
    }
    else{
   for(i=1;i<=a;i++){
           fact=fact*i;
       }
       printf("the %d! is %llu\n",a,fact);
    }
}
