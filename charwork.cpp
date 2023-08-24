#include<iostream>
#include<cstring>
#include<string>
#include<cctype>
using namespace std;
void getValidInput(char[],int&);
void charToInt(char[],int[],int);
int Total(int[],int);
int High(int[],int);
int Low(int[],int);

int main()
{
    char input[81];
    int *numbers = nullptr;
    int length = 0;
    char ch;
    bool test = false;

    getValidInput(input,length);
    numbers = new int[length];
    charToInt(input,numbers,length);
    cout<<"The sum of those digits "<< Total(numbers,length)<<endl;
    cout<<"The highest digit is "<< High(numbers,length)<<endl;
    cout<<"The lowest digit is "<< Low(numbers,length)<<endl;



return 0;


}

void getValidInput(char input[], int& length)
{
    cout<<"Enter a series of digits with no spaces between them.";
    cin.getline(input,81);
    length = strlen(input);
    for (int counter = 0;counter < length;counter++)
    {
        if(isspace(input[counter])){
        cout<<"Incorrect input....?"<<endl;
        cout<<"Enter a series of digits with no spaces between them.";
        cin.getline(input,81);
        length = strlen(input);
        counter = 0;
        }else if(isalpha(input[counter])){
        cout<<"Incorrect input....?"<<endl;
        cout<<"Enter a series of digits with no spaces between them.";
        cin.getline(input,81);
        length = strlen(input);
        counter = 0;
        }else if(ispunct(input[counter])){
        cout<<"Incorrect input....?"<<endl;
        cout<<"Enter a series of digits with no spaces between them.";
        cin.getline(input,81);
        length = strlen(input);
        counter = 0;
        }
        counter++;

    }
}
void charToInt(char input[],int numbers[],int length)
{
    for(int counter = 0; counter < length; counter++)
    {
        numbers[counter] = input[counter]-48;
        cout<<numbers[counter]<<endl;

    }
}
int Total(int numbers[],int length)
{
    int total = 0;
    for(int counter = 0; counter < length; counter++)
    {
        total += numbers[counter];
    }
    return total;

}
int Low(int numbers[],int length)
{
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
int High(int numbers[],int length)
{
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









