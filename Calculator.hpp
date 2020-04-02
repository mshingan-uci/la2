// Add include guards 
#ifndef CALCULATOR_HPP
#define CALCULATOR_HPP

class Calculator {

	double value;
	char prevop; 

public:

	// Constructor; initializes value to 0.0 and
	// pvop to '+'
	Calculator();

	// Performs calculation and  stores as value
	void calculate(double x, double y, char op);

	// Takes value, performs previous operation on
	// itself
	void repeat();

	// Outputs value to stdout on its own line
	void display();
	
	// Destructor; does nothing
	~Calculator();

private:

	// Helper function; performs calculation and
	// returns value
	double calc(double x, double y, char op);

};

#endif 
