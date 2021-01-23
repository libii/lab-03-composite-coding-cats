#ifndef __SUB_HPP__
#define __SUB_HPP__

#include "base.hpp"

class Add : public Base {
    private:
        //double value;
        Base* leftChild;
        Base* rightChild;
        

    public:
        Add(Base* left, Base* right) : Base() {
            leftChild=left;
            rightChild=right;
        }
        virtual double evaluate() { return 0.0;
                //leftChild.evaluate() * rightChild.evalutate() }
        virtual std::string stringify() { return "*";
                //leftChild.stringify() + "+" + rightChild.stringify();
         }

        void isOperator(){
          return True;
        }
        void isOperand(){
          return False;
        }

};

#endif //__ADD_HPP__