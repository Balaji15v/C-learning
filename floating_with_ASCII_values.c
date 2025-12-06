#include<stdio.h>
int main(){
    char i,j;
    float a,b;
   for(i='A';i<='Z';i++){
       printf("%c = %f\n",i,a=i);
   }
   printf("\n");
   for(j='a';j<='z';j++){
       printf("%c = %f\n",j,b=j);
   }
}
