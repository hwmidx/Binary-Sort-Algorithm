//Bubble-Sort
//Github Amoo-Srwsh And hwmidx

#include <iostream>
using namespace std;

void bubbleSort(int[], int);
int main(){
    const int size = 6;
    int number[size] = {9, 5, 3, 1, 7, 4};   //Output (1      3       4       5       7       9)
    bubbleSort(number, size);
    for (int i = 0; i < size; i++)
        cout << number[i] << "\t";
    return 0;
}
// Bubble-Sort //
void bubbleSort(int num[], int len){
    int temp;
    for (int p = len - 1; 0 < p; p--)
        for (int j = 0; j < len; j++){
            if (num[j] > num[j + 1])
            {
                temp = num[j];
                num[j] = num[j + 1];
                num[j + 1] = temp;
            }
		}
}