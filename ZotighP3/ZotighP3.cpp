// ZotighP3.cpp
// Lance Zotigh (lzotigh1@cnm.edu)

#include <iostream>
#include <vector>
#include <string>

using namespace std;

// Constants
const double pi = 3.14159;

int main()
{
	//variables
	vector<string> namesOfPlanets;
	string usersName;
	string usersChoice;
	int planetChoice;
	double percentageIlluminated;

	// Header
	cout << "Lance Zotigh" << endl;
	cout << "Pourpose: a program to calculate the surface area of segments of the five planets that you can see from the earth with the unaided eye and of the moon" << endl;
	cout << "Calculating a Lune" << endl;

	// asks user for name
	cout << "Please enter you name: ";
	cin >> usersName;

	do 
	{
		cout << "\nPlease select a planet from the menu you would like to use by typing the desired colors corresponding number and pressing" << endl
			<< "enter on the keyoard or type 6 and press enter on the keyoard to quit the program:" << endl
			<< "\n1 = MERCURY" << endl
			<< "2 = MARS" << endl
			<< "3 = VENUS" << endl
			<< "4 = SATURN" << endl
			<< "5 = JUPITER" << endl
			<< "6 = THE MOON" << endl
			<< "\nYour Response: ";
		cin >> planetChoice;
		cin.ignore();

		// Checks to make sure the user is with in the correct threshold
		while(planetChoice <= 0 || planetChoice >= 7)
		{
			cout << "Selection not within the range of options";
			cout << "Do you want to calculate another question?" << endl;
			cin >> planetChoice;
			cin.ignore();
		} 

		// Asks the user for the percent
		cout << "What is the percentage of the face that is illuminated (ex 100% = 100): ";
		cin >> percentageIlluminated;
		cin.ignore();
		
		// Checks to make sure the user is with in the correct threshold
		while (percentageIlluminated <= 0 || percentageIlluminated >= 101) 
		{
			cout << "number entered is not in range" << endl;
			cout << "Do you want to calculate another question";
			cin >> percentageIlluminated;
			cin.ignore();
		}
		
		// Makes percent illuminated a decimal
		percentageIlluminated /= 100;

		cout << percentageIlluminated;


	} while (0);


}