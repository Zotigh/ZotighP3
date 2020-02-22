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

	//vectors
	vector<int> radiOfPlanets;
	radiOfPlanets.push_back(2440);// Mercury[1]
	radiOfPlanets.push_back(3397);// Mars[2]
	radiOfPlanets.push_back(6052);// Venus[3]
	radiOfPlanets.push_back(60268);// Saturn[4]
	radiOfPlanets.push_back(71492);// Jupiter[5]
	radiOfPlanets.push_back(1738);// The Moon[6]

	string usersName;
	string usersChoice;
	int planetChoice;
	double percentageIlluminated;
	double loonSurfaceAreaCalculation;
	string choice;

	// Header
	cout << "Lance Zotigh" << endl;
	cout << "Project calculate a Lune" << endl;
	cout << "Pourpose: a program to calculate the surface area of segments of the five planets that you can see from the earth with the unaided eye and of the moon" << endl;

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
		
		//This is where all my calculations are done for the most part:

		// Converts the percent illuminated to theta
		double theta = percentageIlluminated * pi;

		// Makes percent illuminated a decimal
		percentageIlluminated /= 100;

		// Calculates the 2 * theta so there is no need to repeat
		double thetaxto = 2 * theta;


		if (planetChoice = 1) 
		{
			cout << "\n" << usersName << " you chose Mercury " << "the percent illuminated is " << percentageIlluminated << "%"
				<< " with a radius of " << radiOfPlanets[1] << "km"
				<< " the surface are of the loon is: " << radiOfPlanets[1] * thetaxto << "km" << endl;
		} else if (planetChoice = 2)
		{
			cout << "\n" << usersName << " you chose Mars " << "the percent illuminated is " << percentageIlluminated << "%"
				<< " with a radius of " << radiOfPlanets[2] << "km"
				<< " the surface are of the loon is: " << radiOfPlanets[2] * thetaxto << "km" << endl;
		}  
		else if (planetChoice = 3)
		{
			cout << "\n" << usersName << " you chose Venus " << "the percent illuminated is " << percentageIlluminated << "%"
				<< " with a radius of " << radiOfPlanets[3] << "km"
				<< " the surface are of the loon is: " << radiOfPlanets[3] * thetaxto << "km" << endl;
		} 
		else if (planetChoice = 4)
		{
			cout << "\n" << usersName << " you chose Saturn " << "the percent illuminated is " << percentageIlluminated << "%"
				<< " with a radius of " << radiOfPlanets[4] << "km"
				<< " the surface are of the loon is: " << radiOfPlanets[4] * thetaxto << "km" << endl;
		}
		else if (planetChoice = 5)
		{
			cout << "\n" << usersName << " you chose Jupiter " << "the percent illuminated is " << percentageIlluminated << "%"
				<< " with a radius of " << radiOfPlanets[5] << "km"
				<< " the surface are of the loon is: " << radiOfPlanets[5] * thetaxto << "km" << endl;
		}
		else if (planetChoice = 6)
		{
			cout << "\n" << usersName << " you chose the Moon " << "the percent illuminated is " << percentageIlluminated << "%"
				<< " with a radius of " << radiOfPlanets[6] << "km"
				<< " the surface are of the loon is: " << radiOfPlanets[6] * thetaxto << "km" << endl;
		}

		cout << "Calculate another? (y/n); ";
		cin >> choice;

	} while (choice != "n");

	cout << "Thank you for using my program, Good bye for now." << endl;

	return 0;
}