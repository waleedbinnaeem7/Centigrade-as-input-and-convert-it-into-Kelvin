#include <stdio.h>

float to_kel(float c) {
 
    float k = c + 273.15;
    return k;
}

int main() {

    float c;
    printf("Input temperature in celsius: ");
    scanf("%f", &c);

    float k = to_kel(c);
    printf("%.2f celsius is equal to %.2f k\n", c, k);

    return 0;
}
