#include<stdio.h>
int main(){
    int n,i=1;
    int sum=0;
    printf("Enter the number n:");
    scanf("%d",&n);
    for(i;i<=n;i++){
        sum=sum+i;
        printf("%d\n",i);
        printf("sum at %d numbers is %d\n",i,sum);
    }
    printf("the sum of %d numbers is %d\n",n,sum);
    printf("The reverse order of %d natural numbers are:\n",n);
    for(i=n;i>=1;i--){
        printf("%d\n",i);
    }
}
