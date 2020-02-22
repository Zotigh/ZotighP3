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

	vector<int> radiOfPlanets;
	radiOfPlanets.push_back(2440);
	radiOfPlanets.push_back(3397);
	radiOfPlanets.push_back(6052);
	radiOfPlanets.push_back(60268);
	radiOfPlanets.push_back(71492);
	radiOfPlanets.push_back(1738);

	string usersName;
	string usersChoice;
	int planetChoice;
	double percentageIlluminated;
	double loonSurfaceAreaCalculation;

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
		cout << "\nWhat is the percentage of the face that is illuminated (ex 100% = 100): ";
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
		
		// Converts the percent illuminated to theta
		double Theta = percentageIlluminated * pi;

		// Makes percent illuminated a decimal
		percentageIlluminated /= 100;

		if (planetChoice = 1) 
		{
			cout << "\n" << usersName << " you chose Mercury " << "the percent illuminated is " << percentageIlluminated << "%"
				<< " with a radius of " << radiOfPlanets[1] << "km"
				<< " the surface are of the loon is: " << radiOfPlanets[1] * 2 * Theta << "km" << endl;
		} else if (planetChoice = 2)
		{
			cout << "\n" << usersName << " you chose Mars " << "the percent illuminated is " << percentageIlluminated << "%"
				<< " with a radius of " << radiOfPlanets[2] << "km"
				<< " the surface are of the loon is: " << radiOfPlanets[2] * 2 * Theta << "km" << endl;
		}  
		else if (planetChoice = 3)
		{
			cout << "\n" << usersName << " you chose Venus " << "the percent illuminated is " << percentageIlluminated << "%"
				<< " with a radius of " << radiOfPlanets[3] << "km"
				<< " the surface are of the loon is: " << radiOfPlanets[] * 2 * Theta << "km" << endl;
		} 
		else if (planetChoice = 4)
		{
			cout << "\n" << usersName << " you chose Saturn " << "the percent illuminated is " << percentageIlluminated << "%"
				<< " with a radius of " << radiOfPlanets[4] << "km"
				<< " the surface are of the loon is: " << radiOfPlanets[4] * 2 * Theta << "km" << endl;
		}
		else if (planetChoice = 5)
		{
			cout << "\n" << usersName << " you chose Jupiter " << "the percent illuminated is " << percentageIlluminated << "%"
				<< " with a radius of " << radiOfPlanets[5] << "km"
				<< " the surface are of the loon is: " << radiOfPlanets[5] * 2 * Theta << "km" << endl;
		}
		else if (planetChoice = 6)
		{
			cout << "\n" << usersName << " you chose the Moon " << "the percent illuminated is " << percentageIlluminated << "%"
				<< " with a radius of " << radiOfPlanets[6] << "km"
				<< " the surface are of the loon is: " << radiOfPlanets[6] * 2 * Theta << "km" << endl;
		}


		//loonSurfaceAreaCalculation = 2 * find r * Theta;
 
	} while (0);


}