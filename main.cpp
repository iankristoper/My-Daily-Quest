#include <iostream>
#include <string>


//COUNT THE VOWELS OF A STRING
//VOWEL COUNTER GENERATOR


//this is the function for counting the vowels
//it has integer type of return
//then inside the parenthesis is the parameter it has a constant string reference
//it will only refer to the arguments that passed
//everytime this function will be called he can use the value pass by the caller
//he can use the value and modify it but it is constant so he cant modified the
//true value from the caller

//reference is to allow operate the true data without making a copy
//because the function can modified its data, make sure to put some constant
//if you dont want the data to be change, "just use only"
int countVowels(const std::string& words_parameter)
{
    int vowel_counter = 0;

    //now this is a ranged based for loop (introduced in c++11)
    //for(reader : sequence)
    //this will read all each value from the sequence
    //then implicitly stop the condition when its done
    //so each iteration will equivalent to the sequence then if the reader
    //is done reading all the value in sequence then it will stop the loop
    for(char character_storer : words_parameter)
    {
        char lower_case = tolower(character_storer);
        if(lower_case == 'a' || lower_case == 'e' || lower_case == 'i' || lower_case == 'o' || lower_case == 'u')
        {
            vowel_counter++;
        }

    }

    //it will return this value to the caller
    return vowel_counter;
}






int main()
{
    std::string words;


    //below code is take the input from the user
    //so the user will put some input
    //the second line is getline code -- it is in order to get rid of the spaces
    //that the user will be inputted
    std::cout << "Enter words: ";
    std::getline(std::cin, words);



    //calling the function countVowels
    //then passing the argument words to the function
    //at the same time since the function has integer return type
    //we store the function to another integer variable for ease in printing
    int result = countVowels(words);

    std::cout << "Number of vowels: " << result;


    return 0;
}
