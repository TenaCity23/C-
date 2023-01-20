#include <iostream>
using namespace std; 

class Car { 
private: 
    string make; 
    int year; 
    double price; 

public: 
    Car () { 
        make = "";
        year = 1950;
        price = 1000;
    }

    Car (string make, int year, double price) {
        this->make = make; 
        this->year = year;
        this->price = price;
    }

    double operator + (Car c) { 
        return price + c.price;
    }

    // string getmake() { 
    //     return make; 
    // }

    // int getyear () { 
    //     return year;
    // }

    // int getprice() { 
    //     return price;
    // }

    friend bool operator > (const Car& myCar, const Car& yourCar) { 
        if (myCar.price > yourCar.price) { 
            return true;
        } else { 
            return false;
        }
    }

    friend ostream& operator <<(ostream& object, const Car& c) { 
        object << "Make: " << c.make << endl;
        object << "Year: " << c.year << endl; 
        object << "Price: $" << c.price << endl;

        return object;
    }

};
