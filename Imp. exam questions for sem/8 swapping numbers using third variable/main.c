#include <stdio.h>

int main()
{
    // Variable declaration
    int var1 = 50, var2 = 60, temp;  // Third variable

    printf("Values before swap are var1 = %d and var2 = %d\n", var1, var2);

    // Swapping using a third variable

    temp = var1;
    var1 = var2;
    var2 = temp;

    printf("Values after swap are var1 = %d and var2 = %d", var1, var2);

    return 0;
}


