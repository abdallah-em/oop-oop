#include "Subject.h"

void Subject::setName(string n)
{
	Name = n;
}

string Subject::getname()
{
	return Name;
}

void Subject::setFullMark(int fm)
{
	FullMark = fm;
}

int Subject::getFullMark()
{
     return FullMark;
}

void Subject::setStudentMark(int sm)
{
	StudentMark = sm;
}

int Subject::getStudentMark()
{
	return StudentMark;
}

Subject Subject::operator+(Subject A)
{
	Subject result;
	result.Name = Name + A.Name;
	result.FullMark = FullMark + A.FullMark;
	result.StudentMark = StudentMark + A.StudentMark;

	return result;
}

Subject::Subject()
{
}

Subject::Subject(string n, int fm, int sm)
{
	Name = n;
	FullMark = fm;
	StudentMark = sm;

}
