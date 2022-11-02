#include <stdio.h>

// 1. Ariketa
int bikoitiaDa()
{
    printf("Sartu zure zenbakia:\n");
    int zenbakia;
    scanf("%d", &zenbakia);
    if (zenbakia % 2 == 0)
    {
        printf("Bikoitia da");
        return 1;
    }
    printf("Bakoitia da");
    return 0;
}

// 2. Ariketa
int bokalaDa()
{
    char c;
    printf("Sartu karaktere bat (maiuskulaz): ");
    scanf("\n%c", &c);
    if (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U')
    {
        printf("Bokala da.");
        return 1;
    }
    else
    {
        printf("Kontsonantea edo beste karaktere bat da.");
        return 0;
    }
}

// 3. Ariketa
void handiena()
{
    int a, b, c;
    printf("Sartu hiru zenbaki komekin separatuta: ");
    scanf("%d,%d,%d", &a, &b, &c);
    if (a >= b && a >= c)
        printf("%d da handiena", a);
    else if (b >= a && b >= c)
        printf("%d da handiena", b);
    else
        printf("%d da handiena", c);
}

// 4. Ariketa
int bisiestoaDa()
{
    int urtea;
    printf("Sartu urte bat: ");
    scanf("%d", &urtea);
    if (urtea % 4 == 0)
    {
        printf("%d urtea bisiestoa da.", urtea);
        return 1;
    }
    printf("%d urtea ez da bisiestoa.", urtea);
    return 0;
}

// 5. Ariketa
void zenbakiMota()
{
    int i;
    printf("Sartu zure zenbakia: ");
    scanf("%d", &i);
    if (i > 0)
    {
        printf("positiboa da");
    }
    else if (i < 0)
    {
        printf("negatiboa da");
    }
    else
    {
        printf("zero da");
    }
}

int main()
{
    printf("Zein programa exekutatu nahi duzu?\n");
    printf("1. Bakoitia edo bikoitia\n");
    printf("2. Bokala da?\n");
    printf("3. Zenbaki handiena\n");
    printf("4. Urte bisiestoa?\n");
    printf("5. Positiboa negatiboa edo 0\n");

    int aukera;
    scanf("%d", &aukera);
    printf("\n%d. programa exekutatzen...\n");
    switch (aukera)
    {
    case 1:
        bikoitiaDa();
        break;
    case 2:
        bokalaDa();
        break;

    case 3:
        handiena();
        break;
    case 4:
        bisiestoaDa();
        break;
    case 5:
        zenbakiMota();
        break;
    default:
        printf("Programa hori ez da aurkitu, irtetzen...");
    }
    printf("\n");
}
