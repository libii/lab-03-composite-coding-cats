#ifndef __MULT_HPP__
#define __MULT_HPP__

#include "base.hpp"

class Mult : public Base {
    private:
        //double value;
        Base* leftChild;
        Base* rightChild;
        

    public:
        Mult(Base* left, Base* right) : Base() {
            leftChild=left;
            rightChild=right;
        }
        virtual double evaluate() { return 0.0;
        //leftChild->evaluate() * rightChild->evalutate() 
        }
        virtual std::string stringify() { return "*"; 
        //"("+leftChild->stringify() + "+" + rightChild->stringify() ")";
        }



};

#endif //__MULT_HPP__