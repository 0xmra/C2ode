#include <stdio.h>
#include <string.h>

int main()
{
    char s[] = "IamVengeance IamTheNight IamBatman";
    char t[120];
    strcpy(t, s);
    printf("\n Source string = %s", s);
    printf("\n Target string = %s", t);
}
//And here is the output...
//Source string = IamVengeance IamTheNight IamBatman
//Target string = IamVengeance IamTheNight IamBatman