#include "operand.h"

using namespace kalkulator;

operand::operand()
{

}

operand::~operand()
{
    //dtor
}

// dla ka�dego operanda zasada dzia�ania jest taka sama - po prostu przy napotkaniu operanda
// wrzucamy go na stos
void operand::wykonaj()
{
    symbol::stos.push(this);
}
