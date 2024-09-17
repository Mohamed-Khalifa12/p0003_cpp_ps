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

void elementDeleting(vector<int>& arr, int index)
{
    vector<int>::iterator it = arr.begin();
    if(index == -1)
    {
        arr.pop_back();
        return;
    }
    
    arr.erase(it + index);
}

void elementSwapingDifferentArr(vector<int>& arr1, vector<int>& arr2, int index1, int index2)
{
    swapElement(arr1[index1], arr2[index2]);
}

void elementSwapingSameArr(vector<int>& arr, int index1, int index2)
{
    swapElement(arr[index1], arr[index2]);
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

static void swapElement(int &x, int &y)
{
    int temp = x;
    x = y;
    y = temp;
}