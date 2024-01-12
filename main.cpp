// Write a C++ program to create a simple calculator application.

#include <iostream>
using namespace std;

int main()
{
    start:
    char value,again;
    cout << "----------Welcome to the Calculator----------\n";
    cout << "----------Please follow the instructions----------\n" << endl;
    cout << "(1) preass 'a' for addition\n";
    cout << "(2) preass 's' for subtraction\n";
    cout << "(3) preass 'm' for multiplication\n";
    cout << "(4) preass 'd' for division\n";
    cout << "(5) preass 'o' for modulus\n";
    
    int addition(void);
    int multiplication(void);
    int substraction(void);
    int division(void);
    int modulus(void);
    
    cout << "\nPlease enter your choice: ";
    cin >> value;
    
    if (value == 'a' || value == 'A')
    {
        int add_value = addition() ;
        cout << "\nThe addition of the numbers is: " << add_value << endl;
        selectaddAgain:
        cout << "\nDo you wish to use our applicatino again (y/n)? ";
        cin >> again;
        if (again == 'y' || again == 'Y')
        {
            goto start;
        }
        else if (again == 'n' || again == 'N')
        {
            cout << "\nThank you for using our application\n" << endl;
        }
        else
        {
            cout << "\nInvalid input please try again\n" << endl;
            goto selectaddAgain;
        }
    }
    else if (value == 's' || value == 'S')
    {
        int sub_value = substraction();
        cout << "\nThe substraction of the numbers is: " << sub_value << endl;
        selectsubAgain:
        cout << "\nDo you wish to use our applicatino again (y/n)? ";
        cin >> again;
        if (again == 'y' || again == 'Y')
        {
            goto start;
        }
        else if (again == 'n' || again == 'N')
        {
            cout << "\nThank you for using our application\n" << endl;
        }
        else
        {
            cout << "\nInvalid input please try again\n" << endl;
            goto selectsubAgain;
        }
    }
    else if (value == 'm' || value == 'M')
    {
        int mul_value = multiplication();
        cout << "\nThe multiplication of the numbers is: " << mul_value << endl;
        selectmulAgain:
        cout << "\nDo you wish to use our applicatino again (y/n)? ";
        cin >> again;
        if (again == 'y' || again == 'Y')
        {
            goto start;
        }
        else if (again == 'n' || again == 'N')
        {
            cout << "\nThank you for using our application\n" << endl;
        }
        else
        {
            cout << "\nInvalid input please try again\n" << endl;
            goto selectmulAgain;
        }
    }
    else if (value == 'd' || value == 'D')
    {
        int div_value = division();
        cout << "\nThe division of the numbers is: " << div_value << endl;
        selectdivAgain:
        cout << "\nDo you wish to use our applicatino again (y/n)? ";
        cin >> again;
        if (again == 'y' || again == 'Y')
        {
            goto start;
        }
        else if (again == 'n' || again == 'N')
        {
            cout << "\nThank you for using our application\n" << endl;
        }
        else
        {
            cout << "\nInvalid input please try again\n" << endl;
            goto selectdivAgain;
        }
    }
    else if (value == 'o' || value == 'O')
    {
        int mod_value = modulus();
        cout << "\nThe modulus of the numbers is: " << mod_value << endl;
        
        selectmodAgain:
        
        cout << "\nDo you wish to use our applicatino again (y/n)? ";
        cin >> again;
        if (again == 'y' || again == 'Y')
        {
            goto start;
        }
        else if (again == 'n' || again == 'N')
        {
            cout << "\nThank you for using our application\n" << endl;
        }
        else
        {
            cout << "\nInvalid input please try again\n" << endl;
            goto selectmodAgain;
        }
    }
    else
    {
        cout << "Invalid input please try again\n" << endl;
        goto start;
    }
}

// Addition operations function
int addition()
{
    int a,total = 0;
    char choice;
    
    add:
   
    cout << "Enter the number: ";
    cin >> a;
    total += a;
    
    addagain:
    
    cout << "Do you want to add more numbers? (y/n): ";
    cin >> choice;
    
    if (choice == 'y' || choice == 'Y' )
    {
        goto add;
    }
    else if (choice == 'n' || choice == 'N' )
    {
        return total;
    }
    else
    {
        cout << "Invalid input please try again\n" << endl;
        goto addagain;
    }
    return total;
}

// Multiplication operations function
int multiplication()
{
    int a,total = 1;
    char choice;
    
    mul:
    
    cout << "Enter the number: ";
    cin >> a;
    total *= a;
    
    mulagain:
    
    cout << "Do you want to multiply more numbers? (y/n): ";
    cin >> choice;
    
    if (choice == 'y' || choice == 'Y' )
    {
        goto mul;
    }
    else if (choice == 'n' || choice == 'N' )
    {
        return total;
    }
    else
    {
        cout << "Invalid input please try again\n" << endl;
        goto mulagain;
    }
    return total;  
}

// Subtraction operations function
int substraction()
{
    int a, b, total = 0;
    char choice;
    
    cout << "Enter the first number: ";
    cin >> a;
    cout << "Enter the second number: ";
    cin >> b;

    if (a > b)
    {
        total = a-b;
    }
    else
    {
        total = b-a;
    }
    return total;
}

// Division operations function
int division()
{
    int a, b, total = 0;
    char choice;
    
    cout << "Enter the first number: ";
    cin >> a;
    cout << "Enter the second number: ";
    cin >> b;
    
    if (a > b)
    {
        total = a/b;
    }
    else
    {
        total = b/a;
    }
    return total;
}

// Modulus operations function
int modulus()
{
    int a, b, total = 0;
    char choice;
    
    cout << "Enter the first number: ";
    cin >> a;
    cout << "Enter the second number: ";
    cin >> b;
    
    if (a > b)
    {
        total = a%b;
    }
    else
    {
        total = b%a;
    }
    return total;
}