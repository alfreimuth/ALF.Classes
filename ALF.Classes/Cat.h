
#pragma once

#include "Animal.h"

class Cat : public Animal
{
private:

public:

	 virtual void ClimbTree()
	{
		std::cout << GetName() << " is climbing up a tree\n";
	}

	void Print() const
	{
		std::cout << GetName() << " Meows.\n";
	}
};