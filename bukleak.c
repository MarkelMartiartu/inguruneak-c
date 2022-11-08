#include <stdio.h>
#include <math.h>

// 1. ariketa
void batura(void)
{
    // 1 + 2 + 3 + ... + (n - 1) + n
    printf("Zein zenbaki arte nahi duzu kontatu?");
    int max;
    scanf("%d", &max);

    int batura = 0;
    for (int i = 0; i < max; i++)
    {
        batura += i;
    }

    printf("\nGuztira: %d", batura);
}

// 2. ariketa
int faktoriala()
{
    int c, zenbakia, fakt = 1;
    printf("Sartu bere faktoriala kalkulatzeko numeroa: \n");
    scanf("%d", &zenbakia);

    for (c = 1; c <= zenbakia; c++)
    {
        fakt = fakt * c;
    }

    printf("%d! = %d\n", zenbakia, fakt);
    return fakt;
}

// 3. Ariketa
void biderketaTaulak()
{
    printf("Biderketa taula sortzen, itxaron pixka bat, honek ordu batzuk behar ditzake...\n");
    for (int lehena = 1; lehena <= 10; lehena++)
    {
        printf("%d-en taula:\n", lehena);
        for (int bigarrena = 1; bigarrena <= 10; bigarrena++)
        {
            printf("%dx%d = %d\n", lehena, bigarrena, lehena * bigarrena);
        }
    }
}

// 4. Ariketa
void fibonacci()
{
    int max, n1 = 0, n2 = 1, n3;
    printf("Zenbat zenbaki nahi dituzu bistaratu?: ");
    scanf("%d", &max);

    if (max > 45)
    {
        printf("Ezin dira 45 zenbaki baino gehiago bistaratu limitazio teknikoengatik.");
        return;
    }

    // 0 eta 1 bistaratu
    printf("%d %d", n1, n2);
    for (int i = 2; i < max; i++)
    {
        n3 = n1 + n2;
        printf(" %d", n3);
        n1 = n2;
        n2 = n3;
    }
}

int ZKH(int a, int b)
{
    // Euclides-en algoritmoaren aplikazioa

    while (b > 0)
    {
        if (a > b)
        {
            a = a - b;
        }
        else
        {
            b = b - a;
        }
    }
    return a;
}

// 5. Ariketa
void zatikiKomunHandiena()
{
    int a, b;
    printf("Sartu 2 zenbaki koma batekin separatuta:");
    scanf("%d,%d", &a, &b);

    printf("ZKH: %d", ZKH(a, b));
}

// 6. Ariketa
void multiploKomunTxikiena()
{
    int a, b;
    printf("Sartu 2 zenbaki koma batekin separatuta:");
    scanf("%d,%d", &a, &b);

    printf("MKT: %d", (a * b) / ZKH(a, b));
}

// 7. Ariketa
void zifrakZenbatu()
{
    long long n;
    printf("Zenbakia sartu:");
    scanf("%lld", &n);

    int kontadorea = 0;

    do
    {
        n /= 10;
        ++kontadorea;
    } while (n != 0);

    printf("Zure zenbakiak dituen zifrak: %d", kontadorea);
}

// Alderantziz funtzioa zenbaki kapikuak konprobatzeko ere erabiltzen denez funtzio bat dedikatu zaio.
int alderantziz(int znbk)
{
    int emaitza = 0, hondarra = 0;
    while (znbk != 0)
    {
        hondarra = znbk % 10;
        emaitza = emaitza * 10 + hondarra;
        znbk /= 10;
    }
    return emaitza;
}

// 8. Ariketa
void zenbakiaAlderantzizkatu()
{

    int znbk = 0;

    printf("Sartu zenbakia: ");
    scanf("%d", &znbk);

    printf("Sartutako zenbakia alderantziz: %d", alderantziz(znbk));
}

// 9. Ariketa
void potentzia()
{
    int n, p;
    printf("\nSartu zenbakia: ");
    scanf("%d", &n);
    printf("\nZenbagarren potentziara kalkulatu nahi duzu?: ");
    scanf("%d", &p);

    for (int i = 0; i < p; i++)
    {
        n *= n;
    }
    printf("\nGuztira: %d", n);
}

// 10. Ariketa
//  AKA palindromoa
void kapikuaDa()
{
    int znbk;
    printf("Sartu zure zenbakia: ");
    scanf("%d", &znbk);

    if (znbk == alderantziz(znbk))
    {
        printf("Zenbakia kapikua da!");
        return;
    }

    printf("Zenbakia ez da kapikua :(");
}

int lehenaDa(int znbk)
{
    // Zenbaki bat lehena izateko 1 eta bere buruagatik bakarrik zatigarria izan behar da.
    for (int i = 2; i < znbk; i++)
    {
        // Hondarra zero bada, zatigarri bat aurkitu dugu, beraz ez da zenbaki lehena.
        if (znbk % i == 0)
        {
            return 0;
        }
    }
    // Bukle osoa egin ostean programak ez badu zatigarri bat aurkitu, egia (1) itzuliko dugu.
    return 1;
}

// 11. Ariketa
void lehenaZehatza()
{
    int znbk;
    printf("Sartu zure zenbakia: ");
    scanf("%d", &znbk);

    if (lehenaDa(znbk))
    {
        printf("\nZenbakia lehena da.");
        return;
    }
    printf("\nZenbakia ez da lehena.");
}
// 12. Ariketa
void lehenaTartea()
{
    int min, max;
    printf("Sartu zenbaki tarte bat koma batekin separatuta [min,max]: ");
    scanf("%d,%d", &min, &max);
    printf("\nTarte honetan aurkitutako zenbaki lehenak:\n");
    for (int i = min; i < max; i++)
    {
        if (lehenaDa(i))
        {
            printf("%d,", i);
        }
    }
}

int armstrongDa(int znbk)
{
    int znbkTemp, hondarra, zifrak = 0;
    float result = 0.0;

    znbkTemp = znbk;

    // Zifra kopurua kalkulatu
    while (znbkTemp != 0)
    {
        znbkTemp /= 10;
        zifrak++;
    }

    for (znbkTemp = znbk; znbkTemp != 0; znbkTemp /= 10)
    {
        hondarra = znbkTemp % 10;
        // Zifra bakoitza bere n-garren potentziara igo behar dugu (non n zenbakiaren zifra kopurua den) eta dena batu.
        result += pow(hondarra, zifrak);
    }

    // Batura hasierako zenbakiaren berdina bada Armstrong zenbakia da.
    if ((int)result == znbk)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

// 13. Ariketa
void armstrongZehatza()
{
    int znbk;
    printf("Sartu zenbakia: ");
    scanf("%d", &znbk);

    if (armstrongDa(znbk))
    {
        printf("\nArmstrong-en zenbakia da");
        return;
    }
    printf("\nEz da Armstrong-en zenbakia");
}

// 14. Ariketa
void armstrongTartea()
{
    int min, max;
    printf("Sartu zenbaki tarte bat koma batekin separatuta [min,max]: ");
    scanf("%d,%d", &min, &max);
    printf("\nTarte honetan armstrong zenbakiak:\n");
    for (int i = min; i < max; i++)
    {
        if (armstrongDa(i))
        {
            printf("%d,", i);
        }
    }
}

// 15. Ariketa
void faktoreakBistaratu(void)
{
    int znbk;
    printf("Sartu zenbaki bat: ");
    scanf("%d", &znbk);
    printf("%d-en faktoreak hauek dira: ", znbk);
    for (int i = 1; i <= znbk; ++i)
    {
        if (znbk % i == 0)
        {
            printf("%d ", i);
        }
    }
}

int main()
{
    printf("Zein programa exekutatu nahi duzu?\n");
    printf("1. Batura\n");
    printf("2. Faktoriala\n");
    printf("3. Biderketa taulak\n");
    printf("4. Fibonacci\n");
    printf("5. Zatiki komun handiena\n");
    printf("6. Multiplo komun txikiena\n");
    printf("7. Zifrak zenbatu\n");
    printf("8. Zenbakia alderantzizkatu\n");
    printf("9. Potentzia kalkulatu\n");
    printf("10. Kapikua da?\n");
    printf("11. Zenbaki lehena da?\n");
    printf("12. Zenbaki lehenak tarte batean\n");
    printf("13. Armstrongen zenbaki bat da?\n");
    printf("14. Armstrongen zenbakiak tarte batean\n");
    printf("15. Faktoreak atera\n");

    int aukera;
    scanf("%d", &aukera);
    printf("\n%d. programa exekutatzen...\n");
    switch (aukera)
    {
    case 1:
        batura();
        break;
    case 2:
        faktoriala();
        break;
    case 3:
        biderketaTaulak();
        break;
    case 4:
        fibonacci();
        break;
    case 5:
        zatikiKomunHandiena();
        break;
    case 6:
        multiploKomunTxikiena();
        break;
    case 7:
        zifrakZenbatu();
        break;
    case 8:
        zenbakiaAlderantzizkatu();
        break;
    case 9:
        potentzia();
        break;
    case 10:
        kapikuaDa();
        break;
    case 11:
        lehenaZehatza();
        break;
    case 12:
        lehenaTartea();
        break;
    case 13:
        armstrongZehatza();
        break;
    case 14:
        armstrongTartea();
        break;
    case 15:
        faktoreakBistaratu();
        break;
    default:
        printf("Programa hori ez da aurkitu, irtetzen...");
    }
    printf("\n");
}
