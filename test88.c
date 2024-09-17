#include <stdio.h>

float CelsiusTofaharenhai(float celsius){
    return (celsius * 9/5 ) + 32;
}

int main (){
    int celsius;
    printf("Enter temperature in Celsius ");
    scanf("%d",&celsius);

    printf("Temparature in Farenhai  = %0.3f\n",CelsiusTofaharenhai(celsius));
}