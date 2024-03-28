#include <iostream>
#include <array>

int main()
{
    std::array<int,4> arr = {30,50,20,10};
    int smallest = arr[0];
    int smallest_index = 0;

    for (int i = 0; i < std::size(arr); i++) 
    {
        if (arr[i] < smallest) 
        {
            smallest = arr[i];
            smallest_index = i;
        }
    }

    std::cout << "Индекс наименьшего элемента: " << smallest_index << std::endl;

    return 0;
}





