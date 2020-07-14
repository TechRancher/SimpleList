#include "include/list.h"

int main(int arg_count, char *args[]){
    if(arg_count > 1)
    {
        List simpleList;
        simpleList.name = std::string(args[1]);
        simpleList.print_menu();
    }
    else
    {
        std::cout << "Username not supplied. One must be added when starting program.. exiting the program" << std::endl;
    }
    
    return 0;
}
