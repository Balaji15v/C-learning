#include<stdio.h>
int main(){
    int a;
    printf("Enter the marks of the student:");
    scanf("%d",&a);
    if(a<=30){
        printf("grade is 'F'\n");
    }
    else if(a<=70&&a>30){
        printf("grade is 'B'\n");
    }
    else if(a<90&&a>70){
        printf("grade is 'A'\n");
    }
    else{
        printf("grade is'A++'\n");
    }
}
