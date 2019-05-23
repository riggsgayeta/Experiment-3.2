#include<iostream>
#include<conio.h>

using namespace std;

int main()
{
	string arr[21], province="A", temp;
	
	for(int i=1, day=1; i<=21; i++, day++)
	{
		cout << "province " << province << ", day " << day << ": ";
		cin >> temp;
		if(i==7){
			day=0;
			province="B";
		}
		if(i==14){
			day=0;
			province="C";
		}
		arr[i-1]=temp;
	}
	
	province ="A";
	
	cout << endl << "displaying values: " << endl;
	for(int i=1, day=1, temp; i<=21; i++, day++)
	
	{
		cout << "province " << province << ", day " << day << "=";
		cout << arr[i-1] << endl;
		if(i==7){
			day =0;
			province ="B";
		}
		if(i==14){
			day =0;
			province ="C";
		}
	}
return 0;
}

