#include "Student.h"

int main()
{
	setlocale(LC_ALL, "Russian");

	Student obj;
	int* returned = new int[10];
	char* namee = new char[10] {"meow"};

	int mass_grades[10] = { 1,2,3,4,5,6,7,8,9,0 };

	obj.set_grades(mass_grades);

	returned = obj.get_grades();

	for (int i = 0; i < 10; i++)
	{
		cout << returned[i] << '\t';
	}

	obj.set_name(namee);

	cout << "\n";

	cout << obj.get_name();

	cout << "\n";

	cout << obj.average_one();

	obj.PutInFile("meow.txt");

	obj.GetFromFile("meow.txt");

	return 0;
}