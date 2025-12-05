#include<stdio.h>
int main(){
    int s,m,r,sn;//s=sunday,m=monday,r=raining,sn=snow
    int a;
    printf("Enter the values of s,m,r,sn,a:");
    scanf("%d %d %d %d %d",&s,&m,&r,&sn,&a);
    if(s==1&&r==1){
        printf("It's Sunday and it is raining\n");
    }
    else if((s==1&&r==0)||(s==0&&r==1)){
        printf("The condition is not satisfied\n");
    }
    if(m==1&&sn==1){
        printf("It is snowing and it is monday\n");
    }
    else if((m==1&&sn==0)||(m==0&&sn==1)){
        printf("Either it is monday or it is snowing\n");
    }
    else{
        printf("neither of them is happening\n");
    }
    if(9<a<100){
        printf("The number you entered %d lies in between 9 and 100\n",a);
    }
    else{
        printf("The number you entered %d does not lies in between 9 and 100\n",a);
    }
}
