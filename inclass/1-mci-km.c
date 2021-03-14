#include <stdio.h>
int main(){
    float KM;
    printf("\nProgram to Convert KM to M, CM, and INC \n");

    printf("Input distance in (KM) =");
    scanf( "%f",& KM);

    printf("M = %f\n", KM*1000);
    printf("CM = %f\n", KM*100000);
    printf("INC = %f\n", KM*39370);
    return 0;
}
