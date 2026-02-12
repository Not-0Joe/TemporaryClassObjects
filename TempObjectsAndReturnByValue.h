#pragma once
#include "TempClassExample.h"


// when a function returns by value it returns a temporary object back to the caller that value is normally used
// to init some other varible or object ect below are some examples of functions returning temporary value

MakeMeTemp ret1()
{
	// return named variable
	MakeMeTemp m{};
	return m;
}

MakeMeTemp ret2()
{
	// create temporary and return 
	return MakeMeTemp{ 5,2 };
}

MakeMeTemp ret3()
{
	// implicitly convert { 2,1 } int MakeMeTemp 
	return { 2,1 };
}

