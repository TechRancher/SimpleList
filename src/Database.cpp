#include <iostream>
#include "include/database.h"
#include "include/list.h"

using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::vector;
using std::ofstream;
using std::ifstream;


void Database::write(vector<vector<string>> mainList)
{
    ofstream db;
    db.open("db/list.sl");

    if(db.is_open())
    {
        for( int user_index = 0; user_index < (int)mainList[user_index].size(); user_index++ )
        {
            for (int list_index = 0; list_index < (int)mainList[user_index][list_index].size(); list_index++)
            {
                db << mainList[user_index][list_index] << "\n";
            }
            
            
            
        }
    }
    else
    {
        cout << "Cannot open file for writting.\n";
    }
    
    db.close();
}

vector<vector<string>> Database::read()
{
    string line;
    ifstream db;

    vector<string> userList;

    db.open("db/list.sl");

    if(db.is_open())
    {
        while (getline(db, line, '\n'))
        {
            if(line.front() == '#')
            {
                cout << "Found a hashtag: " << line << "\n";
                line.erase(line.begin());
                userList.push_back(line);
            }
            else if(line.front() == '%')
            {
                cout << "Found a Percentage: " << line << "\n";
                mainList.push_back(userList);
                userList.clear();
            }
            else
            {
                cout << "Found a item: " << line << "\n";
                userList.push_back(line);
            }
            
        }
        
    }
    else
    {
        cout << "Cannot open file for reading\n";
    }
    db.close();

    return mainList;
}