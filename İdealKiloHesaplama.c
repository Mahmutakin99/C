#include <stdio.h>
#include <math.h>
int main(){

    float boy,yas,ideal;
    printf("Boyunuzu giriniz: ");
    scanf("%f",&boy);
    printf("Yaşınızı giriniz: ");
    scanf("%f",&yas);

    ideal=(boy-100+yas/10)*0.9;
    printf("ideal kilonuz: %.2f",ideal);
    return 0;
}