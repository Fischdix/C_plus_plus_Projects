//Inventory Organizer
//Written by Jack Fischer
//CSC1060 - Summer 2023
//The purpose of this program will be to keep track of a pantry's inventory
//This will be done by keeping a stored file of current inventory, and expected inventory
//This program should have prompts to restock/remove items 
///
//Future implementations:
//Create recipe book that takes current inventory into account and can spit out recipes with sufficient ingredients on hand
//Actually finish the goal and add File I/O

#include <iostream>
using namespace std;

int main()
{
    //Initialize variables
    int restocking, removed; 

    //Prompt user to input if they are restocking items
    cout << "Restocking?   (1 for yes / 0 for no): "; 
    cin >> restocking;

    //if restocking equals true, prompt user to input what items are being restocked
    if (restocking == 1) 
    {
	int amount;
	string item;
        cout << "Which item are you restocking?: ";
        cin >> item;

        //Prompt user to input how many of those items are being restocked
        cout << "How many items of " << item << " are you restocking?: ";
        cin >> amount;

        //output items and quantity that were just restocked
        cout << "You have just restocked the pantry with " << amount << " item(s) of " << item << endl;
    }

    //if user does not want to restock, then:
    else 
    {
	int amount;
	string item;

        //Prompt user to input if they are removing items
        cout << "Removing items?   (1 for yes / 0 for no): ";
        cin >> removed;

        //if removed equals true, prompt user to input which items were removed
        if (removed == 1) 
        {   
            cout << "What item(s) are you removing?: ";
            cin >> item;
            
            //Prompt user to input how many of those items were removed
            cout << "How many items of " << item << " are you removing?: ";
            cin >> amount;
            
            //output items and quantity that were just removed from pantry
            cout << "You have just removed " << amount << " item(s) of " << item << " from the pantry.\n";
        }

        //FINAL ELSE statement
        else 
        {
            cout << "You have chosen to not restock or remove anything from the pantry at this time\n";
        }  
    }

    return 0;
}