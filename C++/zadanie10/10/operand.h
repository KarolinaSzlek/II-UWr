#ifndef OPERAND_H
#define OPERAND_H

#include "symbol.h"

namespace kalkulator
{
    // klasa abstrakcyjna, kt�ra okre�la operandy (liczby, sta�e, zmienne)
    class operand : public symbol
    {
        public:
            operand();
            virtual ~operand();
            // metoda czysto wirtualna, kt�ra ma za zadanie pobra� warto�� z operandu,
            // dzi�ki temu mo�emy traktowa� operandy t� metod� i otrzyma� w�a�ciw� warto��
            // niezale�nie czy mamy do czynienia z liczb�, zmienn� czy sta��
            virtual double pobierzWartosc() = 0;
            // deklarujemy implementacj� metody wirtualnej wykonaj() z klasy symbol.
            void wykonaj();

        protected:

        private:
    };
}

#endif // OPERAND_H
