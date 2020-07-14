#include "include/list.h"
#include "include/database.h"

int main(int arg_count, char *args[])
{
    List simpleList;
    Database data;

    if(arg_count > 1)
    {
        simpleList.name = std::string(args[1]);
        simpleList.print_menu();
        data.write(simpleList.list);
        data.read();
    }
    else
    {
        std::cout << "Username not supplied. One must be added when starting program.. exiting the program" << std::endl;
    }
    
    return 0;
}
