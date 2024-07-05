#include <iostream>
//dereference one and two to work with the values 
void swapValues(int *one, int *two) {

	int swap = *two;

	//swap the values using pointers
	*two = *one;
	*one = swap;

}

int main() {

	int one{ 1 };
	int two{ 2 };

	std::cout << "Before swap: one = " << one << ", two = " << two << std::endl;

	swapValues(&one, &two); // Call the function with addresses of one and two

	std::cout << std::endl;
	std::cout << std::endl;

	std::cout << "After swap: one = " << one << ", two = " << two << std::endl;

	return 0;

}