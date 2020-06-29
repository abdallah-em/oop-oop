#pragma once
#include"Person.h"


class student : public Person
{
private:
	int grade;
	double GPA;

	public:
		void setgrade(int g);
		int getgrade();

		void setGPA(double ga);
		double getGPA();

		student(string s);
};

