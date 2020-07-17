#include <iostream>
#include <vector>

using std::string;
using std::vector;

class List 
{
    private:
    protected:
    public:
    List()
    {
        //constructor
    }
    ~List()
    {
        //destructor
    }
    vector<string> list;
    string name;

    void print_menu();
    void print_list();
    void add_item();
    void delete_item();
    void item_list();

};