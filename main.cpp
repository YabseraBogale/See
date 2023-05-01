#include <iostream>
#include <iomanip>
using namespace std;



#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

double standardRoomPrices[] = {182.16, 202, 202, 202, 170.74, 170.74, 170.74, 227, 227, 189.75, 189.75, 189.75, 170.79, 189, 210};
double executiveRoomPrices[] = {250.47, 278, 278, 278, 239.1, 239.1, 239.1, 303.6, 303.6, 265, 265, 265, 240, 264, 290};
double presidentialRoomPrices[] = {523.71, 578, 578, 578, 512, 512, 512, 607, 607, 570, 570, 570, 512, 550, 595};
double kingBedPrices[] = {200, 220, 220, 220, 210, 210, 200, 230, 230, 220, 220, 220, 220, 220, 240};
double deluxeKingBedPrices[] = {250, 285, 285, 285, 270, 270, 260, 299, 299, 285, 285, 285, 285, 285, 320};
double hyattPresidentialRoomPrices[] = {2200, 2220, 2220, 2220, 2200, 2200, 2200, 2220, 2220, 2200, 2200, 2200, 2200, 2200, 2240};
int day,month,year;

 struct price{
    double finalprice;
    double discountprice;
    };




price calculateDiscount(double nights,double roomchoice){
    double num=0;
    price p1;

  double *room=nullptr;
if (roomchoice==1){
  room=standardRoomPrices;
}else if (roomchoice==2){
  room=executiveRoomPrices;
}else if (roomchoice==3){
   room=presidentialRoomPrices;
}else if (roomchoice==4){
   room=kingBedPrices;
}else if (roomchoice==5){
   room=deluxeKingBedPrices;
}else if (roomchoice==6){
   room=hyattPresidentialRoomPrices;
}
double first=room[0];
if (nights>1){//apply discount
    if (month==3&&day==31){
        p1.finalprice=first*nights;
        num = p1.finalprice*0.15;
        p1.discountprice=p1.finalprice-num;
    }else {
        p1.finalprice=room[day]*nights;
        num = p1.finalprice*0.15;
        p1.discountprice=p1.finalprice-num;
    }
}else {
    if (month==3&&day==31){
        p1.finalprice=first;
        p1.discountprice=0;
    }else {
        p1.discountprice=0;
        p1.finalprice = room[day];
    }
}
return p1;
}


void displayRoomPrices() {
    string dates[15] = {"March 31", "April 1", "April 2", "April 3", "April 4", "April 5", "April 6", "April 7", "April 8", "April 9", "April 10", "April 11", "April 12", "April 13", "April 14"};
    cout << "Room prices for March 31 - April 14\n";
    cout << "===================================\n";
    cout << "Standard Room Prices:\n";
    for(int i = 0; i < 15; i++) {
        cout << dates[i] << ": " << fixed << setprecision(2) << standardRoomPrices[i]<<" birr" << endl;
    }
    cout << endl;

    cout << "Executive Room Prices:\n";
    for(int i = 0; i < 15; i++) {
        cout << dates[i] << ": " << fixed << setprecision(2) << executiveRoomPrices[i]<<" birr" << endl;
    }
    cout << endl;

    cout << "Presidential Room Prices:\n";
    for(int i = 0; i < 15; i++) {
        cout << dates[i] << ": " << fixed << setprecision(2) << presidentialRoomPrices[i]<<" birr" << endl;
    }
    cout << endl;

    cout << "King Bed Prices:\n";
    for(int i = 0; i < 15; i++) {
        cout << dates[i] << ": " << fixed << setprecision(2) << kingBedPrices[i]<<" birr" << endl;
    }
    cout << endl;

    cout << "Deluxe King Bed Prices:\n";
    for(int i = 0; i < 15; i++) {
        cout << dates[i] << ": " << fixed << setprecision(2) << deluxeKingBedPrices[i] <<" birr"<< endl;
    }
    cout << endl;

    cout << "Hyatt Presidential Room Prices:\n";
    for(int i = 0; i < 15; i++) {
        cout << dates[i] << ": " << fixed << setprecision(2) << hyattPresidentialRoomPrices[i] <<" birr" <<endl;
    }
    cout << endl;
}
bool isDateValid(int month, int day,int year)
{
    if (month == 3 && day<= 31) // if month is March and day is 31 or later
        return true;
    else if (month == 4 && day <= 14) // if month is April and day is 14 or earlier
        return true;
    else if (year==2023)
        return true;
    else
        return false;
}



int main() {

day=0;
month=0;
year=0;
int choice, roomchoice, nights;
bool isvalid;
cout << "Welcome to Raddison Hotel \n" << endl;
do {
    isvalid = true;
    cout << "Menu: " << endl << "1. Book a room " << endl << "2. Display room prices \nEnter choice: ";
    cin >> choice;
    if (choice == 1) {

        do {
            isvalid = true;
            cout << "What type of room would you like: \n 1. Standard Room \n 2. Executive Room\n 3. Presidential Room\n 4. King Bed \n 5. Deluxe King Bed \n 6. Hyatt Presidential Room\nEnter choice: ";
            cin >> roomchoice;
            if (roomchoice > 6 || roomchoice < 1) {
                cout << "Invalid input! Please enter a valid option: ";
                isvalid = false;
            }
        } while (!isvalid);

        cout << "\nEnter date between March 31 and April 14 for booking(Mm Dd YyYy): ";
        cin >> month >> day >> year;
        if (!isDateValid(day, month, year)) {
            do {
                cout << "Invalid Date! Please enter a valid date between March 31 and April 14 (Mm Dd YyYy): ";
                cin >> day >> month >> year;
            } while (!isDateValid(day, month, year));
        }
        cout << "How many night will you be staying: ";
        cin >> nights;
        if (nights == 0) {
            cout << "Invalid input! Please enter a valid number of nights: ";
            isvalid = false;
        }
        price p1 = calculateDiscount(nights, roomchoice);
        if (p1.discountprice == 0) {
            cout << "\n===================================\n";
            cout << "Final price: " << p1.finalprice;
        }
        else {
            cout << "Since you are having more one night stay please enjoy out 10% discount and free breakfast package \nFinal price: " << p1.finalprice << " birr" << endl;
            cout << "Discount price: " << p1.discountprice << " birr";
        }
        cout << "\n===================================\n";

    }
    else if (choice == 2) {
        displayRoomPrices();
        isvalid = false;
    }
    else {
        cout << "Invalid choice! Please enter a valid option: ";
        isvalid = false;
    }
} while (!isvalid);
cout<< "\nThank You and we hope You enjoy your stay!\n\n";


    return 0;
}



