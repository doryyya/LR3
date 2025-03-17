#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Building
{
    string name;
    int height, square;
    list<int> dates;
public:

    void set_name(const string &name){this->name = name}
    void set_height(const int &height){this->height = height}
    void set_square(const int &square){this->square = square}
    void set_dates(const list &dates){this->dates = dates}

    string get_name() const{return this->name}
    string get_height() const{return this->height}
    string get_square() const{return this->square}
    string get_dates() const{return this->dates}

    Building();
    Building(const string &name):name(name){
        height = rand() % 100 + 1;
        square = rand() % 1000 + 1;
        generate(dates.begin() , dates.end(), [](){return rand() % 2025 + 1;});
    } 
    Building(const string& n, const int h, const int s, const list& d) : Building(name), height(h), square(s), dates(d)
    Building(const Building& other) : Building(other.name, other.height, other.square, other.dates)
    ~Building();

    Square_calculation();

    bool Building::operator>(const Building& other) const{ //(реалиизация) - должна быть не тут
        return height > other.height;
    }

    bool operator<(const Building& other) const; 
    {
        return height < other.height; // реализация не тут
    }

    string operator+(const Building& other) const{
        string st1 = "Name: " + this -> name + ", Height: " to_string(this -> height) + ", Square: " + to_string(this -> square) + ", Dates: " + to_list(this -> dates) + "\n";
        string st2 = "Name: " + other.name + ", Height: " to_string(other.height) + ", Square: " + to_string(other.square) + ", Dates: " + to_list(other.dates) + "\n";
        return st1 + st2;
    }

    int operator++() const{
        return ++height;
    }

    int operator++(int) const{
        return height++;
    }

    int operator--(const Building& other) const{
        return height--;
    }

    string operator=(const Building& other) const{

    }

}