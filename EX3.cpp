//PROBLEM 1
#include <iostream>
#include <iomanip>
#include <conio.h>
using namespace std;
int main ()
{
	int arr[10];
	int smallest; 
	int largest; 
	float ave, sum;
	
	
	for (int x = 0; x < 10; x++)
	{
		cout << "Enter number " << x +1 << ": ";
		cin >> arr[x];
    }
	
	smallest = arr[0];
	for (int x = 0; x < 10; x++)
	{
		if (smallest > arr[x])
	    smallest = arr[x];
    }
	
	largest = arr[0];
	for (int x = 0; x < 10; x++)
	{
		if (largest < arr[x])
	    largest = arr[x];
    }
	
	
    
    for (int x = 0; x < 10; x++)
	{
    	sum = arr[0] + arr[1] + arr[2] + arr[3] + arr[4] + arr[5] + arr[6] + arr[7] + arr[8] + arr[9];
    	ave = sum/10;
    }
    	
    	cout << setprecision(2) << fixed << showpoint;
    
	

    
	cout << "\nThe largest number is: " << largest << endl;
	cout << "The smallest number is: " << smallest << endl;
	cout << "The total value of the array is: " << sum << endl; 
    cout << "The average value of the array is: " << ave << endl;
	
	getch ();
	return 0;
}



//PROBLEM 2
#include <iostream>
#include <conio.h>
using namespace std;

int i;
double PA [7], PB[7], PC[7];

int main()
{


    cout << "Enter all temperature for a week of Province A, Province B, and Province C." << endl;

        for(i = 0; i < 7; i++)
        {
            cout << "Province A" << ", Day " << i + 1 << " : "; 
            cin >> PA[i];
        }
        
         for(i = 0; i < 7; i++)
        {
            cout << "Province B" << ", Day " << i + 1 << " : "; 
            cin >> PB[i];
        }
        
         for(i = 0; i < 7; i++)
        {
            cout << "Province C" << ", Day " << i + 1 << " : "; 
            cin >> PC[i];
        }
    

    cout << "\n\n        Temperature of Province A, B, and C for a week: \n";

    for(i = 0; i < 7; i++)
        {
            cout << "\nProvince A" << ", Day " << i + 1 << " : "<< PA[i];
        }
        
         for(i = 0; i < 7; i++)
        {
            cout << "\nProvince B" << ", Day " << i + 1 << " : " << PB[i];
            
        }
        
         for(i = 0; i < 7; i++)
        {
            cout << "\nProvince C" << ", Day " << i + 1 << " : " << PC[i];
        }
    
    getch ();
    return 0;
}


#include<iostream>
#include <conio.h>
using namespace std;
int main()
{
	
	char arr[50];
	int arraysize, a, b, temp;
	
	cout<<"Please enter the array size: ";
	cin>>arraysize;
	
	cout<<"Please enter the elements in the array: ";
	for(a=0; a<arraysize; a++)
	{
		cin>>arr[a];
	}
	
	
	b=a-1;  
	a=0;   
	
	while(a<b)
	{
		temp=arr[a];
		arr[a]=arr[b];
		arr[b]=temp;
		a++;
		b--;
	}
	cout<<"The reverse order of the array elements is : \n";
	for(a=0; a<arraysize; a++)
	{
		cout<<arr[a]<<" ";
	}
	
	getch ();
	return 0;
}
