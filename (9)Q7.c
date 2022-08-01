#include<stdio.h>
int main()
{
    int x;
    float bill,Total_Bill;
    printf("Enter the units.\n");
    scanf("%d",&x);
    switch(x>=50)
    {
        case 0 : bill=0.50*x;
                 break;
        case 1 : switch(x>=150)
        {
            case 0 : bill=25+(x-50)*0.75;
                     break;
            case 1 : switch(x>=250)
            {
                case 0 : bill=100+(x-250)*1.20;
                         break;
                case 1 : bill=220+(x-250)*1.50;
            }
        }
    }
    Total_Bill=bill+0.20*bill;
    printf("Total Bill = %f ",Total_Bill);
    return 0;
}
