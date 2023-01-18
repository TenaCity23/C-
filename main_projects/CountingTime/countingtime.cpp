//============================================================================
// Name        : countingtime.cpp
// Author      : TenaCity23
// Description : Counting Time
//============================================================================

#include <iostream>
#include "dtime.h"
using namespace std;

int main()
{
    DigitalTime clock, old_clock;

    cout << "Enter the time in 24-hour notation: ";
    cin >> clock;

    old_clock = clock;
    clock.advance(15);

    cout << "You entered " << old_clock << endl << endl;
    cout << "15 minutes later the time will be " << clock << endl << endl;

    old_clock = clock;
    clock.advance(2, 15);

    cout << "2 hours and 15 minutes after " << old_clock << ", the time will be " << clock << endl;

    return 0;
}

/* Output:

Enter the time in 24-hour notation: 10:25
You entered 10:25

15 minutes later the time will be 10:40

2 hours and 15 minutes after 10:40, the time will be 12:55

 */
