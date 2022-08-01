#include<stdio.h>
int main()
{
    int x,a,b,c;
    printf("1. Check whether a given set of three numbers are lengths of an isosceles triangle or not.\n2. Check whether a given set of three numbers are lengths of sides of a right angled triangle or not.\n3. Check whether a given set of three numbers are equilateral triangle or not\n4. Exit.\nEnter the option.\n");
    scanf("%d",&x);
    switch(x)
    {
    case 1:printf("Enter 3 sides.\n");
           scanf("%d%d%d",&a,&b,&c);
          if(a==b || b==c || a==c)
            printf("These are the sides of an isoceles triangle.");
          else
            printf("These are not the sides of an isoceles triangle.");
           break;
    case 2:printf("Enter 3 sides.\n");
           scanf("%d%d%d",&a,&b,&c);
          if(((a*a)+(c*c))==(b*b) || ((a*a)+(b*b))==(c*c) || ((b*b)+(c*c))==(a*a) )
            printf("These are the sides of a right angled triangle.");
          else
            printf("These are not the sides of a right angled triangle.");
           break;
    case 3:printf("Enter 3 sides.\n");
           scanf("%d%d%d",&a,&b,&c);
           if(a==b && b==c)
            printf("These are the sides of an equilateral triangle.");
          else
            printf("These are not the sides of an equilateral triangle.");
           break;
    case 4:exit(0);
           break;
    default:printf("Invalid choice.");
}
    return 0;
}






