#include <iostream>
using namespace std;
int main() 
{
	int num,numEnd,i=1;
	cout<<"Enter number for which you want to print table: "<<endl;
	cin>>num;
	cout<<"Enter number at you want to print table: "<<endl;
	cin>>numEnd;
	cout<<"Table is: "<<endl;
	while(i<=numEnd)
		{
		cout<<num<<" x "<<i<<" = "<<num*i<<endl;
		i++;
			}
	return 0;
}
