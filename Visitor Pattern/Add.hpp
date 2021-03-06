#ifndef _ADD_HPP_
#define _ADD_HPP

#include "base.hpp"
#include "op.hpp"


class Add : public Base {
        public:
         Base* inputOne;
         Base*  inputTwo;
        Add() : inputOne(), inputTwo() {inputOne = new Op(0.0); inputTwo = new Op(0.0);}
        Add(Base* first, Base* second) : inputOne(first), inputTwo(second) {}
        double evaluate() {return inputOne->evaluate() + inputTwo->evaluate();}
        std::string stringify() {return inputOne->stringify() +  " + " + inputTwo->stringify();}
        Iterator* create_iterator() {return new BinaryIterator(this);}
        Base* get_left() {return inputOne;}
        Base* get_right() {return inputTwo;}
	void accept(CountVisitor* visit) {visit->visit_add();}
};

#endif //_ADD_HPP
