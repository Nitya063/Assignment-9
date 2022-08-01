#include<stdio.h>
#include<math.h>
int main()
{
    int D,a,b,c;
    int x1,x2;
    printf("Enter the a,b and c.\n");
    scanf("%d%d%d",&a,&b,&c);
    D=(b*b)-(4*a*c);
    switch(D>=0)
    {
        case 0 : x1=((-b)/(2*a))+(sqrt((4*a*c)-(b*b)/(2*a)));
                 x2=((-b)/(2*a))-(sqrt((4*a*c)-(b*b))/(2*a));
                 break;
        case 1 : switch(D==0)
        {
            case 0 : x1=((-b)+(sqrt(D)))/(2*a);
                     x2=((-b)-(sqrt(D)))/(2*a);
                     break;
            case 1 : x1=(-b)/(2*a);
                     x2=x1;
                     break;
        }
    }
    printf("Roots of the given quadratic equation are : %d,%d.",x1,x2);
    return 0;
}


