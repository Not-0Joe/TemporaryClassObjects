#include <iostream>
#include "TempClassExample.h"

void printValues(const MakeMeTemp& m)
{
	std::cout << "Value of X: " << m.getX() << "\n" << "Value of Y: " << m.getY() << "\n";
}


