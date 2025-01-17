#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int secim=99,s1,s2;
    cout<<"********************\nHesap makinesi uygulaması\n********************\n";
    while(true)
    {
        
        cout<<"0) uygulamadan çıklma\n1) toplama\n2) çıkarma\n3) çarpma\n4) bölme"<<endl; cout<<endl;
        cout<<"işlem seçiniz: ";
        cin>>secim;
        cout<<endl;
        
        if(secim==0)
        {
            cout<<"programdan çıkılsın mı? 1 evet 2 hayır "<<endl;
            cin>>secim;
            if(secim==1)
            {
                cout<<"programdan çıkılıyor..."<<endl;
                break;
            }
            else if(secim==2)
            {
                cout<<"işleme devam ediliyor."<<endl;
                continue;
            }
        }

        if(secim==1)
        {
            cout<<"işlem yapmak istediğiniz ilk sayıyı giriniz: ";
            cin>>s1;
            cout<<"işlem yapmak istediğiniz ikinci sayıyı giriniz: ";
            cin>>s2;
            cout<<"\n**************************\ngirilen iki sayının toplamı: "<<s1+s2<<"\n**************************";
            cout<<endl;
        }
        else if(secim==2)
        {
            cout<<"işlem yapmak istediğiniz ilk sayıyı giriniz: ";
            cin>>s1;
            cout<<"işlem yapmak istediğiniz ikinci sayıyı giriniz: ";
            cin>>s2;
            cout<<"\n**************************\ngirilen iki sayının farkı: "<<s1-s2<<"\n**************************";
            cout<<endl;
        }
        else if(secim==3)
        {
            cout<<"işlem yapmak istediğiniz ilk sayıyı giriniz: ";
            cin>>s1;
            cout<<"işlem yapmak istediğiniz ikinci sayıyı giriniz: ";
            cin>>s2;
            cout<<"\n**************************\ngirilen iki sayının çarpımı: "<<s1*s2<<"\n**************************";
            cout<<endl;
        }
        else if(secim==4)
        {
            cout<<"işlem yapmak istediğiniz ilk sayıyı giriniz: ";
            cin>>s1;
            cout<<"işlem yapmak istediğiniz ikinci sayıyı giriniz: ";
            cin>>s2;
            cout<<"\n**************************\ngirilen iki sayının bölümü: "<<s1/s2<<"\n**************************";
            cout<<endl;
        }
        else
            cout<<"hatalı bir giriş yaptınız..."<<endl;
            cout<<endl;
        
    }


    return 0;
}