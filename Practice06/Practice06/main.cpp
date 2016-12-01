#pragma once
#include <string>
#include <iostream>
#include <vector>
#include <list>
#include <map>
//#include "Frame.h"
//#include "ExArray.h"

using namespace std;

void dump(list<string> &I)
{
	list<string>::iterator iter = I.begin();

	while (iter != I.end())
	{
		cout << *iter << endl;
		iter++;
	}
}

void main()
{
	/*try 
	{
		Frame *f1 = new Frame;
		Frame *f2 = new Frame[10];

		delete f1;
		delete[] f2;
	}
	catch (string msg)
	{
		cout << "Error msg : " << msg << endl;
	}

	ExArray<int> arr1(3);
	ExArray<char> arr2(4);
	ExArray<double> arr3(5);

	arr1.addData(2);
	arr2.addData('A');
	arr3.addData(32.12);
	arr1.printData();
	arr2.printData();
	arr3.printData();

	int num1 = 10, num2 = 40;
	cout << "before : " << num1 << ", " << num2 << endl;
	mySwap<int>(num1, num2);
	cout << "after : " << num1 << ", " << num2 << endl;

	double num1d = 121.11, num2d = 10.5;
	cout << "before : " << num1d << ", " << num2 << endl;
	mySwap<double>(num1d, num2d);
	cout << "after : " << num1d << ", " << num2d << endl;

	ExArray<int> arr4(5);
	arr4.addData(10);

	mySwap<ExArray<int>>(arr1, arr4);
	arr1.printData();
	arr4.printData();*/

	//20161201 Chapter12

	//STL-vector
	/*
	vector<int> v;

	v.push_back(10);
	v.push_back(20);
	v.push_back(30);
	v.insert(v.begin(), 40);
	v.insert(v.end(), 50);

	for (int i = 0; i < v.size(); i++)
	{
		cout << v[i] << endl;
	}

	cout << "access index at 1 : " << v.at(1) << endl;

	v.erase(v.begin());
	v.erase(v.end() - 1);
	
	vector<int>::iterator iter = v.begin();

	cout << "access index at 1 with iterator : " << iter[1] << endl;

	while (iter != v.end())
	{
		cout << *iter << endl;
		iter++;
	}*/

	//STL-list

	/*
	list<string> names;
	names.insert(names.begin(), "Konkuk");
	names.insert(names.end(), "University");
	names.insert(names.end(), "SCLAB");
	names.insert(names.end(), "CSY");
	dump(names);

	cout << "===" << endl;
	names.reverse();
	dump(names);
	*/

	//STL-map
	map<string, int> m;
	m["seoul"] = 100;
	m["daegu"] = 120;
	m["busan"] = 200;

	cout << "Train to Seoul = " << m["seoul"] << "$" << endl;
	cout << "Train to Daegu = " << m["daegu"] << "$" << endl;
	cout << "Train to Busan = " << m["busan"] << "$" << endl;



}