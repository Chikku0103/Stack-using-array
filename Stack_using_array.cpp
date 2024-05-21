#include <bits/stdc++.h>
using namespace std;
class stackusingarray
{
	int *data;
	int nextindex;
	int capacity;
	public :
		stackusingarray()
		{
			data=new int[2];
			nextindex=0;
			capacity=2;
		}
		int size()
		{
			return nextindex;
		}
		bool isempty()
		{
			if(nextindex==0)
			{
				return true;
			}
			else
			{
				return false;
			}
		}
		//insert element 
		void push(int element) {
		if(nextindex == capacity) {
			int *newdata=new int[2 * capacity];
			for(int i=0;i<capacity;i++)
			{
				newdata[i]=data[i];
			}
			capacity =capacity *2;
		delete []data;
		data=newdata;
		}
		data[nextindex]=element;
		nextindex++;
		}
		//delete element
        int pop()
        {
        	if(isempty())
        	{
        		cout<<"Stack is empty"<<endl;
        		return INT_MIN;
			}
			nextindex--;
			return data[nextindex];
		}
		//Access top data
		int top()
		{
			if(isempty())
			{
				cout<<"Stack is Empty"<<endl;
				return INT_MIN;
			}
			return data[nextindex-1];
		}
};
int main()
{
	stackusingarray s;
	s.push(10);
	s.push(20);
	s.push(30);
	s.push(40);
	s.push(60);
	cout<<s.top()<<endl;
	cout<<s.pop()<<endl;
	cout<<s.pop()<<endl;
	cout<<s.pop()<<endl;
	cout<<s.isempty()<<endl;
	cout<<s.size()<<endl;
}
