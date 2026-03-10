#include<iostream>
using namespace std;
int main(){
    int emp , salary , bonus , netsalary , result;
    cout<<"enter the number of employee : ";
    cin>>emp;
    cout<<"enter the basic salary of the employees : ";
    cin>>salary;
    bonus = 0.12 *salary;
    netsalary= salary + bonus;
    cout<<"the salaries of employees, including a fixed 12% bonus for each employee : "<<netsalary;
    return 0;
}