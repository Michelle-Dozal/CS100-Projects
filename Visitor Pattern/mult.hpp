#ifndef __MULT_HPP__
#define __MULT_HPP__

#include "base.hpp"
#include "op.hpp"
class Mult : public Base {
    public:
	Base* inputOne;
	Base* inputTwo;
	Mult() : inputOne(), inputTwo(){ inputOne = new Op(0.0); inputTwo = new Op(0.0);}
        Mult(Base* first, Base* second) : inputOne(first), inputTwo(second) { }
        double evaluate() { return inputOne->evaluate() * inputTwo->evaluate(); }
        std::string stringify() { return inputOne->stringify() + " * " + inputTwo->stringify(); }
	
	Base* get_left(){return inputOne;}
	Base* get_right(){return inputTwo;}
	Iterator* create_iterator(){return new BinaryIterator(this);}
	void accept(CountVisitor* visit) {visit->visit_mult();}
};

#endif //__MULT_HPP__
