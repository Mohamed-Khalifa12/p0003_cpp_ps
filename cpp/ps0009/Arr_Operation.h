#include <iostream>
#include <vector>

using namespace std;

/******************** Core functions ************************/
void arraySwap(vector<int>& arr1, vector<int>& arr2, int arr1_size, int arr2_size);
void elementAdding(vector<int>& arr, int value, int index = -1);

/******************** Prompting functions ************************/
void testCase(vector<int>& arr1, vector<int>& arr2, string s);
void sizePrompting(int &arr1_size, int &arr2_size);
void arrPrompting(int arr_size, vector<int>& arr, string s);


/******************** Util functions ************************/
static void showArr(vector<int>& arr);