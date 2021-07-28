//Binary-Search of an array
//Github Amoo-Srwsh And hwmidx

#include <iostream>
using namespace std;

int binarySearch(const int[], int, int);

int main(){
   const int size = 7;
   int userInput;
   int number[size] = {11, 22, 35, 44, 49, 88, 91};

   for (int i = 0; i < size; i++) //Print array...
      cout << " " << number[i] << "\t";

   cout << "\n Enter a number to search : ";
   cin >> userInput;
   cout << "\n\n";

   int result = binarySearch(number, size, userInput);
   if (result != -1)
      cout << "Found Number : " << userInput << endl;
   else
      cout << "\nNot Found" << endl;
   return 0;
}

int binarySearch(const int array[], int len, int userInput){
   int low = 0, middle, high = len - 1;
   while (low <= high)
   {
      middle = (low + high) / 2;
      if (userInput == array[middle])
         return middle;
      else if (userInput < array[middle])
         high = middle - 1;
      else
         low = middle + 1;
   }
   return -1;
}