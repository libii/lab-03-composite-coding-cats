#ifndef __RAND_HPP__
#define __RAND_HPP__

#include "base.hpp"
#include <stdlib.h>

using namespace std;

class Rand : public Base {
    private:
        double myValue;

    public:
        Rand() : Base() { double myValue = rand() % 100
            leftChild=NULL;
            rightCHild=NULL;
        }}
        virtual double evaluate() { return myValue; }
        virtual std::string stringify() { return ""+myValue+""; }
            double getValue(){
            return myValue;
        }

        double getValue(){
            return myValue;
        } 
        void isOperator(){
          return False;
        }
        void isOperand(){
          return True;
        }
};

#endif //__RAND_HPP__
