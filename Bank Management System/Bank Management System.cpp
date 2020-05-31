// 5/20/2020 Bank Management System.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Customer.h"
#include <vector>
#include <string>
using namespace std;


vector<Customer> customerList;

void displayMainMenu()
{
    cout << "    BANK MANAGEMENT SYSTEM" << endl
        << "---------------------------------" << endl
        << "00: Exit" << endl
        << "01: Register New Customer" << endl
        << "02: View Customer List" << endl
        << "03: View CUstomer Account" << endl
        << "---------------------------------" << endl << endl ;
        
}

void registerNewCustomer()
{
    cout << "Enter Customer's Full Name: ";

    string name;
    cin >> name;

    Customer c(name);
    cout << "Adding customer to the system..." << endl;
    customerList.push_back(c);
}

int main()
{
    displayMainMenu();
    
    while (true)
    {
        cout << "Choose an action: ";
        int choice;
        cin >> choice;

        cout << "You chose: " << choice << endl;

        if (choice == 0)
        {
            cout << "Exiting Bank Management System..." << endl;
            return 0;
        }
        else
        {
            switch (choice)
            {
                case 1:
                    registerNewCustomer();
                    break;
                default:
                    cout << "Invalid Input." << endl;
                    break;
            }
        }
    }
    
    return 0;
}
