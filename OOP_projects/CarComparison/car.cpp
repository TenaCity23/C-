//============================================================================
// Name        : car.cpp
// Author      : TenaCity23
// Description : Comparing Cars using Classes
//============================================================================

#include <iostream> 
#include "car.hpp"
using namespace std; 

int main () {

    Car myCar {"Toyota", 2000, 5000};
    Car yourCar {"Honda", 2018, 10000};

    cout << "My Car specs: " << endl << myCar << endl;
    cout << "Your Car specs: " << endl << yourCar << endl;

    if (myCar > yourCar) { 
        cout << "My car is more expensive than your car." << endl;
    } else { 
        cout << "Your car is more expensive than my car." << endl;
    }

    double total = myCar + yourCar; //myCar.operator+(yourCar)

    cout << "Total Value of both our cars: $" << total << endl; 

    return 0;
}

/* Output: 

My Car specs: 
Make: Toyota
Year: 2000
Price: $5000

Your Car specs: 
Make: Honda
Year: 2018
Price: $10000

Your car is more expensive than my car.
Total Value of both our cars: $15000

*/
