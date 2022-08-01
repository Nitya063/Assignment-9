#include<stdio.h>
int main()
{
    int x,a,b;
    printf("1. Addition\n2. Subtraction\n3. Multiplication\n4. Division\n5. Exit\nEnter the option.\n");
    scanf("%d",&x);
    switch(x)
    {
    case 1:
           printf("Enter 2 no.s.\n");
           scanf("%d%d",&a,&b);
           printf("Sum of %d and %d = %d.",a,b,(a+b));
           break;
    case 2:
           printf("Enter 2 no.s\n.");
           scanf("%d%d",&a,&b);
           printf("Substraction of %d and %d = %d.",a,b,(a-b));
           break;
    case 3:
           printf("Enter 2 no.s.\n");
           scanf("%d%d",&a,&b);
           printf("Multiplication of %d and %d = %d.",a,b,(a*b));
           break;
    case 4:
           printf("Enter 2 no.s.\n");
           scanf("%d%d",&a,&b);
           printf("Division of %d and %d = %d.",a,b,(a/b));
           break;
    case 5:exit(0);
           break;
    default:printf("Invalid choice.");
}
    return 0;
}





