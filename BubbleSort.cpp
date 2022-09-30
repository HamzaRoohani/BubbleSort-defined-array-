#include<iostream>
using namespace std;
void bubbleSort(int array[], int size)
{
	for(int step=0;step<size;++step)
	{
		for(int i=0;i<size;i++)
		{
			if(array[i]>array[i+1])
			{
				int temp=array[i];
				array[i]=array[i+1];
				array[i+1]=temp;
			}
		}
	}
}
void printArray(int array[],int size)
{
	for(int i=0;i<size;++i)
	{
		cout<<" "<<array[i];
	}
	cout<<endl;
}
int main()
{
	int data[]={-7,54,73,-31,29};
	int size=sizeof(data)/sizeof(data[0]);
	bubbleSort(data,size);
	cout<<"Sorted Array in Ascending Order: ";
	printArray(data,size);
}
