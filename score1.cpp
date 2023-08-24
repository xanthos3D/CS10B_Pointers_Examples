#include <iostream>
#include <iomanip>
using namespace std;

void selection_sortArray(int [], int);
int *reverseArray(/*in*/  int[],/*in*/ int); //a value returning function that returns a pointer to an array

int main()
{
int *scores = nullptr;
int num_scores;
float average;
float total = 0;
cout<<"please input the number of students that completed the cs10a exam: ";
cin>> num_scores;
scores = new int [num_scores];
if (scores == nullptr)
{
    cout<<" error allocating memory or the size is negitive!/n";
    return 1;
}
for(int  count = 0; count < num_scores; count++)
{
    cout<< "please enter score# "<<(count + 1) <<": ";
    cin>>scores[count];//(*scores+1) or scores++;
    total = total + scores[count];
}
average = total/ num_scores;
cout<<" The average of the scores is "<<average<<endl<<endl;

selection_sortArray(scores, num_scores);
cout<<"here are the scores in ascending order"<<endl;
for(int  count = 0; count < num_scores; count++)
{
   cout<< *(scores+count)<< " ";
}
cout<<endl;
reverseArray(scores, num_scores);
cout<<"here are the scores in decending order"<<endl;
for(int  count = 0; count < num_scores; count++)
{
   cout<< *(scores+count)<< " ";
}




return 0;
}

void selection_sortArray(int array[], int size)
{
   int startScan, minIndex, minValue;

   for (startScan = 0; startScan < (size - 1); startScan++)
   {
      minIndex = startScan;
      minValue = array[startScan];
      for(int index = startScan + 1; index < size; index++)
      {
         if (array[index] < minValue)
         {
            minValue = array[index];
            minIndex = index;
         }
      }
      array[minIndex] = array[startScan];
      array[startScan] = minValue;
   }
}
int *reverseArray(/*in*/ int array[],/*in*/ int size)
{
      int startScan, minIndex, minValue;

   for (startScan = 0; startScan < (size - 1); startScan++)
   {
      minIndex = startScan;
      minValue = array[startScan];
      for(int index = startScan + 1; index < size; index++)
      {
         if (array[index] > minValue)
         {
            minValue = array[index];
            minIndex = index;
         }
      }
      array[minIndex] = array[startScan];
      array[startScan] = minValue;
   }

}


