#include <iostream>
#include "include/list.h"
#include "include/database.h"

using std::cout;
using std::cin;
using std::endl;
using std::string;

void List::print_menu()
{
    int choice;
    cout << "\n";
    cout << "****************\n";
    cout << " 1 . Print list\n";
    cout << " 2 . Add to list\n";
    cout << " 3 . Delete from list\n";
    cout << " 4 . Quit\n";
    cout << " Enter your choice and press return: ";

    cin >> choice;

    switch (choice)
    {
        case 1:
            print_list();
            break;
        case 2:
            add_item();
            break;
        case 3:
            delete_item();
            break;
        case 4:
            return;
            break;
        default:
            cout << "Sorry choice not implemented yet. Try another choice.\n";
            print_menu();
    }
    
}

void List::item_list()
{
    if(list.size())
    {
        for( int i=0; i < (int)list.size(); i++)
        {
            cout << i << " . " << list[i] << "\n";
        }
    }
}

void List::add_item()
{
    cout << "\n\n\n";
    cout << "*** Add Item ***\n";
    cout << "Type in an item and press enter: ";

    string item;
    cin >> item;

    list.push_back(item);
    

    cout << "Successfully added an item to the list\n";
    cin.clear();
    item_list();

    print_menu();
}

void List::delete_item()
{
    cout << "\n\n\n";
    cout << "***Delete item***\n";
    cout << "Items in List:\n";
    if(list.size())
    {
        item_list();
        cout << "\nSelect an item index number to delete: ";
        int index_number;
        cin >> index_number;

        if (index_number >= 0)
        {
            list.erase(list.begin()+index_number);
            item_list();
            print_menu();
        }
        
    }
    else
    {
        cout << "No items to delete" << endl;
        print_menu();
    }
}

void List::print_list() 
{
    cout << "\n\n\n";
    cout << "*** Printing List ***\n";

    for( int list_index = 0; list_index < (int)list.size(); list_index++)
    {   
        cout << "* " << list[list_index] << "\n";
    }
    menu_choose();
}

void List::menu_choose()
{
    cout << "\nM - Menu\n";
    cout << "Type M or m to get back to menu: ";
    char choice;
    cin >> choice;

    if( choice == 'M' || choice == 'm' )
    {
        print_menu();
    }
    else
    {
        cout << "Invalid Choice...Type M or m to get back to menu\n";
        menu_choose();
    }
}

void List::find_userList() 
{
    bool userFound = false;
    cout << "\n\n\n";
    cout << "*** Welcome " << name << " ***\n";

    for (int user_index = 0; user_index < (int)mainList.size(); user_index++)
    {
        //cout << mainList[user_index][0] << "\n";
        if (mainList[user_index][0] == name)    
        {
            cout << "User has been found: " << mainList [user_index][0] << "\n";
            list = mainList[user_index];
            userFound = true;
            break;
        }
            
    }
    
}