#include <iostream>

using namespace std;

int main()
{
    int sayi1,sayi2;
    bool a;
    cout<< "birinci sayi: ";
    cin>>sayi1;
    cout<< "ikinci sayi: ";
    cin>>sayi2;
    a=sayi1==sayi2;
    cout<<"iliskisel sonuc (==): "<<a<<endl;
    a=sayi1!=sayi2;
    cout<< "iliskisel sonuc (!=): "<<a<<endl;
    a=sayi1<sayi2;
    cout<< "iliskisel sonuc (<): "<<a<<endl;
    a=sayi1>sayi2;
    cout<< "isiskisel sonuc (>): "<<a<<endl;
    a=sayi1<=sayi2;
    cout<< "iliskisel sonuc (<=): "<<a<<endl;
    a=sayi1>=sayi2;
    cout<< "iliskisel sonuc (>=): "<<a<<endl;
    a=sayi1==sayi2&&sayi1>sayi2;
    cout<< "mantiksal sonuc 1: " <<a<<endl;
    a=sayi1<sayi2||sayi1!=sayi2;
    cout<< "mantiksal sonuc 2: "<<a<<endl;

    return 0;
}
