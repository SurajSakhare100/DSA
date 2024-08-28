#include <iostream>

int main()
{
    // Basic Input/Output
    // int age;
    // std::cout << "Enter your age: ";
    // std::cin >> age;
    // std::cout << "You are " << age << " years old." << std::endl;

    // // Variables and Data Types:
    // int a = 10;         // Integer
    // float b = 20.5;     // Floating point
    // char c = 'A';       // Character
    // bool isTrue = true; // Boolean

    // std::cout << "Integer: " << a << std::endl;
    // std::cout << "Float: " << b << std::endl;
    // std::cout << "Character: " << c << std::endl;
    // std::cout << "Boolean: " << isTrue << std::endl;

    // //  Control Structures (if-else, switch)

    // int number;
    // std::cout << "Enter a number: ";
    // std::cin >> number;

    // // if-else statement
    // if (number > 0)
    // {
    //     std::cout << "Positive number" << std::endl;
    // }
    // else if (number < 0)
    // {
    //     std::cout << "Negative number" << std::endl;
    // }
    // else
    // {
    //     std::cout << "Zero" << std::endl;
    // }

    // // switch statement
    // switch (number)
    // {
    // case 1:
    //     std::cout << "Number is one" << std::endl;
    //     break;
    // case 2:
    //     std::cout << "Number is two" << std::endl;
    //     break;
    // default:
    //     std::cout << "Number is neither one nor two" << std::endl;
    // }
    // // Loops (for, while, do-while)
    // // for loop
    // for (int i = 0; i < 5; i++)
    // {
    //     std::cout << "For loop iteration: " << i << std::endl;
    // }

    // // while loop
    // int j = 0;
    // while (j < 5)
    // {
    //     std::cout << "While loop iteration: " << j << std::endl;
    //     j++;
    // }

    // // do-while loop
    // int k = 0;
    // do
    // {
    //     std::cout << "Do-while loop iteration: " << k << std::endl;
    //     k++;
    // } while (k < 5);

    // int arr[5] = {1, 2, 3, 4, 5}; // Array declaration and initialization

    // for (int i = 0; i < 5; i++)
    // {
    //     std::cout << "Element at index " << i << ": " << arr[i] << std::endl;
    // }

    // Pointers

    int var = 10;
    int *ptr = &var; // Pointer to an integer variable

    std::cout << "Value of var: " << var << std::endl;
    std::cout << "Pointer ptr points to value: " << *ptr << std::endl;
    std::cout << "Address of var: " << ptr << std::endl;
    return 0;
}
