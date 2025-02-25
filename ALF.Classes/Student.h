
#pragma once // header guard for windows. doesnt repeat if loaded in multiple times

// universal header guard. endif finishes
//#ifndef ___STUDENT_H___
//#define ___STUDENT_H___

#include<iostream>

class Student
{

private:

	// fields (class variables)
	std::string m_name;
	float m_gpa = 0;

public: // Classes are automatically private
	
	// accessor methods (getters)
	std::string GetName() const { return m_name; }
	float GetGPA() const { return m_gpa; }

	//mutator methods (setters)
	void SetName(const std::string name) { m_name = name;  }
	void SetGPA(const float gpa) { m_gpa = gpa;  }

	// "normal" methods
	void CalculateGPA() { /*do stuff */ }

	void Print2() const
	{
		std::cout << m_name << " has a gpa of " << m_gpa << "\n";
	}
};

//void PrintStudent(const Student& s)
//{
//	std::cout << s.GetName() << " has a gpa of " << s.GetGPA() << "\n";
//}




//#endif // ___STUDENT_H___ - close uni header guard