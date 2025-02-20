#pragma once

#include<iostream>

class Animal
{
	
private:

	//name and age field
	std::string m_name;
	float m_age = 0;

public:

	//getters and setters
	std::string GetName() const { return m_name; }
	float GetAge() const { return m_age;  }

	void SetName(const std::string name) { m_name = name; }
	void SetAge(const float age) { m_age = age; }
	
	//print method
	void Print()
	{
		std::cout << m_name << " is " << m_age << " year(s) old!\n";
	}

	//create one in main then print
};