
#pragma once

#include "Animal.h"

class Cat : public Animal
{
private:

public:

	Cat() {}
	Cat(const std::string name, const int age)
		:Animal(name, age) {}

	// virtual destructor
	virtual ~Cat() {}

	 virtual void Speak() const
	{
		std::cout << GetName() << " Says Meow\n";
	}

	/*void Print() const
	{
		std::cout << GetName() << " Meows.\n";
	}*/

	virtual void Move() const
	{
		std::cout << GetName() << " is pouncing\n";
	}
};

