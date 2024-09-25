#include <stdio.h>
#include <math.h>

int main() {
    double x, y, z, ans;

    // ?????? x, y, z ?????????
    printf("Enter x: ");
    scanf("%lf", &x);
    printf("Enter y: ");
    scanf("%lf", &y);
    printf("Enter z: ");
    scanf("%lf", &z);

    // ?????????? |100 - (10 * (x / 15) + y + z)|
    ans = fabs(100 - (10 * (x / 15) + y + z));

    // ???????????
    printf("5. ans = %f\n", ans);

    return 0;
}

