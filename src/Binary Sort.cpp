//Binary Search of an array
//Git Hub Amoo-Srwsh

#include <iostream>
#include <iomanip>
using namespace std;

int Binary_Search (const int [], int , int , int , int);   //Function Prototype..
void Print(const int [] , int  , int , int , int );

main()
{
	const int size = 7;
	int a[size] = {11,22,35,44,49,88,91};
	int User_Input;

	for(int i=0; i<size; i++)        //Print array index number..
	   cout<<a[i]<<"  ";

    cout<<"\n Enter a Number :";
    cin>>User_Input;
    cout<<"\n\n";

    for(int j=0; j<size; j++)
       cout<<setw(3)<<j<<" ";

    cout<<"\n";

    for(int k=0; k<=4*size; k++)
       cout<<"_";

    cout<<"\n";

    int r = Binary_Search(a,User_Input,0,size-1,size);

    if(r != -1)
      cout<<"Found Number On Element :"<<r<<endl;
    else
      cout<<"\n"<<"Not Found"<<endl;
}

int Binary_Search(const int array[], int User_Input , int low , int hight , int size)
{
	int middle;  
	while(low <= hight)
	{
        middle = (low + hight) /2;
        Print(array,low,middle,hight,size);
        if(User_Input == array[middle])
           return middle;
        else if (User_Input < array[middle])
           hight = middle - 1;
        else
           low = middle + 1;
	}
	return -1;
}

void Print(const int array[] , int low , int middle , int hight , int size)
{
	for(int m=0; m<size; m++)
	   if(m < low || m > hight)
	     cout<<"   ";
	   else
	      if(m == middle)
	      	cout<<setw(3)<<array[m]<<"*";
	      else
	      	cout<<setw(3)<<array[m]<<" ";

	cout<<"\n";
}
