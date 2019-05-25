// CountCharacters.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <stdio.h>

int main()
{
	int size = 0;
	int sizei;
	char input [100];
	char input2;
	std::cout << "Enter the string:" << std::endl;
	std::cin >> input;
	sizei = strlen(input);
	std::cout << "Enter char you want to find amount:" << std::endl;
	std::cin >> input2;
	for (int i = 0; i <= sizei; i++) {
		if (input[i] == input2) {
			size++;
			
			
		}
		
		
	}
	std::cout << "Number of characters in string: " << size << std::endl;
}