#include<stdio.h>
int main()
{
    int x;
    printf("Enter the month number.\n");
    scanf("%d",&x);
    switch(x)
    {
    case 1:printf("HAVE AN ENERGETIC MONDAY.");
           break;
    case 2:printf("HAVE A REFRESHING TUESDAY.");
           break;
    case 3:printf("HAVE AN ENTHUSIASTIC WEDNESDAY.");
           break;
    case 4:printf("HAVE A CHEERFUL THURSDAY.");
           break;
    case 5:printf("HAVE A COLORFUL FRIDAY.");
           break;
    case 6:printf("HAVE A LAZY SATURDAY.");
           break;
    case 7:printf("HAVE A RE-ENERGIZING SUNDAY.");
           break;
    default:printf("Invalid WEEKDAY.");
}
    return 0;
}





