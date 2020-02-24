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
	int planetChoice;
	double percentageIlluminated;
	string choice;

	// vector
	vector<string> namesOfPlanets;
	namesOfPlanets.push_back("Mercury");// Mercury[0]
	namesOfPlanets.push_back("Mars");// Mars[1]
	namesOfPlanets.push_back("Venus");// Venus[2]
	namesOfPlanets.push_back("Saturn");// Saturn[3]
	namesOfPlanets.push_back("Jupiter");// Jupiter[4]
	namesOfPlanets.push_back("The Moon");// The Moon[5]

	// vector
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

		cout << radiOfPlanets << endl;

		// Checks to make sure the user is with in the correct threshold
		while(planetChoice <= 0 || planetChoice >= 7)
		{
			cout << "Selection not within the range of options";
			cout << "Do you want to calculate another question?" << endl;
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
			cout << "Do you want to calculate another question";
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

		// If statements to handle choice output
		if (planetChoice == 1) 
		{
			cout << "\n" << usersName << " you chose Mercury" 
				<< "\nthe percent illuminated is: " << percentageIlluminated * 100 << "%"
				<< "\nwith a radius of: " << radiOfPlanets[0] << "km"
				<< "\nthe surface are of the loon is: " << radiOfPlanets[0] * thetaTo << "km" << endl;
		} 
		else if (planetChoice == 2)
		{
			cout << "\n" << usersName << " you chose Mars" 
				<< "\nthe percent illuminated is: " << percentageIlluminated * 100 << "%"
				<< "\nwith a radius of: " << radiOfPlanets[1] << "km"
				<< "\nthe surface area of the loon is: " << radiOfPlanets[1] * thetaTo << "km" << endl;
		}  
		else if (planetChoice == 3)
		{
			cout << "\n" << usersName << " you chose Venus" 
				<< "the percent illuminated is: " << percentageIlluminated * 100 << "%"
				<< "\nwith a radius of: " << radiOfPlanets[2] << "km"
				<< "\nthe surface area of the loon is: " << radiOfPlanets[2] * thetaTo << "km" << endl;
		} 
		else if (planetChoice == 4)
		{
			cout << "\n" << usersName << " you chose Saturn" 
				<< "\nthe percent illuminated is: " << percentageIlluminated * 100 << "%"
				<< "\nwith a radius of: " << radiOfPlanets[3] << "km"
				<< "\nthe surface area of the loon is: " << radiOfPlanets[3] * thetaTo << "km" << endl;
		}
		else if (planetChoice == 5)
		{
			cout << "\n" << usersName << " you chose Jupiter" 
				<< "\nthe percent illuminated is: " << percentageIlluminated * 100 << "%"
				<< "\nwith a radius of: " << radiOfPlanets[4] << "km"
				<< "\nthe surface area of the loon is: " << radiOfPlanets[4] * thetaTo << "km" << endl;
		}
		else if (planetChoice == 6)
		{
			cout << "\n" << usersName << " you chose the Moon"
				<< "\nthe percent illuminated is: " << percentageIlluminated * 100 << "%"
				<< "\nwith a radius of: " << radiOfPlanets[5] << "km"
				<< "\nthe surface area of the loon is: " << radiOfPlanets[5] * thetaTo << "km" << endl;
		}

		// cout to ask if user wants to go again
		cout << "\nCalculate another? (y/n); ";
		cin >> choice;

	} while (choice != "n");

	// Exit message
	cout << "Thank you for using my program, Good bye for now." << endl;

	return 0;
}