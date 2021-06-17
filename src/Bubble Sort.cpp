//bubble sort
#include <iostream>
using namespace std;


void sort(int [], int);
main()
{
	const int size = 6; 
	int a[size] = {9,5,3,1,7,4};    //Sort (9      5      3      1      7      4)             Out Put (1      3       4       5       6       7)

	sort(a,size);
	for(int i=0; i<size; i++)
		  cout<<a[i]<<'\t';
}

void sort(int a[], int size)
{
  int hold;

	for(int p=0; p<size-1; p++)
		 for(int j=0; j<size; j++)
			   if(a[j] > a[j+1])
			       {
			      	hold=a[j];
				      a[j]=a[j+1];
				      a[j+1]=hold;
			       }
}
	 
