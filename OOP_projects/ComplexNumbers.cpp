
//============================================================================
// Name        : ComplexNumbers.cpp
// Author      : TenaCity23
// Description : Using a class to do calculations on complex numbers
//============================================================================

#include <iostream> 
using namespace std; 

class Complex { 
private: 
    double real, imaginary; 

public: 
    Complex() {}; 
    Complex(double r, double i) { 
        real = r; 
        imaginary = i;
    }

    Complex& operator + (const Complex& obj) { 
        double r = real + obj.real;
        double i = imaginary + obj.imaginary;
        return *(new Complex(r, i));
    }

    Complex& operator - (const Complex& obj) { 
        double r = real - obj.real;
        double i = imaginary - obj.imaginary;
        return *(new Complex(r, i));
    }

    Complex& operator * (const Complex& obj) { 
        double r = (real * obj.real) - (imaginary * obj.imaginary);
        double i = (imaginary * obj.real) + (real * obj.imaginary);
        return *(new Complex(r, i));
    }

    friend ostream& operator << (ostream& out, const Complex& obj) { 
        out << obj.real; 

        if (obj.imaginary < 0) { 
            out << " - " << (obj.imaginary * -1) << "i";
        } else { 
            out << " + " << obj.imaginary << "i";
        }

        return out;
    }

    friend istream& operator >> (istream& in, Complex& obj) { 
        cout << "Enter real part: "; 
        in >> obj.real; 

        cout << "Enter imaginary part: ";
        in >> obj.imaginary; 

        cout << endl; 
        return in;
    }
};

int main () { 
    Complex x, y; 
    Complex a, b, c;

    cout << "Enter the first equation: " << endl;
    cin >> x; 

    cout << "Enter the second equation: " << endl; 
    cin >> y;

    a = x + y;
    b = x - y;
    c = x * y;

    cout << "x + y = " << a << endl; 
    cout << "x - y = " << b << endl; 
    cout << "x * y = " << c << endl; 

    return 0;
}

/* Output: 

Enter the first equation: 
Enter real part: 3
Enter imaginary part: 4

Enter the second equation:
Enter real part: 2
Enter imaginary part: 3

x + y = 5 + 7i
x - y = 1 + 1i
x * y = -6 + 17i

*/
