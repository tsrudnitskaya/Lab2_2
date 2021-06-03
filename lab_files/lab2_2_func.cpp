#include "lab2_2_func.h"

void generateArrayElements(int arrayWidth, int min, int max, int* Arr) {
    srand(time(0));

    for (int i = 0; i < arrayWidth; ++i)
        Arr[i] = getRandomNumber(min, max);
}

String^ formArrayOut(int arrayWidth, int* Arr)
{
    String^ text = "";
    for (int i = 0; i < arrayWidth; ++i)
    {
        text += Arr[i].ToString() + " ";
    }
    return text;
}



