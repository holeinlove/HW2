#include <stdio.h>
#include <stdbool.h>

int main()
{
    int i = 1, j = 1;
    int n = 0, m = 0;
    printf("½Ð¿é¤Jªø¼e:");
    scanf_s("%d %d", &n, &m);
    while (i <= n)
    {
        while (j <= m)
        {
            if (i == 1 ||  i == n || j == 1 || j == m)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
            j++;
        }
        if (j > m)
        {
            j = 1;
        }
        printf("\n");
        i++;
    }
    return 0;
}