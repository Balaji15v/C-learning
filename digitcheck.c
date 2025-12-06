
#include <stdio.h>

int main() {
    char ch;
    printf("Enter the digit:");
    scanf("%c",&ch);
    if(ch>='0'&&ch<='9'){
        printf("Entered character '%c' is a digit\n",ch);
    }
    else{
        printf("The character entered '%c' is not a digit\n",ch);
    }
    return 0;
}
