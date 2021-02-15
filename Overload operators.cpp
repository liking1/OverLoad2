#include <iostream>
#include "String.h"
using namespace std;
int main() {
	String one("Microsoft");
	String two("Windows");
	cout << "-=-=-=-=-=-=-=-=-" << endl;
	cout << one.concat(two) << endl;
	cout << one.combinateStrings(two) << endl;
	cout << one * two << endl;
	cout << "-=-=-=-=-=-=-=-=-" << endl;
	cout << one / two << endl;
	cout << "-=-=-=-=-=-=-" << endl;
	cout << "Increment!" << endl;
	String inc("inc");
	++inc;
	cout << inc << endl;
	String inc2("inc2");
	inc2++;
	cout << inc2 << endl;
	cout << "-=-=-=-=-=-=-" << endl;
	cout << boolalpha << (one > two) << endl;
	cout << boolalpha << (inc != inc2) << endl;
	cout << "-=-=-=-=-=-=-" << endl;
	cout << "Reverse!" << endl;
	cout << "-=-=-=-=-=-=-" << endl;
	String reverse_test("AttitudeEra");
	cout << !reverse_test << endl;
	cout << "Next" << endl;
	String Microsoft("Microsoft");
	String Windows("Windows");
	cout << Microsoft.division(Windows);
	
	return 0;
}