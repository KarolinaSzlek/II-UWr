/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package wyrazenia;

/**
 *
 * @author Szymon
 */
class Przeciwienstwo extends Operator1Arg{
        Wyrazenie exp;
        public Przeciwienstwo(Wyrazenie a){
            this.exp=a;
        }

        @Override
        public double oblicz(){
            return -exp.oblicz();
        }

        @Override
        public String toString(){
            return "-(" + -exp.oblicz()+")";
        }        
    }
    
    

