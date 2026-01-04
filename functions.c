#include<stdio.h>
void printHello();
void printGoodBye();
int main(){
    char Hello;
    printf("Enter the character 'H or h':");
    scanf("%c", &Hello);
    if(Hello=='H'||Hello=='h'){
        printHello();
        char GoodBye;
        printf("Enter the character 'G or g':");
        scanf(" %c", &GoodBye);
        if(GoodBye=='G'||GoodBye=='g'){
            printGoodBye();
        }
        else{
            printf("You've entered a wrong character.");
            printf(" You're not allowed");
        }
    }
    else{
        printf("You're not allowed for further process\n");
    }
}
void printHello(){
    printf("Hello!\n");
}
void printGoodBye(){
    printf("Good Bye!\n");
}
