// TemporaryClassObjects.cpp : This file contains the 'main' function. Program execution begins and ends there.


#include <iostream>
#include "TempClassExample.h"
#include "TempObjectsAndReturnByValue.h"


// Temporary Class Objects

/* if we are only going to use an object one like printing its value with a function we can avoid making an object
and then passing that object to the caller instead we can just use a temporary this will show a few way of passing a temporary object*/

int main()
{

    std::cout << "Passing As Named Varaible\n";
    MakeMeTemp makeMeTemp{};
    printValues(makeMeTemp);

    std::cout << "Constructing a temporary inside function call\n";
    printValues(MakeMeTemp{ 1,2 });

    std::cout << "implictly converting {5,6} into a temporary\n";
    printValues({ 5,6 });

   
    std::cout << "\nre1()\n";
    printValues(ret1());
    std::cout << "\nret2()\n";
    printValues(ret2());
    std::cout << "\nre3()\n";
    printValues(ret3());


    return 0;
}
