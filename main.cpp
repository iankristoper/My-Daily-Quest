#include <iostream>  //for input and output
#include <string>    //for string manipulation
#include <cctype>    //for character classification


//CHECK THE STRING IF PALINDROME OF NOT
//PALINDROME CHECKER


//function to check if the words is palindrome
//it has a boolean return type in order to return if true or false
bool isPalindrome(const std::string& check_words)
{
    //indices of array
    //this will be used for comparing the first and last index of the string
    std::string::size_type start_index = 0;
    std::string::size_type end_index = check_words.length() - 1;


    while(start_index < end_index)
    {
        //check the string if alphanumeric
        //so if the word is bob: the while will show like this...
        //while(!std::isalnum(b)
        //the condition now is while (not alphanumeric = b) but b is alphanumeric
        //so this will become (!false) and (!false) is equal to true
        //so the condition is met
        while(!std::isalnum(check_words[start_index]) && start_index < end_index)
        {
            ++start_index;
        }


        //same as the above code but the checking will start from the end of string
        while(!std::isalnum(check_words[end_index]) && start_index < end_index)
        {
            --end_index;
        }



        //this will convert the character to lower case
        //and check if both or them are not equal
        if(std::tolower(check_words[start_index]) != std::tolower(check_words[end_index]))
        {
            return false;
        }


        //then move to the next iteration
        ++start_index;
        --end_index;
    }


    return true;

}



int main()
{

    std::string words;

    std::cout << "Enter words: ";
    std::getline(std::cin, words);

    if(isPalindrome(words)){
        std::cout << "Palindrome";
    }
    else {
        std::cout << "Not palindrome";
    }





    return 0;
}













