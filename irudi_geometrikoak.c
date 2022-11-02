#include <stdio.h>

int main()
{
    printf("Zein programa exekutatu nahi duzu?\n");
    printf("1. Eskailera\n");
    printf("2. Karratua\n");
    printf("3. Karratua perimetroarekin\n");
    printf("4. Triangelua\n");

    int aukera;
    scanf("%d", &aukera);
    printf("\n%d. programa exekutatzen...\n");
    switch (aukera)
    {
    case 1:
        eskailera();
        break;
    case 2:
        karratua(0);
        break;

    case 3:
        karratua(1);
        break;
    case 4:
        // TODO
        break;
    default:
        printf("Programa hori ez da aurkitu, irtetzen...");
    }
    printf("\n");
}

// 1. Ariketa
void eskailera()
{
    int altuera;
    printf("Zein altueratako eskailera egingo dugu?: ");
    scanf("%d", &altuera);
    printf("Eskailera eraikitzen...\n\n");

    for (int j = 0; j < altuera; j++)
    {
        for (int i = 0; i < j; i++)
        {
            printf("*");
        }
        printf("\n");
    }
}

// 2 eta 3. Ariketak
void karratua(int perimetroa)
{
    int luzeera;
    printf("Zein luzeeratakoa egingo dugu karratua?: ");
    scanf("%d", &luzeera);
    printf("Karratua eraikitzen...\n\n");

    for (int h = 0; h < luzeera; h++)
    {
        for (int w = 0; w < luzeera; w++)
        {

            if (!perimetroa)
            {
                printf("*");
                continue;
            };

            // Hau egia bada karratuaren ertz baten dago kokatuta, adibidez (0,0) edo (2,0). "*" inprimatuko dugu beraz.
            if (h == 0 || h == (luzeera - 1) || (w == 0 || w == (luzeera - 1)))
            {
                printf("*");
            }
            else
            {
                printf("?");
            }
        }
        printf("\n");
    }
}