#include<stdio.h>
int main()
{
    int x;
    printf("Enter the number.\n");
    scanf("%d",&x);
    switch(x>0)
    {
        case 0 : printf("%d",(-x));
                 break;
        case 1 : printf("%d",(-x));
                 break;
    }
    return 0;
}

