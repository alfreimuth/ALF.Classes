#pragma once

#include<iostream>

class Animal
{
	
private:

	//name and age field
	std::string m_name;
	float m_age = 0;

public:

	// setters
	virtual void SetName(const std::string name) { m_name = name; }
	virtual void SetAge(const float age) { m_age = age; }

	// getters
	virtual std::string GetName() const { return m_name; }
	virtual float GetAge() const { return m_age;  }

	//print method
	// Virtual means that this CAN be overridden 
	virtual void Print() const
	{
		std::cout << GetName() << " is " << GetAge() << " year(s) old!\n";
	}
};