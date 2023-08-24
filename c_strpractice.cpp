// An interface to test your c-string processing functions
#include<iostream>
#include<string> //?
using namespace std;

//a few prototypes with pointers as parameters to char arrays
void reverse(char* str);
void toupper(char *s);
int numLetters(const char *s);
bool isPalindrome(const char* s);

int main()
{
   char line[51];
   char containerString[] = "Lord of the Strings";
   char digitInString[] = "13 dwarves";
   char palindrome[] = "02022020";
   int length, count = 0;

   cout << "Enter a string of no more than 50 characters" << endl;
   cin.getline(line,51);

   length = strlen(line);

   //char processing related tests with function calls




   return 0;
}

void reverse(char* str)
{



}
void toupper(char *s)
{


}
int numLetters(const char *s)
{



}
bool isPalindrome(const char* s)
{




}
