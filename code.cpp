#include<iostream>
#include<vector>
#include<stack>
using namespace std;
int main() {
	cout<<"Enter the total number of Days"<<endl;
	int n;
	cin>>n;
	vector<int> v;
	stack<int> s;
	int arr[n];
	cout<<"Please enter the amount of the stock for daily basis"<<endl;
	for(int i=0;i<n;i++)
	{
		int no;
		cin>>no;
		v.push_back(no);
	}
	s.push(0);//we will start with pushing 0 in stack 
	for(int i=0;i<n;i++)
	{
		while(!s.empty() and v[s.top()]<=v[i])//while stack is not empty and greater element will not found we will pop
		{
			s.pop();
		}
		if(s.empty())//if stack is empty store i+1 in answer array
		{
			arr[i]=i+1;
		}
		else
		{
			arr[i]=i-s.top();//else minus it from top element of stack
		}
		s.push(i);
	}
	cout<<"Your Stock Span is printed below"<<endl;
	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<" ";
	}
	cout<<"END"<<endl;
	cout<<"Thank You Visit Again :)";
	return 0;
}