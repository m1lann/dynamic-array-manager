#include <iostream>

int main()
{
    int sizeOfArray;
    std::cout << "Enter the numerical size of the array : " << std::endl;
    std::cin >> sizeOfArray;

    /* Now I will put the value of 'sizeOfArray' into an array variable. */
    int *arr = new int[sizeOfArray];

    /* Input values into an array size of 'sizeOfArray'. */
    std::cout << "Now enter " << sizeOfArray << " integers... " << std::endl;
    for(int i = 0; i < sizeOfArray; ++i)
    {
        std::cout << "Element " << i << ": ";
        std::cin >> arr[i];
    }

    /* Now I will display those values with their associated memory addresses. */
    std::cout << "Array values and their memory addresses : " << std::endl;
    for(int i = 0; i < sizeOfArray; ++i)
    {
        std::cout << "arr[" << i << "] = " << arr[i] << " at address " << &arr[i] 
        << std::endl;
    }

    /* Free the memory (it's good practice). */
    delete[] arr;
    
    return 0;
}