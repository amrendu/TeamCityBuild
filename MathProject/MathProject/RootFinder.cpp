#include <stdio.h>
#include <iostream>
using namespace std;


class MyMath
{
public:
	double Divide(double x,double  y);
	
};

double MyMath::Divide(double x,double y)
{
	// Validate parameter:
	if (y == 0.0)
	{
		throw std::out_of_range("Can't divide by zero");
	}
	return x / y;
}

int main()
{
	std::cout << "Welcome" << endl;
	MyMath m;
	cout << "10/2 =" << m.Divide(10, 2) << endl;
	return 0;
}
