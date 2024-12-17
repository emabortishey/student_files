#pragma once
#include <iostream>
#include <fstream>
#include <stdio.h>
#include <conio.h>
#include <iomanip>
using namespace std;

class Student
{
private:
	int grades[10];
	char* name = new char[10];
public:
	void set_grades(int grade_1[10]);
	int* get_grades();
	void set_name(char name_1[10]);
	char* get_name();
	int average_one();

	void PutInFile(const char* filename_P);
	void GetFromFile(const char* filename_P);

	~Student()
	{
		delete[] name;
	}
};

