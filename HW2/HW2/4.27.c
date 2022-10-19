#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int side1, side2, hypotenuse = 0;
    for (side1 = 1; side1 < 500; side1++)
    {
        for (side2 = 1; side2 < 500; side2++)
        {
            for (hypotenuse = 1; hypotenuse < 500; hypotenuse++)
            {
                if ((hypotenuse * hypotenuse) == (side1 * side1) + (side2 * side2))
                {
                    printf("side1 is :%4d, side2 is : %4d, hypotenuse is : %4d\n", side1, side2, hypotenuse);
                }
            }
        }

    }
    return 0;
}