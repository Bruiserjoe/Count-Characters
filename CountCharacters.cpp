#include <iostream>
#include <string>

int main()
{
	int size = 0;
	std::string input;
	char input2;
	std::cout << "Enter the string:" << std::endl;
	std::getline(std::cin, input);
	std::cout << "Enter char you want to find amount of:" << std::endl;
	std::cin >> input2;
	for (int i = 0; i <= input.size(); i++) {
			if (input[i] == input2) {
				size++;


			}
		
		
	}
	std::cout << "Number of characters in string: " << size << std::endl;
	system("pause");

	return 0;
}