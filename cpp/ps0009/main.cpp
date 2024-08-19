#include "./Arr_Operation.h"

void promptAllData(int &arr1_size, int &arr2_size, vector<int>& arr1, vector<int>& arr2);

int main()
{
    int arr1_size, arr2_size;
    vector<int> arr1, arr2;

    //Prompting All Data
    promptAllData(arr1_size, arr2_size, arr1, arr2);

    //Testing before Operation
    testCase(arr1, arr2, "Before");

    /******************* OPERATION ****************** */
    //arraySwap(arr1, arr2, arr1_size, arr2_size);
    //elementAdding(arr1, 11);


    //Testing after Operation
    testCase(arr1, arr2, "After");
}

void promptAllData(int &arr1_size, int &arr2_size, vector<int>& arr1, vector<int>& arr2)
{
    // Prompting arrays sizing
    sizePrompting(arr1_size, arr2_size);

    // resizing the arrays
    arr1.resize(arr1_size);
    arr2.resize(arr2_size);

    // Prompting first array elements
    arrPrompting(arr1_size, arr1, "first");

    // Prompting second array elements
    arrPrompting(arr2_size, arr2, "second");
}

