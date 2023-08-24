//xander maniaci
#include<iostream>
#include<cctype>
#include<cstring>

using namespace std;

//list of prototypes
int lastIndexOf(/*in*/const char*,/*in*/char);
void Reverse(/*inout*/char*);
int Replace(/*inout*/char*,/*in*/char,/*in*/char);
bool isPalindrome(/*in*/const char*);
void toupper(/*inout*/char*);
int numLetters(/*in*/const char*);


int main()
{
    //char arrays and values for processing
    char input[200];
    char target = ' ';
    char place = ' ';
    //output statements for testing functions
    string testValue = "";
    cout<<"please enter a list of characters: ";
    cin.getline(input,200);
    cout<<endl;
    cout<<"Testing the lastIndexOf() function."<<endl;
    cout<<endl;
    cout<<"Enter a character to look for in the char Array: ";
    cin>> target;
    cout<<"The last index in the cstring "<<input<<" with the character "<<target<<" is "<<lastIndexOf(input,target)<<endl;
    cout<<endl;
    cout<<"Testing the reverse() function."<<endl;
    cout<<"The original string is "<<input<<". The reversed string is ";
    Reverse(input);
    cout<<input<<"."<<endl;
    cout<<endl;
    cout<<"Testing the replace() function."<<endl;
    cout<<"enter a character to target for replacement: ";
    cin>> target;
    cout<<"enter a character that will replace the targeted character: ";
    cin>> place;
    cout<<endl;
    cout<<"The number of replacements of '"<<place<<"' for '"<<target<<"' in "<<input;
    cout<<" is "<<Replace(input,target,place)<<". Now the string is "<<input<<"."<<endl;
    cout<<endl;
    cout<<"Testing the isPalindrome() function."<<endl;
    if(isPalindrome(input))
    {
        cout<<input<<" is a Palindrome."<<endl;
    } else
    {
        cout<<input<<" is not a Palindrome."<<endl;
    }
    cout<<endl;
    cout<<"Testing the toupper() function."<<endl;
    cout<<input<<" becomes ";
    toupper(input);
    cout<<input<<endl;
    cout<<endl;
    cout<<"Testing the numLetters() function."<<endl;
    cout<<input<<" has this many letters: "<<numLetters(input)<<endl;



    return 0;
}
//list of function declarations
//value returning function to find the last place that target variable appears in the array.
int lastIndexOf(/*inout*/const char* input, /*in*/char target)
{
    //pre:obtains char array from main and the target variable.
    //post: traverses the array testing to find the last value that  matches in the array then returns that a int tracking it.
    int counter = 0, place = -1;
    while(input[counter] != '\0')
    {
       if(input[counter] == target)
       {
         place = counter;
       }
        counter++;
    }
    return place;
}
//value returning function to reverse the char array.
void Reverse(/*inout*/char* input)
{
    //pre:obtains char array from main.
    //post: traverses the array with two different variables. variables switch values from the front and last place of the array until the array reaches the middle. strlen is needed as we need to know the size/2 for this to work.
     int counter1 = 0,counter2 = strlen(input)-1,stop = counter2;
     char temp = ' ';
    while(counter2 >=(stop/2)+1)
    {
        temp = input[counter1];
        input[counter1] = input[counter2];
        input[counter2] = temp;
        counter1++;
        counter2--;
    }
}
//value returning function to replace all characters with another selected char variable.
int Replace(/*inout*/char* input,/*in*/char target,/*in*/char Replace)
{
    //pre:obtains char array from main along with a target variable and the variable that is replacing the target variable.
    //post: traverses the array and replaces all targeted values with the replace variable

      int counter = 0, place = 0;
    while(input[counter] != '\0')
    {
       if(input[counter] == target)
       {
         input[counter] = Replace;
         place++;
       }
        counter++;
    }
    return place;

}
//value returning function to test if the char array is a palindrome.
bool isPalindrome(/*in*/const char* input)
{
    //pre:obtains char array from main.
    //post: traverses the array the same way reverse function does how ever instead of reversing the array it compares to see if values match each other. if not then char array is not a palindrome
    int counter1 = 0,counter2 = strlen(input)-1,stop = counter2;
     char temp = ' ';
     bool isPalin = false;
    while(counter2 >=(stop/2)+1)
    {
        if(toupper(input[counter1]) == toupper(input[counter2]))
        {
            isPalin = true;
        }else
        {
            isPalin = false;
            break;
        }
        counter1++;
        counter2--;
    }
    return isPalin;

}
//void function to uppercase all alpha characters in array.
void toupper(/*inout*/char* input)
{
    //pre:obtains char array from main.
    //post: traverses the array upper casing all alpha characters using toupper
    int counter = 0;
     while(input[counter] != '\0')
    {
         input[counter] = toupper(input[counter]);
        counter++;
    }

}
//value returning function to see how many alpha characters are in the array.
int numLetters(/*in*/const char* input)
{
    //pre:obtains char array from main.
    //post: traverses the array adding to the counter variable letter is there is a alpha character. then returns letter to main.
    int counter = 0, letters = 0;
     while(input[counter] != '\0')
    {
        if(isalpha(input[counter]))
        {
            letters++;
        }
        counter++;
    }
    return letters;
}
/*sample output 1
please enter a list of characters: tacocat

Testing the lastIndexOf() function.

Enter a character to look for in the char Array: c
The last index in the cstring tacocat with the character c is 4

Testing the reverse() function.
The original string is tacocat. The reversed string is tacocat.

Testing the replace() function.
enter a character to target for replacement: c
enter a character that will replace the targeted character: 4

The number of replacements of '4' for 'c' in tacocat is 2. Now the string is ta4o4at.

Testing the isPalindrome() function.
ta4o4at is a Palindrome.

Testing the toupper() function.
ta4o4at becomes TA4O4AT

Testing the numLetters() function.
TA4O4AT has this many letters: 5

Process returned 0 (0x0)   execution time : 19.750 s
Press any key to continue.*/
/* sample output 2
please enter a list of characters: tacoTaCo

Testing the lastIndexOf() function.

Enter a character to look for in the char Array: c
The last index in the cstring tacoTaCo with the character c is 2

Testing the reverse() function.
The original string is tacoTaCo. The reversed string is oCaTocat.

Testing the replace() function.
enter a character to target for replacement: o
enter a character that will replace the targeted character: 7

The number of replacements of '7' for 'o' in oCaTocat is 2. Now the string is 7CaT7cat.

Testing the isPalindrome() function.
7CaT7cat is not a Palindrome.

Testing the toupper() function.
7CaT7cat becomes 7CAT7CAT

Testing the numLetters() function.
7CAT7CAT has this many letters: 6

Process returned 0 (0x0)   execution time : 62.007 s
Press any key to continue.*/
