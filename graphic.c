#include <stdio.h>
#include <string.h>
#include <math.h>

double zuzena(double x, double x1, double x2, double y1, double y2)
{
    return ((x - x1) / (x2 - x1) * (y2 - y1)) + y1;
}

double aldea1(int x)
{
    return zuzena(x, 0, 5, 0, 10);
}

int main(void)
{
    int size = 10;
    // Matrize nulua sortu
    int display[10][10] = {0};

    for (int y = size; y >= 0; y--)
    {
        for (int x = 0; x < size; x++)
        {
            //            if (y == 0 || y == 3)
            //            {
            //                printf("x ");
            //                continue;
            //            }
            if ((int)(cos(x) * 4) == y)
            {
                printf("\033[0;31mx \033[0;37m");
            }
            else if ((x / 5.0) * 10.0 == y)
            {
                printf("\033[0;31mx \033[0;37m");
            }
            else if (y == 0)
            {
                marraztu();
            }
            else
            {
                printf("o ");
            }
        }
        printf("\n");
    }
}

void marraztu()
{
    printf("\033[0;31mx \033[0;37m");
}
