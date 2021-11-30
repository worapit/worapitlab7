#include<iostream>
#include<string>

using namespace std;

string func1(string d){
	int i = 0, L = d.size();
	string y = "";
	while(i < L){
		y += d[L-i-1];
		i++;
	}
	return y;
}


string func2(string x){
	int i = 0, L = x.size();
	string y = "";
	while(i < L){
		y += tolower(x[i]);
		i++;
	}
	return y;	
}

string func3(string x){
	string A = func1(x);
	string y = "";
	x = func2(x);
	A = func2(A);
	if( x == A){
		cout << "Yes" ;
	}else{
		cout << "No" ;
	}
	return y;
}



int main(){
	string text, y;
    cout << "Input text: ";
	cin >> text;
    cout << "Reversed text: " << func1(text) << "\n" ;
    cout << "Palindrome: " << func3(text)  ;
    return 0;
}
