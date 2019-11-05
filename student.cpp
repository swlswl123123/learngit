#include "student.h"
void student::info_update(int a, int b, string c){
    id = a;
    grade = b;
    name = c;
}

void student::info_show(){
    cout<<"id:"<<id<<" grade:"<<grade<<" name:"<<name<<endl;
}