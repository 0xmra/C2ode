#include <stdio.h>
int main (void) {

    int enginePower = 0;
    int resistance = 0;
    int weight = 0;
    int height = 0;
    int Times = 0;
    int out = 0;
    int sum = 0;

    printf("How many times you wnat to repeat? \n");
    scanf("%d", &Times);

    for(int i = 0; i < Times; i++ ){
        printf("Please enter an value for Engine Power:");
        scanf("%d", &enginePower);
        printf("Set Engine Poweris set as: %d\n",enginePower);

        printf("Please enter an value for Resistance:");
        scanf("%d", &resistance);
        printf("Set Resistance is set as: %d\n",resistance);

        printf("Please enter an value for Weight:");
        scanf("%d", &weight);
        printf("weight is set as: %d\n",weight);

        printf("Please enter an value for Height:");
        scanf("%d", &height);
        printf("Height is set as: %d\n",height);

        out = (enginePower + resistance) * (weight - height);
        sum = sum + out;
        printf("sum equals %d\n",sum);
    }
    return 0;
}
// (enginePower + resistance) * (weight - height)
