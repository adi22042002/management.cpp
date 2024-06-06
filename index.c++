#include <iostream>
#include <fstream>
#include <iomanip>
#include <stdlib.h>
#include <string.h>

using namespace std;
void menu();

class ManageMenu
{
protected:
    string userName; // hide admin name
public:
    ManageMenu()
    {
        cout << "\n\n\n\n\n\t Enter your  Name to continue as a Admin:";
        cin >> userName;
        system("CLS");
        menu();
    }
    ~ManageMenu() {}
};

class Customers
{
public:
    string name, gender, address;
    int age, MobileNo;
    static int CustID;
    char all[999];

    void getDetail()
    {
        ofstream out("old-customer.txt", ios::app);
        if (out.is_open())
        {
            cout << "Enter Customer ID: ";
            cin >> CustID;
            cout << "Enter Name: ";
            cin >> name;
            cout << "Enter Gender: ";
            cin >> gender;
            cout << "Enter Age: ";
            cin >> age;
            cout << "Enter Mobile Number: ";
            cin >> MobileNo;
            cout << "Enter Address: ";
            cin.ignore(); // Ignore newline character left in the buffer
            getline(cin, address);

            out << "\nCustomer ID: " << CustID << "\nName: " << name << "\nAge: " << age << "\nMobile Number: " << MobileNo << "\nAddress: " << address << "\nGender: " << gender << endl;
            out.close();
            cout << "\nSAVED\nNOTE: We save your details record for future purposes.\n"
                 << endl;
        }
        else
        {
            cout << "Error opening file!" << endl;
        }
    }

    void showDetails()
    {
        ifstream in("old-customer.txt");
        if (in.is_open())
        {
            while (in.getline(all, 999))
            {
                cout << all << endl;
            }
            in.close();
        }
        else
        {
            cout << "Error opening file!" << endl;
        }
    }
};
int Customers::CustID;
class Cabs
{
public:
    int cabChoice;
    int Kilometers;
    float cabCost;
    static float lastcabCost;

    void cabDetail()
    {
        cout << "We collaborated with the fastest, safest, and smartest cab service around the country" << endl;
        cout << "---------Habibi Cabs---------" << endl;
        cout << "1. Rent a Standard Cab - Rs.15 for 1KM" << endl;
        cout << "2. Rent a Luxury Cab - Rs.25 for 1KM" << endl;
        cout << "\nTo calculate the cost for your journey:" << endl;
        cout << "Enter which kind of cab you need: ";
        cin >> cabChoice;
        cout << "Enter the number of kilometers you have to travel: ";
        cin >> Kilometers;
        int hireCab;

        if (cabChoice == 1)
        {
            cabCost = Kilometers * 15;
            cout << "\nYour tour cost " << cabCost << " rupees for a standard cab" << endl;
            cout << "Press 1 to hire this cab or press 2 to select another cab: ";
            cin >> hireCab;
            system("CLS");

            if (hireCab == 1)
            {
                lastcabCost = cabCost;
                cout << "\nYou have successfully hired a standard cab" << endl;
                cout << "<Go to menu and take the receipt>" << endl;
            }
            else if (hireCab == 2)
            {
                cabDetail();
            }
            else
            {
                cout << "Invalid Input!! Redirecting to the previous menu. Please Wait!" << endl;
                // sleep(1100);
                system("CLS");
                cabDetail();
            }
        }
        else
        {
            cout << "Invalid Input! Redirecting to the Previous Menu. Please wait.";
            // sleep(1100);
            system("CLS");
            // menu();
        }
        cout << "\npress 1 to redirect main menu:";
        cin >> hireCab;
        system("CLS");
        if (hireCab == 1)
        {
            // menu()
        }
        else
        {
            // menu()
        }
    }
};
float Cabs::lastcabCost;

class Booking
{
public:
    int choiceHotel;
    int packChoice;
    float hotelCost;
    void hotel()
    {
        string hotelNo[] = {
            "taj", "Avendra", "Chanakya", "Marriot"};
        for (int i = 0; i < 4; i++)
        {
            cout << (i + 1) << ".Hotel" << hotelNo[i] << endl;
        }
        cout << "\nCurrently we collaborated with above hotels!" << endl;
        cout << "press any key to back or\nEnter number of the hotel you want to book:";
        cin >> choiceHotel;
        system("CLS");
        if (choiceHotel == 1)
        {
            cout << "---------WELCOME TO HOTEL TAJ---------\n"
                 << endl;
            cout << "The garden,food and beverages.Enjoy all you can drink,Stay Cool and get chilled in the summer sun." << endl;
            cout << "package offered by taj:\n"
                 << endl;
            cout << "1. Standard Pack" << endl;
            cout << "/tAll basic facilities you need just for:Rs.5000.00" << endl;
            cout << "2. Premium pack" << endl;
            cout << "\tEnjoy premium: Rs.10000.00" << endl;
            cout << "3.Luxury pack" << endl;
            cout << "\tLive a Luxury at taj: Rs.15000.00"
                 << endl;
            cout << "\nPress another key to back or\nEnter package number you want to book:";
            cin >> packChoice;
            if (packChoice == 1)
            {
                hotelCost = 5000.00;
                cout << "\nYou have successfully booked Standard pack at taj" << endl;
                cout << "Goto menu and take the receipt" << endl;
            }
            else if (packChoice == 2)
            {
                hotelCost = 10000.00;
                cout << "\nYou have successfully booked premium pack at taj" << endl;
                cout << "Goto menu and take the receipt" << endl;
            }
            else if (packChoice == 3)
            {
                hotelCost = 15000.00;
                cout << "\nYou have successfully booked Luxury pack at taj" << endl;
                cout << "Goto menu and take the receipt" << endl;
            }

            else
            {
                cout << "Invalid Input! Redirecting to Previous Menu \nPlease Wait" << endl;
                // sleep(1100);
                system("CLS");
                hotel();
            }
            int gotomenu;
            cout << "\nPress 1 to redirect main menu:";
            cin >> gotomenu;
            if (gotomenu == 1)
            {
            }
            else
            {
            }
        }
        else if (choiceHotel == 2)
        {
            cout << "---------WELCOME TO HOTEL Avendra---------\n"
                 << endl;
            cout << "The garden,food and beverages.Enjoy all you can drink,Stay Cool and get chilled in the summer sun." << endl;
            cout << "package offered by Avendra:\n"
                 << endl;
            cout << "1. Standard Pack" << endl;
            cout << "/tAll basic facilities you need just for:Rs.5000.00" << endl;
            cout << "2. Premium pack" << endl;
            cout << "\tEnjoy premium: Rs.90000.00" << endl;
            cout << "3.Luxury pack" << endl;
            cout << "\tLive a Luxury at taj: Rs.12000.00"
                 << endl;
            cout << "\nPress another key to back or\nEnter package number you want to book:";
            cin >> packChoice;
            if (packChoice == 1)
            {
                hotelCost = 5000.00;
                cout << "\nYou have successfully booked Standard pack at Avendra" << endl;
                cout << "Goto menu and take the receipt" << endl;
            }
            else if (packChoice == 2)
            {
                hotelCost = 10000.00;
                cout << "\nYou have successfully booked premium pack at Avendra" << endl;
                cout << "Goto menu and take the receipt" << endl;
            }
            else if (packChoice == 3)
            {
                hotelCost = 15000.00;
                cout << "\nYou have successfully booked Luxury pack at Avendra" << endl;
                cout << "Goto menu and take the receipt" << endl;
            }

            else
            {
                cout << "Invalid Input! Redirecting to Previous Menu \nPlease Wait" << endl;
                // sleep(1100);
                system("CLS");
                hotel();
            }
            int gotomenu;
            cout << "\nPress 1 to redirect main menu:";
            cin >> gotomenu;
            if (gotomenu == 1)
            {
            }
            else
            {
            }
        }
        else if (choiceHotel == 3)
        {
            cout << "---------WELCOME TO HOTEL CHANAKYA---------\n"
                 << endl;
            cout << "The garden,food and beverages.Enjoy all you can drink,Stay Cool and get chilled in the summer sun." << endl;
            cout << "package offered by Chanakya:\n"
                 << endl;
            cout << "1. Standard Pack" << endl;
            cout << "/tAll basic facilities you need just for:Rs.5000.00" << endl;
            cout << "2. Premium pack" << endl;
            cout << "\tEnjoy premium: Rs.90000.00" << endl;
            cout << "3.Luxury pack" << endl;
            cout << "\tLive a Luxury at taj: Rs.12000.00"
                 << endl;
            cout << "\nPress another key to back or\nEnter package number you want to book:";
            cin >> packChoice;
            if (packChoice == 1)
            {
                hotelCost = 5000.00;
                cout << "\nYou have successfully booked Standard pack at Chanakya" << endl;
                cout << "Goto menu and take the receipt" << endl;
            }
            else if (packChoice == 2)
            {
                hotelCost = 10000.00;
                cout << "\nYou have successfully booked premium pack at Chanakya" << endl;
                cout << "Goto menu and take the receipt" << endl;
            }
            else if (packChoice == 3)
            {
                hotelCost = 15000.00;
                cout << "\nYou have successfully booked Luxury pack at Chanakya" << endl;
                cout << "Goto menu and take the receipt" << endl;
            }

            else
            {
                cout << "Invalid Input! Redirecting to Previous Menu \nPlease Wait" << endl;
                // sleep(1100);
                system("CLS");
                hotel();
            }
            int gotomenu;
            cout << "\nPress 1 to redirect main menu:";
            cin >> gotomenu;
            if (gotomenu == 1)
            {
                menu();
            }
            else
            {
                menu();
            }
        }
    }
};
// float Booking::hotelCost;

class Chargers : public Booking, Cabs, Customers
{
public:
    void printBill()
    {
        ofstream outf("receipt.txt");
        {
            outf << "--------Habibi Travel Agency--------" << endl;
            outf << "--------Receipt--------" << endl;
            outf << "---------------------" << endl;
            outf << "Customer ID:" << Customers::CustID << endl
                 << endl;
            outf << "Description\t\t Total" << endl;
            outf << "HotelCost:\t\t" << fixed << setprecision(2) << Booking::hotelCost << endl;
            outf << "Travel (cab) cost:\t" << fixed << setprecision(2) << Cabs::lastcabCost << endl;
            outf << "---------------------" << endl;
            outf << "TotalCharge:\t\t" << fixed << setprecision(2) << Booking::hotelCost + Cabs::lastcabCost << endl;
            outf << "---------------------" << endl;
            outf << "---------- Thank-You ----------" << endl;
        }
        outf.close();
    }
    void showBill()
    {
        ifstream inf("receipt.txt");
        {
            if (!inf)
            {
                cout << "File Opening error !" << endl;
            }
            while (!inf.eof())
            {
                inf.getline(all, 999);
                cout << all << endl;
            }
        }
        inf.close();
    }
};

void menu()
{
    int mainChoice;
    int inChoice;
    int gotoMenu;

    cout << "\t\t       *Habibi Travels   *\n"
         << endl;
    cout << "------------------Main Menu------------------" << endl;
    cout << "\t________________________________________|" << endl;
    cout << "\t|\t\t\t\t\t\t\t\t" << endl;
    cout << "\t|\tCustomer Management -> 1\t|" << endl;
    cout << "\t|\tCabs Management -> 2\t        |" << endl;
    cout << "\t|\tBooking Management -> 3\t        |" << endl;
    cout << "\t|\tCharges & Bill -> 4\t        |" << endl;
    cout << "\t|\tExit -> 5\t                      |" << endl;
    cout << "\t|______________________________________|" << endl;
    cout << "\nEnter Your Choice: ";
    cin >> mainChoice;
    system("CLS");
    Customers a2;
    Cabs a3;
    Booking a4;
    Chargers a5;
    if (mainChoice == 1)
    {
        cout << "----Customers----\n" << endl;
        cout << "1. Enter New Customer" << endl;
        cout << "2. See old customer" << endl;
        cout << "\nEnter Your choice: ";
        cin >> inChoice;
        system("CLS");
        if (inChoice == 1)
        {
            a2.getDetail();
        }
        else if (inChoice == 2)
        {
            a2.showDetails();
        }
        else
        {
            cout << "Invaid Input Redirecting to previous Menu \nPlease Wait!" << endl;
            // sleep(1100);
            system("CLS");
            menu();
        }
        cout << "\nPress 1 to Redirect main menu";
        cin >> gotoMenu;
        system("CLS");
        if (gotoMenu == 1)
        {
            menu();
        }
        else
        {
            menu();
        }
    }
    else if (mainChoice == 2)
    {
        a3.cabDetail();
    }
    else if (mainChoice == 3)
    {
        cout << "--> Book a Luxury Hotel using the system" << endl;
        a4.hotel();
    }
    else if (mainChoice == 4)
    {
        cout << "-->Get your Receipt<--" << endl;
        a5.printBill();
        cout << "Your receipt is already printed you can get it from file path" << endl;
        cout << "to display the your receipt in the screen ,Enter 1: or Enter another key to back main menu:";
        cin >> gotoMenu;
        if (gotoMenu == 1)
        {
            system("CLS");
            a5.showBill();
            cout << "\npress 1 to redirect main menu:";
            cin >> gotoMenu;
            system("CLS");
            if (gotoMenu == 1)
            {
                menu();
            }
            else
            {
                menu();
            }
        }
        else
        {
            system("CLS");
            menu();
        }
    }
    else if (mainChoice == 5)
    {
        cout << "--GOOD-BYE--" << endl;
        // sleep(999);
        system("CLS");
        menu();
    }
    else
    {
        cout << "Invalid Input! Redirecting to Previous Menu \nPlease Wait!" << endl;
        system("CLS");
        menu();
    }
}
int main()
{

    ManageMenu startObj;

    return 0;
}
