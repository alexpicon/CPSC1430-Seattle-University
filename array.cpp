//Table with row and columns. Size depends on user input, user inputs numbers in table

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int rows, cols, totalRows = 0, totalColumns = 0;
    int * * arr = nullptr;
    cout << endl << "Input Row: ";
    cin >> rows;
    cout << "Input Column: ";
    cin >> cols;
    arr = new int*[rows];

    cout << endl << endl;
    for (int i = 0; i < rows; i++){
        arr[i] = new int[cols];
        for (int j = 0; j < cols; j++){
            cout << "Input number at Row " << i + 1 << " Col " << j + 1 << ": ";
            cin >> arr[i][j];
        }
    }
    
    cout << endl << endl;
    for(int i = 0; i < rows; i++){
        for(int j = 0; j < cols; j++){
            cout << setw(3) << arr[i][j];
        }
        cout << endl;
    }

    cout << endl << endl;
    for (int i = 0; i < rows; i++){
        for (int j = 0; j < cols; j++){
            totalRows += arr[i][j];
        }
        cout << "The sum of row " << i + 1 << " is " << totalRows << endl;
        totalRows = 0;
    }

    cout << endl << endl;
    for (int i = 0; i < cols; i++){
        for (int j = 0; j < rows; j++){
            totalColumns += arr[j][i];
        }
        cout << "The sum of column " << i + 1 << " is " << totalColumns << endl;
        totalColumns = 0;
    }

    for (int i = 0; i < rows; i++){
        delete [] arr[i];
    }

    delete [] arr;
    cout << endl << endl;
    return 0;
}
