#include <stdio.h>
#include <string.h>

int main(void)
{
  printf("Zein programa exekutatu nahi duzu?\n");
  printf("1. Izenak\n");
  printf("2. Biderketa\n");
  printf("3. Bataz besteko nota\n");
  printf("4. Bikoitia da?\n");
  printf("5. Asteko eguna\n");
  printf("6. Faktoriala\n");
  printf("7. Biderketa taulak\n");
  printf("8. Fibonacci\n");
  printf("9. Karratua\n");
  printf("10. Karaktereak\n");

  printf("Programa (zenbakia): ");

  int aukera;
  scanf("%d", &aukera);
  printf("%d. aukera exekutatzen...\n", aukera);

  switch (aukera)
  {
  case 1:
    izenak();
    break;
  case 2:
    biderketa();
    break;
  case 3:
    batazBestekoNota();
    break;
  case 4:
    bikoitiaDa();
    break;
  case 5:
    astekoEguna();
    break;
  case 6:
    faktoriala();
    break;
  case 7:
    biderketaTaulak();
    break;
  case 8:
    fibonacci();
    break;
  case 9:
    karratua();
    break;
  case 10:
    karaktereak();
    break;
  default:
    printf("Programa hori ez da existitzen");
    break;
  }
  return 0;
}

void izenak(void)
{
  char izena[40];
  char abizena1[40];
  char abizena2[40];

  printf("Sartu zure izena:");
  scanf("%s", izena);

  printf("Sartu zure abizenak hutsune batekin separatuz:");
  scanf("%s %s", abizena1, abizena2);

  printf("Izena: %s\n\t1. Abizena: %s\n\t\t2. Abizena: %s\n", izena, abizena1, abizena2);
}

int biderketa(void)
{
  int x;
  int y;

  printf("Sartu lehen aldagaia:");
  scanf("%d", &x);
  printf("Sartu bigarren aldagaia:");
  scanf("%d", &y);

  int emaitza = x * y;
  printf("Erantzuna: %d", emaitza);
  return emaitza;
}

float kmtomila(int km)
{
  return km * 0.67;
}

void batazBestekoNota(void)
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

int bikoitiaDa()
{
  printf("Sartu zure zenbakia:\n");
  int zenbakia;
  scanf("%d", &zenbakia);
  if (zenbakia % 2 == 0)
  {
    return 1;
  }
  return 0;
}

void karratua()
{
  int luzeera;
  printf("Zein luzeeratakoa egingo dugu karratua?: ");
  scanf("%d", &luzeera);
  printf("Karratua eraikitzen...\n\n");

  for (int h = 0; h < luzeera; h++)
  {
    for (int w = 0; w < luzeera; w++)
    {
      {
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
}

// Utzi horrela
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

int bikoitiaDa(int i)
{
  if (i % 2 == 0)
    return 1;
  return 0;
}

// Sartu letra larriz karaktere bat
int bokalaDa(char c)
{
  if (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U')
  {
    return 1;
  }
  else
  {
    return 0;
  }
}

void handiena()
{
  int a, b, c;
  printf("Sartu hiru zenbaki espazio batekin separatuta: ");
  scanf("%d %d %d", a, b, c);
  if (a >= b && a >= c)
    printf("%d da handiena", a);
  else if (b >= a && b >= c)
    printf("%d da handiena", b);
  else
    printf("%d da handiena", c);
}

int bisiestoaDa(int urtea)
{
  if (urtea % 4 == 0)
  {
    return 1;
  }
  return 0;
}

void zenbakiMota(int i)
{
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