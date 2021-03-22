#include <iostream>
using namespace std;

class Programmer
{
  private:
    int age;
  public:

    Programmer()
    {
      age = 0;
    }

    Programmer(int age_value)
    {
        age = age_value;
    } 

    void set_age_Programmer(int age_value)
    {
      age = age_value;
    }

    int get_age_Programmer()
    {
        return age;
    }

    void show_programmer()
    {
        cout << "*class Programmer*\nage: " << age << endl;
    }

    void do_programming()
    {
      cout << "Du, du. I`m programming..." << endl;
    }
};

class Taxi_driver
{
  private:
    string color_of_car;
  public:

    Taxi_driver()
    {
      color_of_car = "none";
    }

    Taxi_driver(string color_value)
    {
        color_of_car = color_value;
    } 
    
    void set_color_Taxi(string color_value)
    {
      color_of_car = color_value;
    }

    string get_color_Taxi()
    {
      return color_of_car;
    }

    void show_taxi_driver()
    {
        cout << "*class Taxi_driver*\ncolor_of car: " << color_of_car << endl;
    }

    void driving_taxi()
    {
      cout << "Honk, taxi is driving!";
    }

};

class Biseness_analyzer : protected Programmer
{
  private:
    int worker_id;
  public:

    Biseness_analyzer(int id_value)
    {
      worker_id = id_value;
    }

    Biseness_analyzer()
    {
      worker_id = 0;
    }

    void set_id_Biseness(int id_value)
    {
      worker_id = id_value;
    }

    void show_Biseness_analyzer()
    {
      cout << "*class Biseness_analyzer*\nworker_id: " << worker_id << endl;
    }

    void analyzing_smth()
    {
      cout << "Analyzing..." << endl;
    }

};

class Teamlead : public Programmer
{
  private:
    int years_working;
  public:

    Teamlead()
    {
      years_working = 0;
    }

    Teamlead(int years_value)
    {
      years_working = years_value;
    }

    void set_years_Teamlead(int years_value)
    {
      years_working = years_value;
    }

    int get_years_Teamlid()
    {
      return years_working;
    }

    void show_years_Teamlead()
    {
      cout << "*class Teamlead\nyears_working: *" << years_working << endl;
    }

    void leader_doing()
    {
      cout << "Teamleader is here.";
    }

};

class Delivery_manager : protected Teamlead, protected Taxi_driver
{
  private:
    string name;
  public:

    Delivery_manager()
    {
      name = "none";
    }

    Delivery_manager(string name_value)
    {
      name = name_value;
    }

    void set_name_Delivery(string Delivery_name)
    {
      name = Delivery_name;
    }

    string get_delivery_name()
    {
      return name;
    }

    void show_delivery_manager()
    {
      cout << "*Delivery_manager*\nname: " << name << endl;
    }

    void delivery_do_smth()
    {
      cout << "Delivery is here.";
    }
};

class Superman : public Biseness_analyzer, public Delivery_manager
{
  private:
    int productivity;
  public:

    Superman()
    {
      productivity = 0;
    }

    Superman(int productivity_value)
    {
      productivity = productivity_value;
    }

    void set_productivity_Superman(int productivity_value)
    {
        productivity = productivity_value;
    }

    int get_productivity_superman()
    {
      return productivity;
    }

    void show_superman()
    {
      cout << "*class Superman\nproductivity: *" << productivity << endl;
    }
};

int main()
{
    Delivery_manager manager("Dan");
    Programmer programmer(34);
    Taxi_driver driver("red");
    Superman sup_man(345);
    Biseness_analyzer analyzer(123);
    Teamlead leader(5);

    programmer.do_programming();
    programmer.show_programmer();
    manager.show_delivery_manager();
    sup_man.analyzing_smth();
    sup_man.show_delivery_manager();

    return 0;
}
