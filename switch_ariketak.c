#include <stdio.h>

int bokalaDa()
{
    printf("Tekleatu letra bat: ");
    char letra;
    // \n barik ez du funtzionatzen
    scanf("\n%c", &letra);

    switch (letra)
    {
    case 'A':
    case 'E':
    case 'I':
    case 'O':
    case 'U':
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':

        printf("Karaktere hori bokal bat da.");
        return;
    default:
        printf("Karaktere hori ez da bokal bat.");
        return;
    }
}

void astekoEguna()
{
    printf("Sartu asteko egun numerikoa:\n");
    int egunNumerikoa;
    scanf("%d", &egunNumerikoa);
    char eguna[20];
    switch (egunNumerikoa)
    {
    case 1:
        strcpy(eguna, "Astelehena");
    case 2:
        strcpy(eguna, "Asteartea");
        break;
        break;
    case 3:
        strcpy(eguna, "Asteazkena");
        break;
    case 4:
        strcpy(eguna, "Osteguna");
        break;
    case 5:
        strcpy(eguna, "Ostirala");
        break;
    case 6:
        strcpy(eguna, "Larunbata");
        break;
    case 7:
        strcpy(eguna, "Domeka");
        break;

    default:
        break;
    }

    printf("Gaur %s da", eguna);
}

void egunKopurua()
{
    int hilea;
    printf("Sartu hilea (zenbakia): ");
    scanf("%d", &hilea);

    if (hilea < 1 || hilea > 12)
    {
        printf("hilabete hori ez da existitzen.");
        return;
    }
    switch (hilea)
    {
    case 1:
    case 3:
    case 5:
    case 8:
    case 10:
    case 12:
        printf("31 egun ditu.");
        break;
    case 2:
        printf("28 egun ditu.");
        break;
    default:
        printf("30 egun ditu.");
    }
}

int handiena()
{

    int a, b;
    printf("Tekleatu bi zenbaki koma batekin separatuta:\n");
    scanf("%d,%d", &a, &b);
    int handiagoa = a > b;

    switch (handiagoa)
    {
    case (0):
        printf("%d da handiena", b);
        return b;
    case (1):
        printf("%d da handiena", a);
        return a;
    }
}

void bakoitiaEdoBikoitia()
{
    int zenbakia;
    printf("sartu zenabkia: ");
    scanf("%d", &zenbakia);

    switch (zenbakia % 2)
    {
    case 0:
        printf("bikoitia da");
        break;
    case 1:
        printf("bakoitia da");
    }
}

int main()
{
    printf("Zein programa exekutatu nahi duzu?\n");
    printf("1. Bokala da?\n");
    printf("2. Asteko eguna\n");
    printf("3. Hilearen egun kopurua\n");
    printf("4. Zenbaki handiena\n");
    printf("5. Bakoitia edo bikoitia\n");

    int aukera;
    scanf("%d", &aukera);
    printf("\n%d. programa exekutatzen...\n");
    switch (aukera)
    {
    case 1:
        bokalaDa();
        break;
    case 2:
        astekoEguna();
        break;

    case 3:
        egunKopurua();
        break;
    case 4:
        handiena();
        break;
    case 5:
        bakoitiaEdoBikoitia();
        break;
    default:
        printf("Programa hori ez da aurkitu, irtetzen...");
    }
    printf("\n");
}
