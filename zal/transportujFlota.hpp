#pragma once

#include <cstring>
#include "Stocznia.hpp"

unsigned int transportujFlota(unsigned int towar)
{
    int towar_statku = 0;
    int towar_calkowity = 0;
    int licznik = 0;
    int liczba_statkow = 0;
    string typ_statku;
    for (int towar_sumaryczny = 0; towar_sumaryczny <towar; towar_sumaryczny = towar_sumaryczny + towar_statku)
    {
        Stocznia stocznia;
        Statek* statek = stocznia();
        towar_statku = statek->transportuj();
        towar_calkowity = towar_calkowity + towar_statku;
        Zaglowiec *wskaznik = dynamic_cast<Zaglowiec*>(statek);
        if (wskaznik != nullptr) licznik++;
        liczba_statkow++;
        if (wskaznik == nullptr) typ_statku = "'Tankowiec'";
        else typ_statku = "'Zaglowiec'";
        cout << endl << liczba_statkow << ". statek w porcie typu " << typ_statku << " ma ladunek " << towar_statku << endl;
        delete statek;
    }
    cout << endl << "W porcie znajduje sie nastepujaca liczba statkow: " << liczba_statkow << "." << endl;
    cout << endl << "W porcie znajduje sie nastepujaca liczba zaglowcow: " << licznik << "." << endl;
    return 0;
}
