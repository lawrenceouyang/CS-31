#include "Map.h"
#include <iostream>

void main()
{
	Map m6;
	m6.insert("Z", 26);
	m6.insert("Y", 25);
	m6.insert("X", 24);

	std::string s;
	double d;
	for (int i = 0; i < m6.size(); i++)
	{
		m6.get(i, s, d);
		std::cout << s << " " << d << std::endl;
	}
}