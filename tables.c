#include<stdio.h>
int main(){
    int a;
    printf("Enter the number:");
    scanf("%d",&a);
    printf("The multiplication table of %d is\n ",a);
    for(int i=1;i<=10;i++){
        int mul=a*i;
        printf("%d * %d = %d\n",a,i,mul);
    }
}
