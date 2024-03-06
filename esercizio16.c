#include <stdio.h>
int main()
{ int a;
printf ("quanti anni hai ?");
scanf ("%d" , &a);
if(a>=18)
{
    printf("sei maggiorenne\n");
}
else 
{
    printf("sei minorenne\n");
}
}