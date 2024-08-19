#include "./Arr_Operation.h"

/******************** Core functions ************************/
void arraySwap(vector<int>& arr1, vector<int>& arr2, int arr1_size, int arr2_size)
{
    (arr1_size > arr2_size) ? arr2.resize(arr1_size) : arr1.resize(arr2_size);
    arr1.swap(arr2);
    (arr1_size > arr2_size) ? arr1.resize(arr2_size): arr2.resize(arr1_size);
}

void elementAdding(vector<int>& arr, int value, int index)
{
    if(index == -1)
    {
        arr.push_back(value);
        return;
    }
    
    arr.resize(arr.size() + 1);
    for(int i = arr.size() - 1; i > index; i--)
    {
        arr[i] = arr[i - 1];
    }
    
    arr[index] = value;
}




/******************** Prompting functions ************************/
void testCase(vector<int>& arr1, vector<int>& arr2, string s)
{
    cout << endl;cout << endl;
    cout << s <<" Changing" << endl;
    cout << "First array elements: ";
    showArr(arr1);

    cout << "\n"; 
    cout << "Second array elements: ";
    showArr(arr2);
}

void sizePrompting(int &arr1_size, int &arr2_size)
{
    cout << "Please Enter Number of first array: ";
    cin >> arr1_size;
    cout << "Please Enter Number of second array: ";
    cin >> arr2_size;
}

void arrPrompting(int arr_size, vector<int>& arr, string s)
{
    cout << "Please Enter elements of "<< s <<" array: " << endl;
    for(int i = 0; i <arr_size; i++)
        cin >> arr[i];
}



/******************** Util functions ************************/
static void showArr(vector<int>& arr)
{
    for(int i = 0; i < arr.size(); i++)
        cout << arr[i];
}