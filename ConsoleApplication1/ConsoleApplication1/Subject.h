#pragma once
#include<string>
using namespace std;
class Subject
{
private:
	string Name;    int FullMark, StudentMark;

public:
	void setName(string n);
	string getname();

	void setFullMark(int fm);
	int getFullMark();

	void setStudentMark(int sm);
	int getStudentMark();

	Subject operator + (Subject A);

	Subject();

	Subject(string n, int fm, int sm);

};

