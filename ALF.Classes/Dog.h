
#pragma once

#include "Animal.h"

class Dog : public Animal
{

private:

	//std::string breed = "Mix";


public:


	// virtual destructor
	virtual ~Dog() {}

	virtual void Speak() const
	{
		std::cout << GetName() << " says WOOF\n";
	}

	/*void Print() const
	{
		std::cout << GetName() << " Barks.\n";
	}*/

	virtual void Move() const
	{
		std::cout << GetName() << " is running\n";
	}

};