#pragma once

#include "Stocznia.hpp"

unsigned int transportujFlota(unsigned int towar)
{
    int towar_statku = 0;
    int towar_calkowity = 0;
    int licznik = 0;
    for (int towar_sumaryczny = 0; towar_sumaryczny < towar; towar_sumaryczny = towar_sumaryczny + towar_statku)
    {
        Stocznia stocznia;
        Statek* statek = stocznia();
        towar_statku = statek->transportuj();
        // towar_calkowity = towar_calkowity + towar_statku;
        Zaglowiec *wskaznik = dynamic_cast<Zaglowiec*>(statek);
        if (wskaznik != nullptr) licznik++;
        delete statek;
    }
    return 0;
}
