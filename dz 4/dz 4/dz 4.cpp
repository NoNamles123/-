#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

enum ROOM { 
    Basement, 
    Garage, 
    Kitchen, 
    Bathroom, 
    Bedroom, 
    Attic };
enum EMERGENCY {
    Fire, 
    Flood, 
    Burglars, 
    PowerFailure };

int main() {
    srand(time(NULL));
    int m = 10;
    int n;

    cout << "Enter N: ";
    cin >> n;

    if (n > m) {
        cout << "Warning: N is greater than M!" << endl;
    }
    else 
    {
        for (int i = n; i <= m; i++) {
            switch (i) {
            case 1: cout << "Ivanov" << endl; break;
            case 2: cout << "Petrov" << endl; break;
            case 3: cout << "Sydorovich" << endl; break;
            case 4: cout << "Kovachyk" << endl; break;
            case 5: cout << "Bondarchyc" << endl; break;
            case 6: cout << "Tkachenko" << endl; break;
            case 7: cout << "Shavchenko" << endl; break;
            case 8: cout << "Kravchenko" << endl; break;
            case 9: cout << "Oliynyk" << endl; break;
            case 10: cout << "Morozov" << endl; break;
            }
        }
    }
	cout << endl;

    int total = 0;

    for (int i = 0; i < 5; i++) {
        int shot = rand() % 10 + 1;
        cout << "Shot " << i + 1 << ": " << shot << endl;
        total += shot;
    }

    int average = total / 5;
    cout << "Average: " << average << " -> ";

    if (average == 10) {
        cout << "sniper" << endl;
    }
    else if (average == 9) {
        cout << "sniper's student" << endl;
    }
    else if (average == 8 || average == 7) {
        cout << "amateur" << endl;
    }
    else if (average == 6 || average == 5) {
        cout << "beginner" << endl;
    }
    else {
        cout << "spectator" << endl;
    }

    cout << endl;

    ROOM currentRoom = Kitchen;
    EMERGENCY currentEmergency = Fire;

    bool isPossible = false;

    if (currentEmergency == Fire) {
        isPossible = true;
        cout << "Room: " << currentRoom << " | Emergency: Fire. Call the Fire Department!" << endl;
    }
    else if (currentEmergency == Flood && (currentRoom == Bathroom || currentRoom == Kitchen || currentRoom == Basement)) {
        isPossible = true;
        cout << "Room: " << currentRoom << " | Emergency: Flood. Call the Plumber!" << endl;
    }
    else if (currentEmergency == Burglars) {
        isPossible = true;
        cout << "Room: " << currentRoom << " | Emergency: Burglars. Call the Police!" << endl;
    }
    else if (currentEmergency == PowerFailure) {
        isPossible = true;
        cout << "Room: " << currentRoom << " | Emergency: Power Failure. Call the Electrician!" << endl;
    }

    if (!isPossible) {
        cout << "Everything is fine in the house." << endl;
    }
}