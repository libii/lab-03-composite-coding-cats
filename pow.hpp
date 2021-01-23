#ifndef __MULT_HPP__
#define __MULT_HPP__

#include "base.hpp"
#include <cmath>

class Pow : public Base {
    private:
        //double value;
        Base* leftChild;
        Base* rightChild;
        

    public:
        Pow(Base* left, Base* right) : Base() {
            leftChild=left;
            rightChild=right;
        }
        virtual double evaluate() { return 0.0;
        //return pstd::pow(leftChild.evaluate(), rightChild.evalutate());
        }
        virtual std::string stringify() { return "*";
        //"("+leftChild.stringify() + "**" + rightChild.stringify() ")";
        }

        void isOperator(){
          return True;
        }
        void isOperand(){
          return False;
        }

};

#endif //__MULT_HPP__