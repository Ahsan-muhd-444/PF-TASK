#include <iostream>
#include <conio.h>
#include <string>
using namespace std;

struct Seat {
    string status; 
};

int main() {
    
    Seat* train_seat[20][7];

    
    for (int i = 0; i < 20; i++) {
        for (int y = 0; y < 7; y++) {
            train_seat[i][y] = new Seat;         
            train_seat[i][y]->status = "XX ";    
        }
    }

    while (true) {
        int NUM = 1;
        system("cls");
        cout << "   --------------------" << endl;
        cout << "    1  2  3  4     5  6" << endl;
        cout << "   --------------------" << endl;

        int input_row, input_column;

        for (int i = 0; i < 20; i++) {
            if (i == 5 || i == 10 || i == 15) {
                cout << "\n";
                continue;
            }

            NUM < 10 ? cout << NUM++ << " |" : cout << NUM++ << "|";
            for (int y = 0; y < 7; y++) {
                if (y == 4) {
                    cout << "   ";
                    continue;
                }
                cout << train_seat[i][y]->status;
            }
            cout << endl;
        }

        cout << "\n\t\tPLEASE ENTER THE TICKET ROW YOU WANNA BOOK! : ";
        cin >> input_row;
        cout << "\n\t\tPLEASE ENTER THE COLUMN NUMBER! : ";
        cin >> input_column;

        // Adjusting row numbers due to spacing
        if (input_row > 5 && input_row <= 9)
            input_row += 1;
        if (input_column > 4 && input_column < 7)
            input_column += 1;
        if (input_row >= 10 && input_row <= 13)
            input_row += 2;
        if (input_row >= 14 && input_row <= 17)
            input_row += 3;

        if (train_seat[input_row - 1][input_column - 1]->status == "-- ") {
            cout << "SORRY! THE SEAT IS ALREADY BOOKED." << endl;
            break;
        } else {
            train_seat[input_row - 1][input_column - 1]->status = "-- ";
            cout << "\n\t\tSEAT IS BOOKING... PRESS ANY KEY TO CONFIRM : ";
            getch();
        }
    }

  
    for (int i = 0; i < 20; i++) {
        for (int y = 0; y < 7; y++) {
            delete train_seat[i][y]; 
        }
    }

    return 0;
}
