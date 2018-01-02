#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <string>


class Employee
{
public:
    Employee(std::string, std::string, int);
    Employee();
//private:
    std::string Name;
    std::string Position;
    int Age;
};

#endif // EMPLOYEE_H
