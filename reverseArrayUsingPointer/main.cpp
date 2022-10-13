#include <iostream>
using namespace std;

// swap two memory contents
void swap(int* a, int* b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

// reversing the array through pointers
void reverse(int array[], int array_size)
{

    // array1 pointing at the beginning of the array
    int* array1 = array,

        // pointer2 pointing at end of the array
        * pointer2 = array + array_size - 1;
    while (array1 < pointer2) {
        swap(array1, pointer2);
        array1++;
        pointer2--;
    }
}

// print the array
void print(int* array, int array_size)
{

    // pointing at end of the array
    int* length = array + array_size,

       
        * position = array;
    cout << "Array = ";
    for (position = array; position < length; position++)
        cout << *position << " ";
}


int main()
{
    // Driver
    int array[] = { 1,9,3,10,5,6,7,8,2,4 };

    cout << "Original \n";
    print(array, 10);
    cout << "\n";
    cout << "Reverse \n";
    reverse(array, 10);
    print(array, 10);
    return 0;
}