// line.cpp
// Author: <JOSHUA IMARHIAGBE. U#: 43816590>

#include <iostream>
#include "line.h"


const char * EqualLines::what() const throw()
{
	return "The lines are equal: infinte intersection";
}

const char * ParallelLines::what() const throw()
{
	return "The lines are parallel: no intersection";
}

double Line::intersect(const Line L) const
{
	if ((L.a == a) && (L.b == b))
	{
		throw EqualLines();
	}

	else
	{
		if (L.a == a)
		{
			throw ParallelLines();
		}

		else
		{
			return ((L.b - b) / (a - L.a));
		}
	}
}

