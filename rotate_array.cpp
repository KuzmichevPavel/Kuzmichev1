#include"library.h"
#include"function.h"

float* rotate_array(float* array, int size)
{
    system("cls");
    cout << "Initial array: " << endl;
    Output_array(array, size);
    cout << endl << "You must enter the interval [a, b]. Integer elements of this interval will be output" << endl;
    cout << "first, then the rest of the array." << endl;
    int a, b, k=0;
    cout << "Enter the beginning of the intveral (a): ";
    cin >> a;
    cout << "Enter the end of the intveral (b): ";
    cin >> b;

    system("cls");
    cout << "Initial array: " << endl;
    Output_array(array, size);

    float* array2 = new float[size];
    float* array3 = new float[size];
    int schet1=0,schet2=0;
    
    for (int i = 0, j = 0,z=0; i < size; ++i)
        if ((array[i] >= a) && (array[i] <= b) && ((array[i]) == int(array[i])))
        {
            array2[j] = array[i];
            array[i] = 0;
            ++j;
            schet1++;
        }
        else {
            array3[z] = array[i];
            array[i] = 0;
            z++;
            schet2++;
        }
    for (int i = 0; i < schet1; ++i) {
        array[i] = array2[i];
    }
    for (int i = 0; i < schet2; ++i) {
        array[i+schet1] = array3[i];
    }

    cout << endl << "The resulting array: " << endl;
    Output_array(array, size);
    delete array2;
    delete array3;
    return array;
}