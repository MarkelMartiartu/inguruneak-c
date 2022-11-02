#include <stdio.h>
// if: 4
// switch: 5
// bukleak: 3

int bokalaDa()
{
    printf("Tekleatu letra bat:\n");
    char letra;
    scanf("%c", &letra);
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
        return 1;
    default:
        return 0;
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
    case 7:
    case 9:
    case 11:
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
        return b;
    case (1):
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

