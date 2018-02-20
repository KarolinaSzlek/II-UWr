package ONP.op2arg;

import ONP.Exception.ExceptionONP;

/**
 * Klasa mnozenie dwoch wartosci
 * @author Szymon
 */
public class Multiplication extends Operator2arg{
        /**
     * Oblicza wartosc wyrazenia klasy
     * @return Wynik
     * @throws ExceptionONP Gdy wystapi blad w obliczeniach 
     */
    @Override
    public double value() throws ExceptionONP{
        check();
        return array[1]*array[0];
    }
};

