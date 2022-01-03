#include <iostream>
using namespace std;

int main ()
{
    // variables
    int timePassed;
    int hours;
    double minutes;
    double seconds;

    // prompts and outputs
    cout << "Enter the elapsed time in seconds: ";
    cin >> timePassed;
    cout << "The elapsed time in seconds = " << timePassed << endl;
    // math
    hours = timePassed / 3600;
    minutes = timePassed % 3600 / 60;
    seconds = timePassed % 3600 % 60;
    cout << "The equivalent time in hours:minutes:seconds = " << hours << ":" << minutes << ":" << seconds << endl;

    return 0;
}
