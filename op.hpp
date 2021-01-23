#ifndef __OP_HPP__
#define __OP_HPP__

#include "base.hpp"

class Op : public Base {
    private:
        double myValue;
        Base* leftChild;
        Base* rightChild

    public:
        Op(double value) : Base() { 
            leftChild=NULL;
            rightCHild=NULL;
        }
        virtual double evaluate() { return myValue; }
        virtual std::string stringify() { return ""+myValue+""; }
        
        double getValue(){
            return myValue;
        }
        void setValue(double v){
            myValue=v;
        }
        void isOperator(){
          return False;
        }
        void isOperand(){
          return True;
        }

};

#endif //__OP_HPP__
