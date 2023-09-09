#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int height, row, space, coloumn;

    do
    {
        height = get_int("Height: ");
    }
    while (height < 1 || height > 8);

    for (row = 0; row < height; row++)
    {
        for (space = 0; space < height - row - 1; space++)
        {
            printf(" ");
        }
        for (coloumn = 0; coloumn <= row; coloumn++)
        {
            printf("#");
        }
        printf("\n");
    }
}
