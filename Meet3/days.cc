#include <iostream>
using namespace std;

int main() {
    int days;

    cout << "Input your days with number (1-7) : ";
    cin >> days;
    
    switch(days) 
    {
        case 1 :
            cout << "Sunday" << endl;
            break;
        case 2 :
            cout << "Monday" << endl;
            break;
        case 3 :
            cout << "Tuesday" << endl;
            break;
        case 4 :
            cout << "Wednesday" << endl;
            break;
        case 5 :
            cout << "Thrusday" << endl;
            break;
        case 6 :
            cout << "Friday" << endl;
            break;
        case 7 :
            cout << "Saturday" << endl;
            break;
        default :
            cout << "Sorry your input is wrong number" << endl;
    }

    return 0;
}