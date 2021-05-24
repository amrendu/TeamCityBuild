#include <stdio.h>
#include <iostream>
#include "MyAdd.h"
using namespace std;




int main()
{
	std::cout << "Welcome" << endl;
	MyAdd m;
	cout << "10+2 =" << m.Add(10, 2) << endl;
	return 0;
}
