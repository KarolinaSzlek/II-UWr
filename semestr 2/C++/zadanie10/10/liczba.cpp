#include "liczba.h"
#include <iostream>

using namespace kalkulator;

// konstruktor z list� inicjalizacyjn�
liczba::liczba(double wartosc) : wartosc(wartosc) {}

liczba::~liczba()
{
    //dtor
}

// dla tej klasy pobranie warto�ci to po prostu zwr�cenie tej, kt�r� zawiera
double liczba::pobierzWartosc()
{
    return this->wartosc;
}
