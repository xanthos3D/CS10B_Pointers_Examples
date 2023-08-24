#include<iostream>
#include<cstring>
#include<string>
#include<cctype>
using namespace std;
//list of function prototypes
void getValidInput(/*inout*/char[],/*inout*/int&);
void charToInt(/*inout*/char[],/*inout*/int[],/*in*/int);
int Total(/*inout*/int[],/*in*/int);
int High(/*inout*/int[],/*in*/int);
int Low(/*inout*/int[],/*in*/int);

int main()
{
    //variables for processing numbers
    char input[81];
    int *numbers = nullptr;
    int length = 0;
    char ch;
    bool test = false;

    //function calls to get input and process the input
    getValidInput(input,length);
    numbers = new int[length];
    charToInt(input,numbers,length);
    //displays input
    cout<<"The sum of those digits "<< Total(numbers,length)<<endl;
    cout<<"The highest digit is "<< High(numbers,length)<<endl;
    cout<<"The lowest digit is "<< Low(numbers,length)<<endl;



return 0;


}
//list of function declarations
//void function to send a valid input to main.
void getValidInput(/*inout*/char input[], /*inout*/int& length)
{
    //pre: gets a char array and char size from main
    //post: sends a valid char array without paces characters or punctuation.
    cout<<"Enter a series of digits with no spaces between them."<<endl;
    cin.getline(input,81);
    length = strlen(input);
    for (int counter = 0;counter < length;counter++)// for loop that itterates till a valid input is found with out
    {
        if(isspace(input[counter])){// test conditions to see if a invalid character is within the string. if a invalid character is found it prompts the user to enter another char array and resets counter
            cout<<endl;
            cout<<"Incorrect input....?"<<endl;
            cout<<"Enter a series of digits with no spaces between them."<<endl;
            cin.getline(input,81);
            length = strlen(input);
            counter = 0;
        }else if(isalpha(input[counter])){
            cout<<endl;
            cout<<"Incorrect input....?"<<endl;
            cout<<"Enter a series of digits with no spaces between them."<<endl;
            cin.getline(input,81);
            length = strlen(input);
            counter = 0;
        }else if(ispunct(input[counter])){
            cout<<endl;
            cout<<"Incorrect input....?"<<endl;
            cout<<"Enter a series of digits with no spaces between them."<<endl;
            cin.getline(input,81);
            length = strlen(input);
            counter = 0;
        }

    }
}
//void function to process input.
void charToInt(/*inout*/char input[],/*inout*/int numbers[],/*in*/int length)
{
    //pre: gets a char array and char size from main and the int array for storing values
    //post: converts the char values to ints by subtracting 48 from every numbers aski chart value to get the correct number stored.
    for(int counter = 0; counter < length; counter++)
    {
        numbers[counter] = input[counter]-48;

    }
}
//value returning function to find total.
int Total(/*inout*/int numbers[],/*in*/int length)
{
    //pre: gets int array from main and returns the total
    //post: traverses array and adds up the values before returning total to main
    int total = 0;
    for(int counter = 0; counter < length; counter++)
    {
        total += numbers[counter];
    }
    return total;

}
//value returning function to find the lowest number.
int Low(/*inout*/int numbers[],/*in*/int length)
{
    //pre: gets int array from main and returns the lowest value in the array
    //post: traverses array and compares the values before returning the lowest value to main
    int lowest = 9;
    for(int counter = 0; counter < length; counter++)
    {
        if(numbers[counter] < lowest)
        {
            lowest = numbers[counter];
        }
    }
    return lowest;

}
//value returning function to find the highest number.
int High(/*inout*/int numbers[],/*in*/int length)
{
    //pre: gets int array from main and returns the highest value in the array
    //post: traverses array and compares the values before returning the lowest value to main
    int highest = 0;
    for(int counter = 0; counter < length; counter++)
    {
        if(numbers[counter] > highest)
        {
            highest = numbers[counter];
        }
    }
    return highest;

}
/*
Enter a series of digits with no spaces between them.
no23756

Incorrect input....?
Enter a series of digits with no spaces between them.
2345 no

Incorrect input....?
Enter a series of digits with no spaces between them.
1 2 34 5

Incorrect input....?
Enter a series of digits with no spaces between them.
yes7654

Incorrect input....?
Enter a series of digits with no spaces between them.
8472529
The sum of those digits 37
The highest digit is 9
The lowest digit is 2

Process returned 0 (0x0)   execution time : 34.727 s
Press any key to continue.*/









