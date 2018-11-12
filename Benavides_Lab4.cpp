// Mario Benavides
// Lab 4 - object will not take value
// This is a class called Population that stores current population, 
// annual number of births, and an annual number of deaths for some geographic area 

#include <iostream>
#include <iomanip>
using namespace std;



class Population
{
	private: 			// Member variables
		int population, births, deaths;
		
	public: 			// Member functions
		Population() 	// Initialize Population to 2 and number of births and deaths to 0.
		{
				population = 2;
				births = 0;
				deaths = 0;
		}
		
		Population(int x, int y, int z)	 // constructor with 3 parameters.
		{
			if (x < 2)
				population = 2;
			else
				population = x;
				
			if (y < 0)
				births = 0;
			else
				births = y;
				
			if (z < 0)
				deaths = 0;
			else
				deaths = z;
		}
		
		void setPopulation(int x) // member function for setPopulation.   
		{
			if (x < 2)
				population = 2;
			else
				population = x;
		}
		
		void setBirths(int y) // member function for setBirths.
		{
			if (y < 0)
				births = 0;
			else
				births = y;
		}
		
		void setDeaths(int z) // member function for setDeaths.
		{
			if (z < 0)
				deaths = 0;
			else
				deaths = z;
		}

		double getBirths() 	// calculate Birthrate.
		{
			return births / population;
		}

		double getDeaths() 	// calculate Deathrate.
		{
			return deaths / population;
		}

};



int main() // main function
{
	double population, births, deaths;

	cout << fixed << showpoint << setprecision(3); 	// formatting
	
	
	
	Population pop1, pop2; 		// objects will not take values from class
	pop1.getBirths();			// or values never makes it to members
	pop2.getDeaths();



	cout << "Enter total population: ";
	cin >> population;

	cout << "Enter annual number of births: ";
	cin >> births;

	cout << "Enter annual number of deaths: ";
	cin >> deaths;

	cout << endl;	// new line
	cout << "Population Statistics" << endl;
	cout << endl;	// new line

	cout << "\t Population: " << population << endl;
	cout << "\t Birth Rate: " << pop1.getBirths() << endl; 	// calling object
	cout << "\t Death Rate: " << pop2.getDeaths() << endl; 	// calling object
	
	
	return 0;
}
