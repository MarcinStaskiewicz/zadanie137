#include <stdio.h>
#include <stdlib.h>

#define TRUE    1
#define FALSE   0

#define OPCJA_PIERWIASTEK_ROWNANIA_LINIOWEGO 1
#define OPCJA_PIERWIASTEK_ROWNANIA_KWADRATOWEGO   2
#define OPCJA_WYJSCIE   0

void pierwiastek_liniowy();
void pierwiastek_kwadratowy();

int main() {
    int wybrana_opcja, wyjscie_z_programu;

    wyjscie_z_programu = FALSE;
    while(TRUE) {
        printf("Opcje programu:\n");
        printf("===============\n");
        printf("%d %s\n", OPCJA_PIERWIASTEK_ROWNANIA_LINIOWEGO,  " - pierwiastek liniowy");
        printf("%d %s\n", OPCJA_PIERWIASTEK_ROWNANIA_KWADRATOWEGO,    " - pierwiastek kwadratowy");
        printf("%d %s\n", OPCJA_WYJSCIE,    " - koniec");
        printf("\nPodaj kod polecenia: ");
        scanf("%d", &wybrana_opcja);

        switch(wybrana_opcja) {
            case OPCJA_PIERWIASTEK_ROWNANIA_LINIOWEGO:   pierwiastek_liniowy();          break;
            case OPCJA_PIERWIASTEK_ROWNANIA_KWADRATOWEGO:    pierwiastek_kwadratowy();            break;
            case OPCJA_WYJSCIE:     wyjscie_z_programu = TRUE;  break;
            default:                printf("Niepoprawny kod polecenia.\n");

        }
        if (wyjscie_z_programu == TRUE)
            break;
    }

    return EXIT_SUCCESS;
}

void pierwiastek_liniowy()
{
    float a,b,x;
printf("%s \n","Podaj a ");
if(scanf("%f",&a)==0)
{

    printf("podaj cyfre\n");
        exit(EXIT_FAILURE);
}
printf("%s \n","Podaj b ");
if(scanf("%f",&b)==0)
{

    printf("podaj cyfre\n");
        exit(EXIT_FAILURE);
}

if ((a == 0) && (b == 0))
{
printf("%s","Rownanie tozsamosciowe");
}
else
if (a == 0)
{
printf("%s","Rownanie sprzeczne");
}
else
{
x=-b/a;
printf("%s\n" "%.2f"  "%s", "wynik rownania  - ", x,  "\n\n" );
}



}


void pierwiastek_kwadratowy()
{ /* TODO - osoba3 */

    /* TODO - w?a?ciwe obliczanie pola zrealizowa? poprzez dedykowan? funkcj? */
}
