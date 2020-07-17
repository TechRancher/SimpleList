#include <iostream>
#include "include/database.h"
#include "include/list.h"

using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::ofstream;
using std::ifstream;


void Database::write(std::vector<string> list)
{
    ofstream db;
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
        cout << "Cannot open file for writting.\n";
    }
    
    db.close();
}

void Database::read()
{
    string line;
    ifstream db;
    db.open("db/list.sl");

    if(db.is_open())
    {
        while (getline(db, line, '\n'))
        {
            cout << line << "\n";
        }
        
    }
    else
    {
        cout << "Cannot open file for reading\n";
    }
    db.close();
}