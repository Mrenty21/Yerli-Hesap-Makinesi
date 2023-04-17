#include <iostream>

using namespace std;

int main()
{
    int birinci;
    int ikinci;
    char karakter;

    cout << "Birinci sayiyi giriniz: ";
    cin >> birinci;
    cout << "Ikinci sayiyi giriniz: ";
    cin >> ikinci;
    cout << "Yapmak istediginiz islemi yaziniz(+,-,*,/): ";
    cin >> karakter;
    switch(karakter){
        case '+':
            cout << "Iki Sayinin Toplami: " << birinci + ikinci;
            break;
        case '-':
            cout << "Iki Sayinin Farki: " << birinci - ikinci;
            break;
        case '*':
            cout << "Iki Sayinin Carpimi: " << birinci * ikinci;
            break;
        case '/':
            cout << "Iki Sayinin Bolumu: " << birinci / ikinci;
            break;
    }
    return 0;
}
