#include <iostream>
using namespace std;

void readData(/*inout*/string [],/*inout*/int [],/*in*/int ); // void function for user input to be stored in two arrays
void sortData(/*inout*/string [], /*inout*/int [],/*in*/int ); // void function with a descending sort on multiple arrays
void displayData(/*in*/const string [],/*in*/const int [], /*in*/int);

int main()
{
//pointer varialbe declarations.
string *names = nullptr;
int *scores = nullptr;
//int for holding size
int Size;
//prompts user for size of array
cout<<"How many FIFA scores will you enter?: ";
cin>> Size;
while(!cin || Size < 1)//input validation
{
 cin.clear();
 cin.ignore(200,'/n');
 cout<<"bad data please retype.";
 cout<<"How many FIFA scores will you enter?: ";
 cin>> Size;
}
//creates pointer arrays.
names = new string [Size];
scores = new int [Size];
//calls void function to fill arrays.
readData(names,scores,Size);
//sorts array so that scores can be in order.
sortData(names,scores,Size);
cout<<endl;
//function to displays scores.
displayData(names,scores,Size);
cout<<endl;
//deletes contents of array
delete [] names;
delete [] scores;
//sets pointers to null clears up space in heap.
names = nullptr;
scores = nullptr;
return 0;
}
//function declarations
//void function to obtain input for arrays.
void readData(string names[], int scores[], int Size)
{
    //pre: obtains arrays for storing scores ,names, and size variable.
    //post: obtains variables for arrays.
    for(int  counter = 0; counter < Size; counter++)
{
    cout<< "Enter the name for Player #"<<counter + 1<<": ";
    cin>>names[counter];
    cout<< "Enter the score for FIFA score #"<<counter + 1<<": ";
    cin>>scores[counter];
}

}
//void function to sort arrays from highest to lowest.
void sortData(string names[], int scores[], int Size)
{
    //pre: obtains arrays for storing scores ,names, and size variable.
    //post: sorts arrays so they are ordered from highest to lowest.
    int startScan, minIndex, minValue;
    string temp, low;
    //search algorithm from book with addons to keep the names incorrect order
   for (startScan = 0; startScan < (Size - 1); startScan++)
   {
       //variables store the lowest score.
      minIndex = startScan;
      minValue = scores[startScan];
      temp = names[startScan];
      for(int index = startScan + 1; index < Size; index++)
      {
         if (scores[index] > minValue)//stores lowest score and name attached to it
         {
            minValue = scores[index];
            minIndex = index;
            low = names[index];
         }
      }
      //switches scores and names so that they are ordered.
      scores[minIndex] = scores[startScan];
      scores[startScan] = minValue;
      temp = names[minIndex];
      names[minIndex] = names[startScan];
      names[startScan] = temp;

   }
}
//void function to print scores and names in order.
void displayData(const string names[], const int scores[], int Size)
{
    //pre: obtains arrays for displaying scores ,names, and size variable.
    //post: prints out arrays using simple for loop.
    cout<<"Top Scorers:"<<endl;
 for(int  counter = 0; counter < Size; counter++)
{
   cout<<names[counter]<<": "<<scores[counter]<<endl;
}
}
/*
How many FIFA scores will you enter?: 5
Enter the name for Player #1: joe
Enter the score for FIFA score #1: 234
Enter the name for Player #2: bob
Enter the score for FIFA score #2: 9876
Enter the name for Player #3: gary
Enter the score for FIFA score #3: 6543
Enter the name for Player #4: jake
Enter the score for FIFA score #4: 1390
Enter the name for Player #5: zach
Enter the score for FIFA score #5: 9768

Top Scorers:
bob: 9876
zach: 9768
gary: 6543
jake: 1390
joe: 234


Process returned 0 (0x0)   execution time : 44.712 s
Press any key to continue.
*/


