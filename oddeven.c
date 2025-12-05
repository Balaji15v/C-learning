#include<stdio.h>
#include<math.h>
int main(){
    int a;
    printf("Hello Vinit!\n");
    printf("Enter the number :");
    scanf("%d",&a);
    if(a==0){
        printf("The number you entered is neither odd nor even\n");
    }
    else if(a%2==0){
        printf("The number you've entered is even\n");
    }
    else if(a%2==1){
        printf("The number you've entered is odd\n");
    }
}
