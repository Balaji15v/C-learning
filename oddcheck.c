#include<stdio.h>
int main(){
    int a,i=1;
    do{
    printf("Enter the number:");
    scanf("%d",&a);
    if(a%2!=0){
        printf("The number you entered is odd number\n");
        }
    }while(a!=0);
}
