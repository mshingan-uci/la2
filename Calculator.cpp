#include "Calculator.hpp"
#include <iostream>

using namespace std;

//Calculator constuctor 
Calculator::Calculator()
{
	value = 0.0;
	prevop = '+'; 
}


void Calculator::calculate(double x, double y, char op)
{
	value = calc(x,y,op);
}


void Calculator::repeat()
{
	value = calc(value,value,prevop);
}

void Calculator::display()
{
	cout<<value<<endl;	
}

double Calculator::calc(double x, double y, char op)
{
	switch(op)
	{
		case '+':
			prevop = '+';
			return  x+y;
		case '-':
			prevop = '-';
			return  x-y;
		case '*':
			prevop = '*';
			return x*y;
		case '/':
			prevop = '/';
			return x/y;
		case '~':
			return calc(value,value,prevop); 
	}
	return value;

}

Calculator::~Calculator()
{
}


