#include <stdio.h>

int main()
{
    int i = 32;

    for(; i <= 126; i++){
        printf("%d -> %c -> %X\n", i, i, i);
    }

    return 0;
}
