#include "MyMath.h"
#include "pch.h"

double MyMath::Divide(double x, double y)
{
	// Validate parameter:
	if (y == 0.0)
	{
		throw std::out_of_range("Can't divide by zero");
	}
	return x - y;
}
