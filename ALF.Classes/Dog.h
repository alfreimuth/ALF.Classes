
#pragma once

#include "Animal.h"

class Dog : public Animal
{

private:

	std::string breed = "Mix";


public:

	virtual void DigHole()
	{
		std::cout << GetName() << " is digging.\n";
	}

	void Print() const
	{
		std::cout << GetName() << " Barks.\n";
	}

};