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
	for_each(_vec.begin(), _vec.end(), [](string& s){ cout << s << " "; });

	cout << endl << "All sorted!" << endl;
	cout << endl;
}

void AwesomeClass::DoSomethingEvenMoreAwesome()
{
	unsigned int len = 0;
	multimap<string, int> out;

	cout << "Now I'm gonna do something even more awesome!" << endl;
	
	for_each(_vec.begin(), _vec.end(), [&out](string &s) { out.insert(pair<string, int>(s, s.length())); });

	for_each(out.begin(), out.end(), [&len](pair<string, int> s){ cout << s.first << " " << s.second << endl; len += s.second; });

	cout << endl << "All counted! Word count: " << out.size() << ", Character count: " << len << endl;
}

AwesomeClass::~AwesomeClass()
{
	cout << "Awesomeness is exitting, stage left!" << endl;
}
