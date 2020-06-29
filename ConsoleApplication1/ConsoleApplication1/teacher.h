#pragma once

#include "Person.h"

class teacher : public Person
{
private:
	double salary;
	int workingHours;

public:
	void setsalary(double s);
	double getsalary();

	void setworkingHours(int w);
	int getworkingHours();


};

