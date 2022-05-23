#include <iostream>
using namespace std;

void getArray(int[], int);
int getNum(int& n);
int count(int[], int, int);

int main()
{
    int num;
    const int SIZE = 5;
    int list[SIZE];

    getArray(list, SIZE);

    cout << endl;

    num = getNum(num);

    cout << endl;

    cout << "There is/are " << count(list, SIZE, num) << " element(s) greater than the number you put in.\n";


    return 0;
}

int getNum(int& num1)
{
    cout << "Please enter a number.\n";
    cin >> num1;

    return num1;
}

void getArray(int arr[], int size)
{
    int element;

    cout << "You will enter numbers to add to an int array.\n";

    for (int i = 0; i < size; i++)
    {
        cout << "Please enter a number to add to element " << i << " of the array:\n";
        cin >> element;
        arr[i] = element;
    }
}

int count(int arr[], int size, int num2)
{
    int counter = 0;
    int num3 = num2;

    for (int i = 0; i < size; i++)
    {
        if (arr[i] > num2)
            counter++;
    }


    return counter;
}
