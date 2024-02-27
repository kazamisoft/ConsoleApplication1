#include <stdio.h>

void christmasTree(int height)
{
    printf("print christmas tree F=%s,L=%d\r\n", __func__, __LINE__);

    int star = 1;
    int column = (height * 2) - 1;
    for (int line = 1; line <= height; line++)
    {
        int space = (column - star) / 2;
        for (int i = 0; i < space; i++)
            printf(" ");
        for (int i = 0; i < star; i++)
            printf("*");
        for (int i = 0; i < space; i++)
            printf(" ");
        printf("\r\n");
        star += 2;
    }

}
