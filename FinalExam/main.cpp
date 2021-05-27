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
int sumOfRange(const int startVal, const int endVal);
int productOfRange(const int startVal, const int endVal);
bool isPositive(const double value);
/**
 * The driver of the cpp. presents the menu to the user and executes the requests
 * @return returns 0.
 */
int main()
{
    int choice;
    double value;
    
    do
    {
        cout << "\n1) Sum of range";
        cout << "\n2) Product of range";
        cout << "\n3) Is positive";
        cout << "\n4)Exit";
        cout << "\nEnter choice: ";
        cin >> choice;
        
        switch(choice)
        {
            case 1:
                break;
            
            case 2:
                break;
        
            case 3:
                cout << "\nEnter value to check if positive: ";
                cin >> value;
                cout << "\nThe sign of the value is: ";
                if(isPositive(value) == 1)
                {
                    cout << "positive";
                }
                else
                {
                    cout << "negative";
                }
                break;
                
            case 4:
                //no code needed for exit
                break;
        }
        
    }while(choice != 4);
    
    cout << "\nHave a nice day!! :)";
    return 0;
}

/**
 * The <code>sumOfRange</code> function finds the sum
 * @param startVal The starting value.
 * @param endVal The ending value.
 * @return returns the sum of the range.
 */
int sumOfRange(const int startVal, const int endVal)
{
    return 0;
}

/**
 * The <code>productOfRange</code> function finds the product of
 * @param startVal The starting value.
 * @param endVal The ending value.
 * @return returns the product of the range.
 */
int productOfRange(const int startVal, const int endVal)
{
    return 0;
}
/**
 * The <code>isPositive</code> function checks if given number is positive.
 * @param value The value that will be checked if positive or not.
 * @return returns true if the value is positive and false if it is negative.
 */
bool isPositive(const double value)
{
    bool ret = true;
    
    if(value < 0)
    {
        ret = false;
    }
    
    return ret;
}
