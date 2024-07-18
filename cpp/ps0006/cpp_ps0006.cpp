#include <iostream>
using namespace std;

void special_counter(int end, int start, int step);
void special_counter(int end, int start);
void special_counter(int end);

int main()
{
    special_counter(20);
    cout << "\n";
    special_counter(20, 10);
    cout << "\n";
    special_counter(20, 10, 5);
    cout << "\n";
    special_counter(10, 20, -5);
    cout << "\n";
    special_counter(20, 10, -5); 

    return 0;
}

void special_counter(int end){

    for (int i = 0; i <= end; (end > 0 ? i++ : i--))
    {
        cout << i << "\t";
    }
}

void special_counter(int end, int start){

    for (int i = start; i <= end; (end > start ? i++ : i--))
    {
        cout << i << "\t";
    }
}

void special_counter(int end, int start, int step){
    // error handling
    if((end > start) && step < 0){
        cout << "Error";
        return;
    }

    if((end < start) && step > 0){
        cout << "Error";
        return;
    }

    // proccess
    for (int i = start; i <= end; i += step)
    {
        cout << i << "\t";
    }
}
