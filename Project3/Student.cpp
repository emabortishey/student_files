#include "Student.h"

void Student::set_grades(int grade_1[10])
{
	for (int i = 0; i < 10; i++)
	{
		grades[i] = grade_1[i]; 
	}
}
int* Student::get_grades()
{
	return grades;
}

void Student::set_name(char* name_1)
{
	strcpy_s(name, 10, name_1);
} 

char* Student::get_name()
{
	return name;
}

int Student::average_one()
{
	int average = 0;
	for (int i = 0; i < 10; i++)
	{
		average = average + grades[i];
	}

	average = average / 10;

	return average;
}

void Student::PutInFile(const char* filename_P)
{
	ofstream FILEE(filename_P, ios::out);

	if (!FILEE)
	{
		cout << "Открытие файла прошло неудачно";
	}

	FILEE.open(filename_P);

	for (int i = 0; i < 10; i++)
	{
		FILEE << grades[i] << '\t';
	}

	FILEE.close();
}

void Student::GetFromFile(const char* filename_P)
{
	ifstream FILEE(filename_P, ios::in);
	int buff;

	if (!FILEE)
	{
		cout << "Открытие файла прошло неудачно";
	}

	FILEE.open(filename_P);

	for (int i = 0; i < 10; i++)
	{
		FILEE >> buff;
		cout << buff << '\t';
	}

	FILEE.close();
}