#include "stdafx.h"
#include "AwesomeClass.h"

AwesomeClass::AwesomeClass()
{
	cout << "Sheer Awesomeness!" << endl;
}

void AwesomeClass::DoSomethingAwesome()
{
	cout << "I'm gonna do something awesome! Tell me something! Press ctrl + z to end." << endl;

	copy(istream_iterator<string>(cin), istream_iterator<string>(), back_inserter(_vec));
	sort(_vec.begin(), _vec.end());
	for_each(_vec.begin(), _vec.end(), [](string s){ cout << s << " "; });

	cout << endl << "You're sorted!" << endl;
}

AwesomeClass::~AwesomeClass()
{
	cout << "Awesomeness is exitting, stage left!" << endl;
}
