#include"student.h"
int main()
{
    student s;
    int id,grade;
    string name;
    cin>>id>>grade>>name;
    s.info_update(id,grade,name);
    s.info_show();
    return 0;
}