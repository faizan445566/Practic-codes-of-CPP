#include <iostream>
#include <iomanip>
using namespace std;
int main(){
	int num;

	cout<<"enter any number to print table: ";
	cin>>num;
	char sign='=';
	char sign2='x';
	int i;
	
	
	for(i=1;i<=10;i++){
		
	cout<<num<<setw(2)<<sign2<<setw(2)<<i<<setw(2)<<sign<<setw(2)<<i*num<<setw(2)<<endl;
	
	}
}
