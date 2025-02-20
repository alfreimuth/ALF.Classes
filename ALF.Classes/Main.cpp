
// Classes Demo
// Alex Freimuth

#include <conio.h>

#include "Student.h"
#include "Animal.h"


int main()
{
	Student sam;
	sam.SetName("Sam");
	sam.SetGPA(3.8f);
	sam.Print();

	Animal animal;
	animal.SetName("Chocolate");
	animal.SetAge(4);
	animal.Print();

	(void)_getch();
	return 0;
}
