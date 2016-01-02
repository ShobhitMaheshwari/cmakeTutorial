#include<iostream>
#include"Student.h"

int main(int argc, char *argv[]){
    Student student(4);
    std::cout << student.getAge() << "\n";
    return 0;
}
