// This program american_equities.cpp tests a password for the American Equities web page to see if the format is correct

/* Character Testing and String Validation
The American Equities investment company offers a wide range of investment opportunities ranging from mutual funds to bonds.Investors can check the value of their portfolio from the American Equities’ web page. Information about personal portfolios
is protected via encryption and can only be accessed using a password. The American Equities company requires that a password consist of 8 characters, 5 of which must be letters and the other 3 digits. The letters and digits can be arranged in any order.
For example,
rt56AA7q
123actyN
1Lo0Dwa9 myNUM741
are all valid passwords.

However, the following are all invalid:
the476NEw 	// It contains more than 8 characters (also more than 5 letters)
be68moon 	// It contains less than 3 digits.
$retrn99 	// It contains only 2 digits and has an invalid character (‘$’) */

#include <iostream>
#include <cctype>
#include <cstring>
using namespace std;

//function prototypes
bool testPassWord(char[]);
int countLetters(char*);
int countDigits(char*);

int main()
{
	char passWord[20];

	cout << "Enter a password consisting of exactly 5 "<< "letters and 3 digits:" << endl;
	cin.getline(passWord, 20);

	if (testPassWord(passWord))
		cout << "Please wait - your password is being verified" << endl;
	else
	{
		cout << "Invalid password. Please enter a password "
             << "with exactly 5 letters and 3 digits" << endl;
		cout << "For example, my37RuN9 is valid" << endl;
	}
	// Fill in the code that will call countLetters and countDigits and will print to the
    // screen both the number of letters and digits contained in the password.



	return 0;
}

// the next 3 functions will need you to complete the algorithms as part of the function definition
/*
Function testPassWord
algorithm: Determines if the word in the character array passed to it, contains exactly 5 letters and 3 digits with a lotal password length of 8.
data in: a word contained in a character array
data returned: true if the word contains 5 letters & 3 digits, false otherwise
*/
bool testPassWord(char custPass[])
{
	int numLetters, numDigits, length;
        //place function calls here


	if (numLetters == 5 && numDigits == 3 && length == 8)
		return true;
	else
		return false;
}


/*
Function countLetters
algorithm: This function counts the number of letters (both capital and lower case) in the string
data in: pointer that points to an array of characters
data returned: number of letters in the array of characters
/*

int countLetters(char *strPtr)
{
	int occurs = 0;

        //write your algorithm here


	return occurs;
}

/*
Function countDigits
algorithm: This function counts the number of digits in the string
data in: pointer that points to an array of characters
data returned: number of digits in the array of characters
*/

int countDigits(char *strPtr)
{
	int occurs = 0;

	//write your algorithm here


	return occurs;
}
