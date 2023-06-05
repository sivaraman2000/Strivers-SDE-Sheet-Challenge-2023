#include<bits/stdc++.h>
using namespace std;

void setZeros(vector<vector<int>> &matrix){
	int col0 = 1, rows = matrix.size(), cols = matrix[0].size();

	// Filling 0s at the dummy arrays
    for (int i = 0; i < rows; i++) {
        // If 0th Column has value "0", then the col0 value to be "false"
        if (matrix[i][0] == 0)
        col0 = 0;
        // Checks from 1st Column not 0th Column
        for (int j = 1; j < cols; j++)
        if (matrix[i][j] == 0)
            matrix[i][0] = matrix[0][j] = 0;
        // Same row 0th column // Same column 0th row
    }
    //Checking and Filling 0s in the matrix
	//Checking it in Reverse Order
	for(int i = rows-1;i>=0;i--){
		for(int j = cols-1;j>=1;j--) // Checks upto 1st Column not 0th Column
			if(matrix[i][0] == 0 || matrix[0][j] == 0) //If any row or column dummy array is 0, then put 0 in the matrix
				matrix[i][j] = 0;
		if(col0 == 0) // Checks for every row from Reverse
			matrix[i][0] = 0; // 0th Column
	}
}
void printMatrix(vector<vector<int>> &matrix){
	int row = matrix.size();
	int col = matrix[0].size();
	for(int i=0;i<row;i++){
		for(int j=0;j<col;j++){
			cout << matrix[i][j] << " ";
		}
		cout << endl;
	}
}
int main(){
	vector<vector<int>> matrix = {
		{7,19,8},
		{4,21,0}
	};
	setZeros(matrix);
	printMatrix(matrix);
	return 0;
}
