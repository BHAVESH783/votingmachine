#include<iostream>
using namespace std;
int main(){
	int age;
	int i;
	
	cout<<"Please enter your age"<<"\n";
	cin>>age;
	
	
	if(age>=18){
		cout<<"you are eligible for vote giving \n1 press1 for kamal ka phool \n2 press 2 for haath ka nissan \n3 press3 for other party";
		cin>>i;
		cout<<"your vote is successfully given";
		
	}
	else{
		cout<<"you are not eligible for vote giving";
	}
	return 0;
}

