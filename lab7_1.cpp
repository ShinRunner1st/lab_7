#include<iostream>
#include<string>

using namespace std;

string func1(string x){
	int i = 0, L = x.size();
	string y = "";
	while(i < L){
		y += x[L-i-1];
		i++;
	}
	return y;
}

string func2(string x){
	int i = 0, L = x.size();
	string y = "";
	while(i < L){
		y += toupper(x[i]);
		i++;
	}
	return y;	
}

string func3(string x){
	int i = 0, L = x.size();
	string y = "";
	while(i < L){
		y += tolower(x[i]);
		i++;
	}
	return y;	
}

string palindromeCheck(string x, string y){
	int i = 0;
	int check = 0;
	int c = x.size();
	while(i < c){
		if(x[i] == y[i]){
			check++;
		}
		i++;
	}
	if(check == c){
		return "Yes";
	}else{
		return "No";
	}

}

int main(){
	string input;
    cout << "Input text: ";
	cin >> input;
    cout << "Reversed text: " + func1(input) << endl;
    cout << "Palindrome: " + palindromeCheck(func2(input),func2(func1(input)));
    return 0;
}
