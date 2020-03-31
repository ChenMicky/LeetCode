#include <iostream>
#include <stdio.h> 
#include <stdlib.h> 
#include<vector>


using namespace std;


void ReverseString(vector<char>& s, int i)
{
	int x = s.size();
	if (i>=s.size()) return; // to stop doing the recursive 
	char temp = s[i];
	ReverseString(s, ++i);// can't use the i++,because of i=i++
	s[s.size()-1-i] = temp;

}

void main() {
	vector<char> test{ 'a','b','c','d','e' };
	ReverseString(test, 0);
}