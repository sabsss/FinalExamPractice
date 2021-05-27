/** \file FinalExam.cpp
 *  \brief small math program
 *  \author Siba Omar Almohamed
 *  \version 0.1
 *  \date 27/5/2021
 *  \copyright UNIC
*/
#include <iostream>
#include <cassert>
using namespace std;

//Function Prototypes
int sumOfRange(int startVal, int endVal);
int productOfRange(int startVal, int endVal);
bool isPositive(double value);
/**
 * The driver of the cpp. presents the menu to the user and executes the requests
 * @return returns 0.
 */
int main()
{
    int choice;
    
    do
    {
            cout << "\n1) Sum of range";
            cout << "\n2) Product of range";
            cout << "\n3)Exit";
        
        switch(choice)
        {
            case 1:
                break;
            
            case 2:
                break;
            
            case 3:
                break;
        }
        
    }while(choice != 3);
    
    cout << "\nHave a nice day!! :)";
    return 0;
}

/**
 * The <code>sumOfRange</code> function finds the sum
 * @param startVal The starting value.
 * @param endVal The ending value.
 * @return returns the sum of the range.
 */
int sumOfRange(int startVal, int endVal)
{
    return 0;
}

/**
 * The <code>productOfRange</code> function finds the product of
 * @param startVal The starting value.
 * @param endVal The ending value.
 * @return returns the product of the range.
 */
int productOfRange(int startVal, int endVal)
{
    return 0;
}
/**
 * The <code>isPositive</code> function checks if given number is positive.
 * @param value The value that will be checked if positive or not.
 * @return returns true if the value is positive and false if it is negative.
 */
bool isPositive(double value)
{
    return true;
}
