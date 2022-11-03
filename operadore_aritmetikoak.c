#include <stdio.h>
#include <math.h>

int main()
{
    printf("Zein programa exekutatu nahi duzu?\n");
    printf("1. Izena\n");
    printf("2. Biderketa\n");
    printf("3. Zirkunferentzia\n");
    printf("4. Km-tik miletara\n");
    printf("5. \n");
    printf("6. \n");
    printf("7. Zifrak zenbatu\n");
    printf("8. Aldagaiak aldatu\n");
    printf("9.Poligonoaren neurria\n");
    printf("10. Bataz besteko nota\n");

    int aukera;
    scanf("%d", &aukera);
    printf("\n%d. programa exekutatzen...\n", aukera);
    switch (aukera)
    {
    case 1:
        izena();
        break;
    case 2:
        biderketa();
        break;
    case 3:
        zirkunferentzia();
        break;
    case 4:
        kmToMila();
        break;
    case 5:
        break;
    case 6:
        break;
    case 7:
        karaktereak();
        break;
    case 8:
        aldagaiakAldatu();
        break;
    case 9:
        poligonoarenAldeak();
        break;
    case 10:
        batazBestekoNota();
        break;
    default:
        printf("Programa hori ez da aurkitu, irtetzen...");
    }
    printf("\n");
}

// 1. Ariekta
void izena()
{
    printf("Nire izena: Markel\n\t1. Abizena: Martiartu\n\t\t2. Abizena: Txintxurreta");
}

// 2. Ariketa
void biderketa()
{
    int x = 5;
    int y = 3;
    printf("BIDERKETA\n\tx=5\n\ty=3\n\t\tEmaitza: %d", x * y);
}

// 3. Ariketa
void zirkunferentzia()
{
    int r;
    printf("Sartu erradioa: ");
    scanf("%d", &r);
    float perimetroa = r * 3.1516;
    printf("\nPerimetroa: %d zm da", r);
    printf("\nAzalera: %f zm^2 da\n", perimetroa);
}

// 4. Ariketa
void kmToMila()
{
    int km;
    printf("Sartu kilometroak: ");
    scanf("%d", km);

    printf("%d km %f mila dira", km, km * 0.67);
}

// 7. Ariketa
void karaktereak()
{
    char a, b;
    fflush(stdin);
    printf("Sartu karakterea: ");
    a = getchar;
    printf("\b   ASCII kodea: %d\n", a, a);
    printf("Sartu karakterea: ");
    scanf("%c", &b);
    printf("\b   ASCII kodea: %d\n", b, b);
}
// 8 .Ariketa
void aldagaiakAldatu()
{
    int x, y, tmp = 0;
    printf("Sartu \"x\"-en balioa: ");
    scanf("%d", x);
    printf("Sartu \"y\"-ren balioa: ");
    scanf("%d", y);

    x = tmp;
    x = y;
    y = tmp;
    printf("Aldatutako balioak: x = %d y = %d", x, y);
}

// 9. Ariketa
void poligonoarenAldeak()
{
    float neurria;
    int aldeak;
    printf("Zenbat neurtzen du aldeak: ");
    scanf("%f", neurria);
    printf("\nZenbat alde ditu: ");
    scanf("%d", aldeak);

    printf("\nPoligonoaren neurria: %fu", neurria);
}

// 10. Ariketa
void batazBestekoNota()
{
    float programazioNota;
    float analisiNota;
    float sareakNota;

    printf("Sartu programazioko nota:");
    scanf("%f", &programazioNota);

    printf("Sartu analisiko nota:");
    scanf("%f", &analisiNota);

    printf("Sartu sareak-eko nota:");
    scanf("%f", &sareakNota);

    printf("\nBataz besteko nota:\n%f", (programazioNota + analisiNota + sareakNota) / 3);
}