
// Classes Demo
// Alex Freimuth

#include <conio.h>
#include <vector>

#include "Animal.cpp"

#include "Student.h"
#include "Dog.h"
#include "Cat.h"


/*
Four Pillars of OOP

Encapsulation -- Putting together properties and methods that are related
Inheritance -- Getting things for free because of a relationship
Polymorphism -- Treat an object like its base type
*Ryan Hates* Abstraction -- Don't need to understand to use

*/


int main()
{
	Student alex;
	alex.SetName("Alex");
	alex.SetGPA(3.8f);
	alex.Print2();

	Animal chocolate;
	chocolate.SetName("Chocolate");
	chocolate.SetAge(4);
	chocolate.Print();

	Dog bonnie;
	bonnie.SetName("Bonnie");
	bonnie.DigHole();

	Cat cheeto;
	cheeto.SetName("Cheeto");
	cheeto.ClimbTree();

	std::vector<Animal*> animals;
	animals.push_back(&chocolate);
	animals.push_back(&bonnie);
	animals.push_back(&cheeto);

	for (const Animal* pAnimal : animals)
	{
		pAnimal->Print();
	}



	(void)_getch();
	return 0;
}
