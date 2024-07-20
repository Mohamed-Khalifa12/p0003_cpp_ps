#include <iostream>
using namespace std;

const float PI = 3.141f;

enum Shape {circle, square, triangle, rectangle, rhombus, parallelogram};

float area(enum Shape shape, float dimensions[]);

int main()
{
    // prompting user for the shape 1.5/1.5
    int shape, dimensionNum;
    float result;
    cout << "Circle -> 0\t  square -> 1\t  triangle -> 2\t  rectangle -> 3\t  rhombus -> 4\t  parallelogram -> 5\n";
    cout << "Please Select Shape Number : ";
    cin >> shape;

    //error handling 0.5/1
    if(shape > 5 || shape < 0)
    {
        cout << "Error";
        return 1;
    }

    if(shape == circle || shape == square)
        dimensionNum = 1;
    else
        dimensionNum = 2;

    // fill in the dimensions array 2.5/3
    float *dimensions = new float[dimensionNum]; 
    cout << "Please Enter The Dimensions:\n";

    for(int i = 0; i < dimensionNum; i++)
    {
        cin >> dimensions[i];
        if(dimensions[i] <= 0)
        {
            cout << "Dimensions must be positive values" << endl;
            return 2;
        }
    }

    // printing out the area of the shape 1/1
    result = area((enum Shape)shape, dimensions);
    cout << "Area = " << result; 

    delete dimensions;
    
    return 0;
}

float area(enum Shape shape, float dimensions[]){
    float result = 0.0f;

    switch(shape){
        case circle:
            result = PI * dimensions[0] * dimensions[0];
        break;

        case square:
            result = dimensions[0] * dimensions[0];
        break;

        case triangle:
            result = 0.5 * dimensions[0] * dimensions[1];
        break;

        case rectangle:
            result = dimensions[0] * dimensions[1];
        break;

        case rhombus:
            result = 0.5 * dimensions[0] * dimensions[1];
        break;

        case parallelogram:
            result = dimensions[0] * dimensions[1];
        break;

        default:
            result = 0.0f;
        break;
    }

    return result;
}
// great work 😎 9/10 ⭐
