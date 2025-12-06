#include<stdio.h>
int main(){
    char ch;
    printf("Enter the character:");
    scanf("%c",&ch);
    if(ch>='A'&&ch<='Z'){
        printf("Character entered '%c' is upper case\n",ch);
    }
    else if(ch>='a'&&ch<='z'){
        printf("Character entered '%c' is lower case\n",ch);
    }
    else{
        printf("Character entered '%c' is not a character\n",ch);
    }
}
