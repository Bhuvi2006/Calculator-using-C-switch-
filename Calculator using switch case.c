#include <stdio.h>

int main()
{
    int a,b;
    char op;
    printf("Enter a number, operator and another number ( with a enter button):  ");
    scanf("%d %c %d",&a,&op,&b);
    switch(op)
    {
        case '+':
            printf("\nResult= %d",a+b);
            break;
        case '-':
            printf("\nResult= %d",a-b);
            break;
        case '*':
            printf("\nResult= %d",a*b);
            break;
        case '/':
            printf("\nResult= %d",a/b);
            break;
        default:
            printf("Enter a valid operation");
    }
}
