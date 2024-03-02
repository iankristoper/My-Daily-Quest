#include <iostream>



//FIND THE LARGEST NUMBER
//THIS IS LIKE FINDING GENERATOR



int main()
{

    //always practice using constant when you use a variable as basis
    const int number_count = 3;
    int array_number[number_count];



    //looping in order to print and input many numbers
    for(int i = 0; i < 3; i++)
    {
        std::cout << "Enter a number: ";
        std::cin  >> array_number[i];
    }



    //use a variable to store the first value
    //this will enable to compare the first value to the rest of the value in array
    int storage_comparator = array_number[0];

    //this loop is to compare the current value to the next value
    //if the next value is much larger than the current value
    //then the current value will copy the next value
    for(int i = 1; i < 3; i++)
    {
        //condition for comparing the current and the next
        if(storage_comparator < array_number[i])
        {
            storage_comparator = array_number[i];
        }

    }

    //print the result
    std::cout << "Largest number: " << storage_comparator;



    return 0;
}









