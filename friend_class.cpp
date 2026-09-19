/* Create an Employee class with private members employeeID, basicSalary, and bonus. Declare a Payroll class as a
 friend class. The Payroll class should access the private members and calculate the employee's gross salary.
  (Gross Salary = basicSalary + bonus)*/
#include <bits/stdc++.h>
using namespace std;
class Payroll;
class Employee
{
private:
    int EmpID;
    int bsalary;
    int bonus;

public:
    Employee(int a, int b, int c)
    {
        EmpID = a;
        bsalary = b;
        bonus = c;
    }

    friend class Payroll;
};
class Payroll
{
public:
    void grossSalary(Employee a)
    {

        int gsalary;
        gsalary = a.bsalary + a.bonus;

        cout << a.bonus << endl
             << a.bsalary << endl
             << a.EmpID << endl
             << gsalary;
    }
};

int main()
{
    Payroll a;
    Employee b(25, 20000, 500);
    a.grossSalary(b);
}