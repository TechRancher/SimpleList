#include <iostream>
#include <vector>
#include <fstream>

using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::vector;

class Database {
    private:
    protected:
    public:
    Database(){
        //constructor
    }
    ~Database(){
        //destructor
    }
    vector<vector<string>> mainList;
    string name;

    void write(vector<vector<string>> mainList);
    vector<vector<string>> read();
};