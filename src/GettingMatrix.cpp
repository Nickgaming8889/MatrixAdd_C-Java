#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

void gettingArrays(int, vector<vector<int>>);

int main(int argc, char const *argv[]) {
    vector<vector<int>> arr;
    int i = 1;
    int row, column;
    int val;

    while (i < 2) {

        cout << "Insert the number of rows: ";
        cin >> row;
        cout << "Insert the number of columns: ";
        cin >> column;

        //Resizing the Vector...
        arr.resize(row, vector<int>(column));

        //saving the array...
        for (int r = 0; r < row; r++) {
            for (int c = 0; c < column; c++) {
                cout << "Insert the value on " << "[" << r << "]" << "[" << c << "]" << ": ";
                cin >> val;
                arr[r][c] = val;
            }
        }

        //Showing the array...
        for (int r = 0; r < row; r++) {
            for (int c = 0; c < column; c++) {
                cout << '[' << arr[r][c] << ']';
            }

            cout << '\n';
        }
    }

    return 0;
}

void gettingArrays(int _size, vector<vector<int>> _arr) {
    string f = "Matrix.txt";
    //Opening file with fstream library
    fstream file;
    file.open(f);

    if (file.is_open()) {
        string content;
        string temp;
        while (getline(file, temp)) {
            
        }

        file.open(f);
        file << "Come On!!!" << endl;
        file.close();
    }
    else {
        cerr << "Common trash" << endl;
    }
}