#include <iostream>
using namespace std;

int main() {
	int numberOfGrades;	// the number of grades read.
	int count;
	int input;
	double sum;
	double avgOfGrades;
  int highest;
  int lowest;

	// Read in the values from the console
	count = 0;
	sum = 0;
  highest = -1;
	cout << "Please input a grade from 0 to 100, (or -99 to stop)" << endl;
	cin >> input;

	while (input != -99)
	{
    if (input > highest)
      highest = input;
      lowest = input;
		sum = sum + input;
		count++;
		cin >> input;
	}

	numberOfGrades = count;

	if (numberOfGrades > 0)
	{
		// find the average
		avgOfGrades = sum / numberOfGrades;

		cout << endl << "The average of all the grades is " << avgOfGrades << endl;
    cout << endl << "The highest of all the grades is " << highest << endl;
    cout << endl << "The lowest of all the grades is " << lowest << endl;
	}
}