#include "symbol.h"
#include "liczba.h"
#include <stdexcept>

using namespace kalkulator;

symbol::symbol()
{
    //ctor
}

symbol::~symbol()
{
    //dtor
}

// funkcja okre�laj�ca ostateczny wynik, czyli ostatni (jedyny) element na stosie
double symbol::ostatecznyWynik()
{
    // Je�li po wykonaniu wszystkich operacji jest mniej lub wi�cej element�w ni� jeden,
    // to znaczy �e dzia�anie by�o niepoprawne - rzucamy wyj�tek
    if (symbol::stos.size() != 1)
        throw std::invalid_argument("Brak dzialania");
    // Rzutujemy ten symbol na liczb�. Je�li nie jest to liczba, to rzucony zostanie wyj�tek
    double wynik = static_cast<liczba*>(symbol::stos.top())->pobierzWartosc();
    // usuwamy ten element i zwracamy wynik
    stos.pop();
    return wynik;
}
