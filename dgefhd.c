#include <stdio.h>
int main()
{
    int tempo;
    int zona;
    printf("Benvenuto in DatePlanner\n Organizza il tuo romantico appuntamento\n");
    printf("da quanto tempo state insieme ?\n 1) meno di 6 mesi\n 2) 1-2 anni\n 3) 3+ anni\n");
    scanf("%d",&tempo );
     if (tempo!=1 && tempo!=2 && tempo!=3)
    {
    printf("error");
    }
    printf("in che zona la vuoi portare?\n 1)Roma nord\n 2) Roma centro\n 3) Roma sud\n");
    scanf("%d",&zona);
    if(tempo=1 && zona=1)
    {
printf()