#pragma once

#include<iostream>

#include "Person.h"

class Animal
{
	
private:

	//name and age field
	std::string m_name;
	int m_age = 0;

	Person* m_pOwner = nullptr;

public:

	Animal() { m_name = "Stormy"; }

	Animal(std::string name, int age)
	{
		m_name = name;
		m_age = age;
	}


	 //destructor
	virtual ~Animal() { std::cout << "Goodbye cruel world.";}

	// setters
	virtual void SetName(const std::string name) { m_name = name; }
	virtual void SetAge(const int age) { if (age >= 0) m_age = age; }

	virtual void SetOwner(Person* pOwner) { m_pOwner = pOwner; }

	// getters
	virtual std::string GetName() const { return m_name; }
	virtual int GetAge() const { return m_age;  }

	virtual Person* GetOwner() const { return m_pOwner; }


	// methods
	
	// Virtual means that this CAN be overridden 
	//virtual void Print() const;

	virtual void Speak() const {}


	// "= 0" - pure virtual - MUST be overridden
	virtual void Move() const = 0;
};