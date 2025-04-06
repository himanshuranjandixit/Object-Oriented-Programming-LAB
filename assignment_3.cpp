#include <iostream>
#include <iomanip>

using namespace std;

class Time {
private:
    int hours;
    int minutes;

public:
    // Constructor
    Time(int h, int m = 0) {
        if (h < 0 || h > 23) 
            hours = 23;  // maximum default value of hour
        else 
            hours = h;
        
        if (m < 0 || m > 59) 
            minutes = 59;  // maximum default value of minute
        else 
            minutes = m;
    }

    // Destructor
    ~Time() {
        cout << "Time destroyed :  " << hours << ":" 
             << setw(2) << setfill('0') << minutes << endl;
    }

    // Function to display time 
    void display() const {
        cout << setw(2) << setfill('0') << hours << ":"
             << setw(2) << setfill('0') << minutes << endl;
    }

    // Function to add minutes to the time
    void addMinutes(int addMin) {
        minutes += addMin;
        hours += minutes / 60;  
        minutes %= 60;          
        hours %= 24;          
    }
};

int main() {
    Time times[] = {Time(11, 30),Time(13, 50),Time(22, 59),Time(7, 5)};

    cout << "Initial Times:\n";
    for (int i = 0; i < 4; i++) {
        times[i].display();
    }

    // Adding different amounts of time
    times[0].addMinutes(15);  
    times[1].addMinutes(20);  
    times[2].addMinutes(2);   
    times[3].addMinutes(125); 

    cout << "\nUpdated Times:\n";
    for (int i = 0; i < 4; i++) {
        times[i].display();
    }

    return 0;
}

