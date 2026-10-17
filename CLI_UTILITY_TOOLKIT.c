#include <stdio.h>

void sum();
void max();
void min();
void checkEvenOdd();
void factorial();



int main(){
    int option;
    printf("-------------------CLI UTILITY TOOLKIT----------------------\n");

    do{
        printf("1. Addition\n 2. Find Maximum\n 3. Find Minimum\n 4. Check Even or Odd\n 5. Find Factorial\n 6. Exit\n");
        printf("Choose your operation : ");
        scanf("%d", &option);

        switch(option){
            case 1 :
                sum();
                break;
            case 2 :
                max();
                break;
            case 3 :
                min();
                break;
            case 4 :
                checkEvenOdd();
                break;
            case 5 :
                factorial();
                break;
            case 6 :
                printf("Exit");
                break;
            default :
                printf("Wrong Input !!\n");
                break;

        } 
    } while(option != 6);
     return 0;
}

void sum(){
    int a, b;

    printf(" Enter two numbers   : ");
    scanf("%d", &a);
    scanf("%d", &b);
    printf("Sum of %d and %d = %d\n", a, b, a+b);
}
void max(){
    int a, b;

    printf(" Enter two numbers   : ");
    scanf("%d", &a);
    scanf("%d", &b);
   printf("%d\n",a>b ? a : b);
}
void min(){
    int a, b;

    printf(" Enter two numbers   : ");
    scanf("%d", &a);
    scanf("%d", &b);
    printf("%d\n",a<b ? a : b);
}
void checkEvenOdd(){
    int n;

    printf(" Enter a number   : ");
    scanf("%d", &n);
    
    printf(n % 2 == 0 ? "Even" : "Odd");
}
void factorial(){
    int n;

    printf(" Enter a number   : ");
    scanf("%d", &n);
    int fact = 1;
    for(int i = 1; i<=n; i++){
        fact*=i;
    }
    printf("fact of %d = %d\n",n , fact);
}

