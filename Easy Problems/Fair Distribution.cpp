#include <iostream>

using namespace std;

int main() {
	int x,y;
	cin>>x>>y;
	if(x%y == 0) cout<<0;
	else
	cout<<x - (y%x);
	return 0;
