#include <stdio.h>
#include <math.h>

struct point
{
    int x, y;
};
struct line
{
    struct point p1;
    struct point p2;
};
struct line l;
int main()
{
    float distance;
    printf("Enter p1(x and y)\n");
    scanf("%d %d", &l.p1.x, &l.p1.y);
    printf("Enter p2(x and y)\n");
    scanf("%d %d", &l.p2.x, &l.p2.y);
    distance = sqrt(pow((l.p2.x - l.p1.x), 2) + pow((l.p2.y - l.p1.y), 2));
    printf("Distance = %f\n", distance);

    return 0;
}