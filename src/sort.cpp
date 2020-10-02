#include <iostream>

#include "bubble.h"
#include "selection.h"


void print_array(int* array, int size)
{
	for(int i = 0; i < size; ++i)
	{
		if(i > 0)
		{
            std::cout << ", ";
		}

        std::cout << array[i];
	}

    std::cout << std::endl;
}


int main()
{
	int bubble_array[] = { 8, 14, 6, 16, 10, 12, 4, 2};
	int selection_array[] = { 8, 14, 6, 16, 10, 12, 4, 2};

	int size = sizeof(bubble_array) / sizeof(bubble_array[0]);


    std::cout << "\n==============================\n" << std::endl;

    print_array(bubble_array, size);
	bubbleSort(bubble_array, size);
    print_array(bubble_array, size);

    std::cout << "\n==============================\n" << std::endl;

    print_array(selection_array, size);
	selectionSort(selection_array, size);
    print_array(selection_array, size);

    std::cout << "\n==============================\n" << std::endl;

}
