#include <iostream>
#include <cstdlib>
#include <fstream>
#include "person.h"
using namespace std;

//declaring funcs
void readData(Person employees[], int &size);
void writeData(Person employees[], int size);

int main()
    {
        Person employees[20];       // person class array
        int size = 0;
                                    //calls
        readData(employees,size);
        writeData(employees,size);

        return 0;
    }



void readData(Person employees[], int &size)
{
    string fname, lname;
    double workedHours, payRate;
    ifstream myFile;
    myFile.open("/Users/jordanwermuth/CLionProjects/301assignment2/input.txt");

    if(myFile.fail())
    {
        cout<<"We could not find a file";
    }
    else
    {
        while(myFile>>fname>>lname>>workedHours>>payRate) //takes in all data
        {
            Person p;
            p.setFirstName(fname);
            p.setLastName(lname);
            p.setHoursWorked(workedHours);
            p.setPayRate(payRate);
            employees[size]=p;
            size++;
        }
        myFile.close();
    }

}

//writing to a new .txt file
void writeData(Person employees[],int size) {

    ofstream fileOut;
    fileOut.open("output.txt");

    for (int i = 0; i < size; i++)
        {
            fileOut << employees[i].fullName() << " " << employees[i].totalPay() << endl;
        }

    fileOut.close();

}