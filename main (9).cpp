#include <iostream>
#include <string>
using namespace std;

string ucusGuvenligiKontrol(int yuk, int hiz, int yukseklik)
{

    double pil = 100 - (hiz / 10.0) * 5.0;

    cout << "Hesaplanan pil seviyesi: %" << pil << endl;


    if (yuk > 500)
        return "Agir yuk, ucamaz!";

 
    if (pil < 20)
        return "Pil seviyesi dusuk, ucus guvensiz!";

    if (yukseklik > 200)
        return "Radar disi, ucus guvensiz!";


    return "Ucus guvenli!";
}

int main()
{

    int yukler[3]       = {450, 300, 520};
    int hizlar[3]       = {120, 80, 150};
    int yukseklikler[3] = {150, 180, 210};

    for (int i = 0; i < 3; i++)
    {
        cout << "Drone #" << i + 1 << ": ";
        cout << ucusGuvenligiKontrol(yukler[i], hizlar[i], yukseklikler[i]);
        cout << "\n\n";
    }

    return 0;
}
