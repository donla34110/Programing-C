// #include <stdio.h>
// #include <math.h>

// int main(){
//     printf("sqrt(%f) =  %f\n",1024, sqrt(1024));
//     printf ("7 ^ 3 = %f\n", pow (7.0, 3.0) );
// printf ("32.01 ^ 1.54 = %f\n", pow (32.01, 1.54) );
// printf ( "ceil of 3.8 is %.1f\n", ceil(3.8) );
// printf ( "ceil of -2.3 is %.1f\n", ceil(-2.3) );
// printf ( "floor of 3.8 is %.1lf\n", floor (3.8) );
// printf ( "floor of -2.3 is %.1lf\n", floor (-2.3) );
// printf ( "fmod of 5.3 / 2 is %f\n", fmod (5.3,2) );
// printf ( "fmod of 18.5 / 4.2 is %f\n", fmod (18.5,4.2) );
//     return 0;
// }

#include <stdio.h>
#include <math.h>

int main(){
    double x,y,z,ans;
    //1. sqrt()
    // printf("1. ans =  %f\n",sqrt(4+9+36));
    // //2
    // printf("2. ans = %f\n",pow(100, 3.00/2.00));
    // //3
    // printf("3. Enter X :" );
    // scanf("%lf",&x);
    // printf("3. ans = %f\n",pow(x,-3) * pow(x,-4));

    // //4
    // printf("4. Enter X :" );
    // scanf("%lf",&x);
    // printf("4. ans = %f\n",pow(7* pow(x,2),1.0/4.0));

    //5
    printf("Enter x: ");
    scanf("%lf", &x);
    printf("Enter y: ");
    scanf("%lf", &y);
    printf("Enter z: ");
    scanf("%lf", &z);

    // คำนวณสมการ |100 - (10 * (x / 15) + y + z)|
    ans = fabs(100 - (2 * (x / 60) + y + z));

    // แสดงผลลัพธ์
    printf("5. ans = %f\n", ans);








    return 0;
}





