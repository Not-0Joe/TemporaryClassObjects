#pragma once

class MakeMeTemp
{
public:

	MakeMeTemp() = default;

	MakeMeTemp(int x) : MakeMeTemp{ x, 0 } {}
	
	MakeMeTemp(int x, int y) : m_x {x}, m_y {y} {}

	int getX() const
	{
		return m_x;
	}

	int getY() const
	{
		return m_y;
	}


private:
	int m_x = 0;
	int m_y = 0;
};


// non member funcion prototype
void printValues(const MakeMeTemp& m);
