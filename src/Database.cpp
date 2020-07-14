#include "include/database.h"
#include "include/list.h"

void Database::write(std::vector<std::string> list)
{
    std::ofstream db;
    db.open("db/list.sl");

    if(db.is_open())
    {
        for( int list_index = 0; list_index < (int)list.size(); list_index++)
        {
            db << "* " << list[list_index] << "\n";
        }
    }
    else
    {
        std::cout << "Cannot open file for writting.\n";
    }
    
    db.close();
}

void Database::read()
{
    std::string line;
    std::ifstream db;
    db.open("db/list.sl");

    if(db.is_open())
    {
        while (getline(db, line, '\n'))
        {
            std::cout << line << "\n";
        }
        
    }
    else
    {
        std::cout << "Cannot open file for reading\n";
    }
    db.close();
}