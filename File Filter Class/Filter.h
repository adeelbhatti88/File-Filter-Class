#pragma once
#include <iostream>
#include <string>
#include <fstream>
#include <cctype>

using namespace std;
class Filter
{
protected:
	char ch;

public:
	Filter();
	virtual void doFilter(ifstream &in, ofstream &out) = 0;
	

	
	
	
	~Filter();
};

//captalization class
class filter2:public Filter
{
public:
	void doFilter(ifstream &in, ofstream &out)
	{
		if (in)
		{	//read a char from file 1
			in.get(ch);

			while (in)
			{
				//write uppercase char to file 2
				ch = transform(ch);
				out.put(toupper(ch));
				//readanother char from file 1.
				in.get(ch);
			}
			in.close();
			out.close();
		}
	}

	char transform(char ch)
	{
		ch = toupper(ch);
	return ch;
	}

};

//copy class.
class filter3 :public Filter
{
public:
	string content = "";
	void doFilter(ifstream &in, ofstream &out)
	{
		in.open("inputfile.txt");
		if (in)
		{
			in.get(ch);
			while (in)
			{
				out.put(ch);
				in.get(ch);
			}
			in.close();
			out.close();
		}
		
	}

};

//encryption class
class filter4 :public Filter
{
public:
	string content = "";
	void doFilter(ifstream &in, ofstream &out)
	{
		in.open("inputfile.txt");
		if (in)
		{
			in.get(ch);
			while (in)
			{
				out.put(ch + 5);
				in.get(ch);
			}
			in.close();
			out.close();
		}

	}

};



