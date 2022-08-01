#include<stdio.h>
int main()
{
    int x;
    printf("Enter the number.\n");
    scanf("%d",&x);
    printf("The nearest odd number to %d is = ",x);
    switch(x%2==0)
    {
        case 0 : printf("%d",(x));
                 break;
        case 1 : printf("%d",(x+1));
                 break;
    }
    return 0;
}


