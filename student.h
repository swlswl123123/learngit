#include<string>
#include<iostream>
using namespace std;
class student
{
private:
    int id;
    string name;
    int grade;
public:
    student(){};
    void info_update(int id, int grade, string name);
    void info_show();
};


