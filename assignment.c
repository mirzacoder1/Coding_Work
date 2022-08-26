#include <stdio.h>
int main()
{
    char x;
    int a, b, result = 0;

    printf("What You want to do\n");
    scanf("%c", &x);

    switch (x)
    {
    case '+':
        printf("Enter Your Digits\n");
        scanf("%d%d", &a, &b);
        result = a + b;
        printf("Your Answer is %d\n", result);
        break;

    case '-':
        printf("Enter Your Digits\n");
        scanf("%d%d", &a, &b);
        result = a - b;
        printf("Your Answer is %d\n", result);
        break
        ;
    case '*':
        printf("Enter Your Digits\n");
        scanf("%d%d", &a, &b);
        result = a * b;
        printf("Your Answer is %d\n", result);
        break;

    case '/':
        result = a / b;
        printf("Enter Your Digits\n");
        scanf("%d%d", &a, &b);
        printf("Your Answer is %d\n", result);
        break;
        
    case '%':
        printf("Enter Your Digits\n");
        scanf("%d%d", &a, &b);
        result = a % b;
        printf("Your Answer is %d\n", result);
        break;
        
    default:
        printf("Please Enter valid No.\n");
    }
    return 0;
}