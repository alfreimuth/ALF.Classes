
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

	Cat kitty("Kitty", 4);
	kitty.Speak();

	std::vector<Animal*> animals;
	animals.push_back(new Cat("Cheeto", 5));
	animals.push_back(&kitty);

	Dog d;
	d.SetName("Apollo");
	d.SetAge(6);
	animals.push_back(&d);

	for (Animal* pAnimal : animals)
	{
		pAnimal->Move();
		pAnimal->Speak();
	}

	/*Dog bonnie;
	bonnie.SetName("Bonnie");
	bonnie.Speak();

	Cat cheeto;
	cheeto.SetName("Cheeto");
	cheeto.Speak();

	std::vector<Animal*> animals;
	animals.push_back(&chocolate);
	animals.push_back(&bonnie);
	animals.push_back(&cheeto);*/


	(void)_getch();
	return 0;
}
