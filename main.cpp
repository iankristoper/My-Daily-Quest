#include <iostream>


//Fibonacci Sequence
//C++ program to generate the Fibonacci sequence up to a specified limit



//THIS IS THE FUNCTION TO CHECK IF THE USER INPUT IS ABOVE POSITIVE OR WHOLE NUMBER
bool iswhole_number(int check)
{
    if(check >= 1)
    {
        return true;
    }

    return false;
}


//THIS IS THE FUNCTION TO MAKE THE PALINDROME BASED ON THE LIMIT
//IT HAS 2 PARAMETER THE TRUE AND THE LIMIT PARAMETER
//TRUE = IS IF THE USER INPUT IS TRUE SO THE PROGRAM WILL PROCEED
void palindrome_maker(bool check, int limit_parameter)
{
    int first = 0;
    int second = 1;
    int next;


    if(check == 1)
    {
        while(first <= limit_parameter)
        {
            std::cout << "Palindrome maker: " << first << std::endl;

            next = first + second;  //IN ORDER TO ADD THE FIRST AND SECOND NUMBER
            first = second;         //FIRST EQUAL TO SECOND
            second = next;          //SECOND WILL EQUAL TO THE NEXT
        }
    }

    std::cout << "Please enter whole number!";
}

int main()
{
    int limit = 0;

    std::cout << "Enter the limit: ";
    std::cin  >> limit;

    //CALLING THE CHECKER FUNCTION IN ORDER TO CHECK IF THE INPUT IS VALID
    //THEN STORE IT IN ANOTHER VARIABLE FOR EASY USAGE OF THE RESULT
    int result = iswhole_number(limit);

    //CALLING THE PALINDROME MAKER AND PASSING 2 ARGUMENTS
    palindrome_maker(result, limit);

    return 0;
}
