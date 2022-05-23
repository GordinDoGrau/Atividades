#include <stdio.h>

int main(){

    for (int n = -20; n <= 20; n++)
    {
        if (n > 0 && n % 2 == 0)
        {
            printf("\n%d",n);
        }
        else if (n < 0 && n % 3 == 1)
        {
            printf("\n%d",n);
        }
    }
    return 0;
}