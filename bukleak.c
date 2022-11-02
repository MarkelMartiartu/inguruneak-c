int main()
{
    printf("Zein programa exekutatu nahi duzu?\n");
    printf("1. Faktoriala\n");
    printf("2. Biderketa taulak\n");
    printf("3. Fibonacci\n");
}
// 1 ariketa
void batuketa()
{
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

// 2. Ariketa
void biderketaTaulak()
{
    printf("Biderketa taula sortzen, itxaron pixka bat, honek ordu batzuk behar ditzake...\n");
    for (int lehena = 0; lehena < 10; lehena++)
    {
        printf("%d-en taula:\n", lehena + 1);
        for (int bigarrena = 0; bigarrena < 10; bigarrena++)
        {
            printf("%dx%d = %d\n", lehena + 1, bigarrena + 1, (lehena + 1) * (bigarrena + 1));
        }
    }
}

// 3. Ariketa
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

// 4. Ariketa
int ZKH()
{
    int a, b;
    printf("Sartu 2 zenbaki koma batekin separatuta:");
    scanf("%d,%d", &a, &b);

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

    printf("ZKH: %d", a);
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

int alderantziz(int znbk)
{
    int emaitza = 0, hondarra = 0;

    printf("Sartu zenbakia: ");
    scanf("%d", &znbk);

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