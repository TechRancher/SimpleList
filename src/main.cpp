#include <iostream>
#include "include/list.h"
#include "include/database.h"

using std::cout;
using std::cin;
using std::endl;
using std::string;

int main(int arg_count, char *args[])
{
    List simpleList;
    Database data;

    if(arg_count > 1)
    {
        simpleList.name = string(args[1]);
        simpleList.mainList = data.read();
        simpleList.find_userList();
        simpleList.print_menu();
        //data.write(simpleList.mainList);
    }
    else
    {
        cout << "Username not supplied. One must be added when starting program.. exiting the program" << endl;
    }
    
    return 0;
}
