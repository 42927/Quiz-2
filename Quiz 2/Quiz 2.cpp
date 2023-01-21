#include <iostream>
using namespace std ;
class handling {
	public:
	int value1;
	double value2;
	    
	     	
		 
};
int main() {
	handling h;
	cout<<" Enter value 1";
	cin>>h.value1;
	cout<<"Enter value 2";
	cin>>h.value2;
	try{
		if (h.value1==0 &&h.value2==0)
		cout<<"Error";
		else {
			
			
		}
		catch {
			cout<<"Enter Valid Value of value 1";
			cin>>h.value1<<endl;
			cout<<"Enter valid value of value 2";
			cin>>h.value2<<endl;
			
		}
	}
	return 0;
}
