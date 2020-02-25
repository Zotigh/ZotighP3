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
	// variables
	string usersName;
	string usersChoice;
	string choice;
	double planetChoice;
	double percentageIlluminated;

	// vector of stings for the names
	vector<string> namesOfPlanets;
	namesOfPlanets.push_back("Mercury");// Mercury[0]
	namesOfPlanets.push_back("Mars");// Mars[1]
	namesOfPlanets.push_back("Venus");// Venus[2]
	namesOfPlanets.push_back("Saturn");// Saturn[3]
	namesOfPlanets.push_back("Jupiter");// Jupiter[4]
	namesOfPlanets.push_back("The Moon");// The Moon[5]

	// vector of values for the planets
	vector<int> radiOfPlanets;
	radiOfPlanets.push_back(2440);// Mercury[0]
	radiOfPlanets.push_back(3397);// Mars[1]
	radiOfPlanets.push_back(6052);// Venus[2]
	radiOfPlanets.push_back(60268);// Saturn[3]
	radiOfPlanets.push_back(71492);// Jupiter[4]
	radiOfPlanets.push_back(1738);// The Moon[5]

	// Not sure if this is what you mean by set to zero decimal places
	// set fixed and precison
	cout.setf(ios::fixed);
	//set precision
	cout.precision(0);

	// Course Header
	cout << "Lance Zotigh" << endl;
	cout << "Project calculate a Lune" << endl;
	cout << "Pourpose: a program to calculate the surface area of segments of the five planets that you can see from the earth with the unaided eye and of the moon" << endl;

	// asks user for name
	cout << "\nPlease enter you name: ";
	cin >> usersName;

	// Do while play loop
	do
	{
		cout << "\nPlease select a planet from the menu you would like to use by typing the desired planets corresponding number and pressing enter" << endl
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
		while (planetChoice <= 0 || planetChoice >= 7)
		{
			cout << "Selection not within the range of options" << endl;
			cout << "Please enter a valid option within range: ";
			cin >> planetChoice;
			cin.ignore();
		}

		// Asks the user for the percent
		cout << "\nWhat is the percentage of the face that is illuminated (ex for 100% enter 100): ";
		cin >> percentageIlluminated;
		cin.ignore();

		// Checks to make sure the user is with in the correct threshold
		while (percentageIlluminated <= 0 || percentageIlluminated >= 101)
		{
			cout << "number entered is not in range" << endl;
			cout << "Please enter a percentage that is within range: ";
			cin >> percentageIlluminated;
			cin.ignore();
		}

		// This is where almost all my calculations are done for the most part:

		// Makes percent illuminated a decimal
		percentageIlluminated /= 100;

		// Converts the percent illuminated to theta
		double theta = percentageIlluminated * pi;

		// Calculates the (2 * theta) so there is no need to repeat
		double thetaTo = 2 * theta;

		// Takes care of the out put to the user
		cout << "\n" << usersName << " you chose " << namesOfPlanets[planetChoice - 1]
			<< "\nthe percent illuminated is: " << percentageIlluminated * 100 << "%"
			<< "\nwith a radius of: " << radiOfPlanets[planetChoice - 1] << "km"
			<< "\nthe surface are of the loon is: " << radiOfPlanets[planetChoice - 1] * thetaTo << "km" << endl;

		// cout to ask if user wants to go again
		cout << "\nCalculate another? (y/n); ";
		cin >> choice;

		while (choice != "n" && choice != "y")
		{
			cout << "Not a valid choice." << endl;
			cout << "Please enter a valid option (y/n): ";
			cin >> choice;
		}
		
	} while (choice != "n" && choice == "y");

	// Exit message
	cout << "Thank you for using my program, Good bye for now." << endl;

	return 0;
}