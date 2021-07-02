#include <stdio.h>
int main (void) {

    int enginePower = 0;
    int resistance = 0;
    int weight = 0;
    int height = 0;
    int Times = 0;
    int out = 0;
    int sum = 0;
    int i;

    printf("How many times you wnat to repeat? \n");
    scanf("%d", &Times);

    for(i = 0; i < Times; i++ ) {

        printf("Set Engine Power:");
        scanf("%d", &enginePower);

        printf("Set Resistance:");
        scanf("%d", &resistance);

        printf("Set weight:");
        scanf("%d", &weight);

        printf("Set Height:");
        scanf("%d", &height);

        out = (enginePower + resistance) * (weight - height);
        sum = sum + out;
        printf("sum equals %d\n",out);
    }

    return 0;
}
// (enginePower + resistance) * (weight - height)
