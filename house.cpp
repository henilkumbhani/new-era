#include<iostream>
#include<string.h>
using namespace std;

class house{
	public:
	int h_no ;
	char h_name[100];
	int room_size;
	char h_address[100];
	
};

int main()
{
	house h1;
	cout<<"enter house no.=";
	cin>>h1.h_no;
	cout<<"enter house name =";
	cin>>h1.h_name;
	
	cout<<"house no. ="<<h1.h_no<<endl<<"house name ="<<h1.h_name<<endl;
	
	return 0;
}
