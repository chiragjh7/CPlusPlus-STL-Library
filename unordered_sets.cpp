#include <bits/stdc++.h>
using namespace std;

void print(unordered_set<string> &s){
cout<< s.size() << endl;

for(string value : s)
	cout<< value <<endl;
}

int main(){
	unordered_set<string> s;
	s.insert("abc");  // O(1) 
	s.insert("zsdf"); 
	s.insert("bcd");
	s.insert("abc");

	// auto it = s.find("abc");  // O(1)

	// if(it!=s.end())
	// s.erase(it);

	// s.erase("abc");

	print(s);


}