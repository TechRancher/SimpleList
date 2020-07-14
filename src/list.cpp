#include "include/list.h"

void List::print_menu()
{
    int choice;
    std::cout << "\n";
    std::cout << "****************\n";
    std::cout << " 1 . Print list\n";
    std::cout << " 2 . Add to list\n";
    std::cout << " 3 . Delete from list\n";
    std::cout << " 4 . Quit\n";
    std::cout << " Enter your choice and press return: ";

    std::cin >> choice;

    switch (choice)
    {
        case 4:
            exit(0);
            break;
        case 1:
            print_list();
            break;
        case 2:
            add_item();
            break;
        case 3:
            delete_item();
            break;
        default:
            std::cout << "Sorry choice not implemented yet. Try another choice.\n";
            print_menu();
    }
    // if( choice == 4 )
    // {
    //     exit(0);
    // }
    // else if(choice == 1)
    // {
    //     print_list();
    // }
    // else if(choice == 2)
    // {
    //     add_item();
    // }
    // else if(choice == 3)
    // {
    //     delete_item();
    // }
    
    // else
    // {
    //     std::cout << "Sorry choice not implemented yet. Try another choice\n";
    // }
    
}

void List::item_list()
{
    if(list.size())
    {
        for( int i=0; i < (int)list.size(); i++)
        {
            std::cout << i << " . " << list[i] << "\n";
        }
    }
}

void List::add_item()
{
    std::cout << "\n\n\n";
    std::cout << "*** Add Item ***\n";
    std::cout << "Type in an item and press enter: ";

    std::string item;
    std::cin >> item;

    list.push_back(item);

    std::cout << "Successfully added an item to the list\n";
    std::cin.clear();
    item_list();

    print_menu();
}

void List::delete_item()
{
    std::cout << "\n\n\n";
    std::cout << "***Delete item***\n";
    std::cout << "Items in List:\n";
    if(list.size())
    {
        item_list();
        std::cout << "\nSelect an item index number to delete: ";
        int index_number;
        std::cin >> index_number;

        if (index_number >= 0)
        {
            list.erase(list.begin()+index_number);
            item_list();
            print_menu();
        }
        
    }
    else
    {
        std::cout << "No items to delete" << std::endl;
        print_menu();
    }
}

void List::print_list() 
{
    std::cout << "\n\n\n";
    std::cout << "*** Printing List ***\n";

    for( int list_index = 0; list_index < (int)list.size(); list_index++)
    {
        std::cout << "* " << list[list_index] << "\n";
    }

    std::cout << "M - Menu\n";
    std::cout << "Type M or m to get back to menu: ";
    char choice;
    std::cin >> choice;

    if( choice == 'M' || choice == 'm' )
    {
        print_menu();
    }
    else
    {
        std::cout << "Invalid Choice...Quiting\n";
    }
    
}