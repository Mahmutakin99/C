#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int main()
{
    int secim,deger,a;
    float sayi1,sayi2,b;

    printf("işlem yapmak istediğiniz sayıyı giriniz : ");
    scanf("%f",&sayi1);

    printf("yapmak istediğiniz işlemi seciniz\n 1)toplama\n 2)cıkarma\n 3)carpma\n 4)bölme\n 5)yuzde alma\n 6)üs alma\n 7)karekok alma\n 8)on tabanlı logaritma alma\n\n ");
    printf("secilen işlem kodu : ");
    scanf("%d",&secim);

    if(secim==1)
    {
        printf("ikinci sayıyı giriniz :");
        scanf("%f",&sayi2);

        printf("sonuc : %.2f",sayi1+sayi2);
    }
    else if(secim==2)
    {
        printf("ikinci sayıyı giriniz :");
        scanf("%f",&sayi2);

        printf("sonuc : %.2f",sayi1-sayi2);
    }
    else if(secim==3)
    {
        printf("ikinci sayıyı giriniz :");
        scanf("%f",&sayi2);

        printf("sonuc : %.2f",sayi1*sayi2);
    }
    else if(secim==4)
    {
        printf("ikinci sayıyı giriniz :");
        scanf("%f",&sayi2);

        printf("sonuc : %.2f",sayi1/sayi2);
    }
    else if(secim==5)
    {
        printf("yuzde kac almak istersiniz :");
        scanf("%d",&deger);

        printf("sonuc : %.2f",(sayi1*deger)/100);
    }
    else if(secim==6)
    {
        printf("üs giriniz :");
        scanf("%d",&a);
        
        printf("sonuc : %.2f",pow(sayi1,a));
    }
   else if(secim==7)
   {
        printf("sonuc : %.2f\n",pow(sayi1,0.5));
   }
   else if(secim==8)
   {
    printf("sonuc : %.2f\n",log10(sayi1));
   }
   else
   {
    printf("hatahlı giriş yaptınız :");
   }

    return 0;
}