#include <iostream>
using namespace std;
//list of void prototypes
void getArray(/*inout*/int [], /*in*/int);
int *reverseArray(/*in*/  int[],/*in*/ int); //a value returning function that returns a pointer to an array

int main()
{
//declares pointer variables
int *array1 = nullptr;
int *array2 = nullptr;
//variable for holding size of array
int Size;
//prompts user for array size
cout<<"please enter size of the array: ";
cin>> Size;
//turns pointers into arrays
array1 = new int [Size];
array2 = new int [Size];
//tests to see if there is enough memory in the heap
if (array1 == nullptr)
{
    cout<<" error allocating memory or the size is negitive!/n";
    return 1;
}
//calls function to fill array
getArray(array1, Size);
//prints out the original array after array is filled
cout<<"The contents of the original array are:"<<endl;
for(int  count = 0; count < Size; count++)
{
   cout<< *(array1+count)<< " ";
}
//calls function to reverse array and set its memory address to the second array
array2 = reverseArray(array1,Size);//sets the second memory address equal to the reversed array
cout<<endl;
//prints out reversed array
cout<<"The contents of the copy are:"<<endl;
for(int  count = 0; count < Size; count++)
{
   cout<< *(array2+count)<< " ";
}
cout<<endl;
//deletes contents of the pointer arrays
delete [] array1;
delete [] array2;
//sets pointer arrays to null
array1 = nullptr;
array2 = nullptr;

return 0;
}
//list of function declarations
// void function gets input to fill the dynamic array
void getArray(/*inout*/int array[],/*in*/ int size)
{
    //pre: obtains array and size of array from main
    //post:fills array with values
    for(int  count = 0; count < size; count++)// for loop to accepts inputs into the array
{
    cout<< "please enter score# "<<(count + 1) <<": ";
    cin>>array[count];
}
}
//value returning function that sends the second array memory address to main.
int *reverseArray(/*in*/  int array1[],/*in*/ int Size)
{
    //pre: obtains array and size of array from main
    //post:creates a reverse of the array then sends it memory address back to main.
    int *array2 = nullptr;
    array2 = new int [Size];
int rever = 0;
for(int counter = Size-1;counter > -1 ;counter--)
{
   array2[counter] = array1[rever];
   rever++;


}
return array2;
}
/*please enter size of the array: 3
please enter score# 1: 2
please enter score# 2: 9
please enter score# 3: 4
The contents of the original array are:
2 9 4
The contents of the copy are:
4 9 2

Process returned 0 (0x0)   execution time : 8.153 s
Press any key to continue.*/


