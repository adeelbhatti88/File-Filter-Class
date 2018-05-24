#include <iostream>
#include <string>

#include <fstream>
#include "Filter.h"


using namespace std;

int main()
{

	//page 679
	
	
	
	ofstream inFile("outputfile.txt");
	ifstream outFile("inputfile.txt");
	ofstream fout("out.txt");
	ofstream font("encrypt.txt");

	//open a file for output

	

	

	

	filter2 filter;
	filter3 filter1;
	filter4 filter2;
	Filter *filtrate = &filter;
	Filter *filtrite = &filter1;
	Filter *filtrites = &filter2;
	//capatalize
	filtrate->doFilter(outFile, inFile);
	//copy.
	filtrite->doFilter(outFile, fout);\
	//encryption
	filtrites->doFilter(outFile, font);
	

	
		
	

	

	

	
	




}