#include <iostream>
using namespace std;

class Files_list
{
  private:
    string file_name;
    string file_type;
    float file_size;
    string file_date_created;
    string file_attribute;
  public:
    
    void add_element()
    {
        cout << "*Adding element*\nEnter file name:\nFile type:\nFile size:\nDate created:\nFile attributes: \n";
        cin >> file_name >> file_type >> file_size >> file_date_created >> file_attribute;
    }

    void show_file()
    {
        cout << "*Element\n*";
        cout << file_name << endl << file_type << endl << file_size << endl << 
        file_date_created << endl << file_attribute << endl;
    }

};

class File_game
{
  private:
    string game_name;
    int game_version;
  public:
    
};

int main()
{
    Files_list file_one;

    file_one.add_element();
    file_one.show_file();

    return 0;
}