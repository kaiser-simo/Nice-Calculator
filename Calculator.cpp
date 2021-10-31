#include <iostream>
using namespace std;
int main(){
	double a,b;
	char c;
	while(1){
		cin >> a >> c >> b;
		switch(c){
			case '+': cout<<a+b<<endl;
			break;
			case '-': cout<<a-b<<endl;
			break;
			case '*': cout<<a*b<<endl;
			break;
			case '/': if(a != 0 && b != 0){cout<<a/b<<endl;}else{cout<<"You cannot divide by 0! Enter a new function!"<<endl;}
			break;
			default: cout<<"Enter a function"<<endl;
			break;
		}
	}
	return 0;
}
