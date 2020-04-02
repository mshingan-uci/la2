#include "Calculator.hpp"
#include <iostream>
#include <string>

using namespace std;


int main()
{
	Calculator calc;
	double input1; 
	char operators;
	double input2; 
	while(cin>>input1>>operators>>input2)
	{
		//cout<<input1<<operators<<input2<<endl;
		calc.calculate(input1,input2,operators);
		calc.display();
	}
	/*	
	calc.display();
	calc.calculate(8,2,'+');
	calc.display();
	calc.calculate(1,1,'~');
	calc.display();
	calc.calculate(5,5,'~');
	calc.display();
	calc.calculate(8,5,'-');
	calc.display();
	calc.calculate(900,9,'~');
	calc.display();
	*/
	return 0;
}

