#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main() {

	int a[5][5];
	int b[5][5];
	int rslt[5][5];
	
	int row, column, row2, column2;
	
	cout << "Enter rows matrix 1 = ";
	cin >> row;
	
	cout << "Enter Columns matrix 1 = ";
	cin >> column;


		

			
		
		
	cout << "First Matrix Number";
	for(int i = 0 ; i < row; i++)
	for(int j = 0 ; j < column; j++)
{
	cout << endl;
	cin >> a[i][j];	
}


	for(int i = 0 ; i < row; i++)
{
	for(int j = 0 ; j < column; j++)
	
	cout << a[i][j] << " ";
	cout << endl;
}

	cout << "Enter rows matrix 2 = ";
	cin >> row2;
	
	cout << "Enter Columns matrix 2 = ";
	cin >> column2;



	cout << "Enter Second Matrix Number";
	for(int h = 0; h< row2; h++) 
	for(int k = 0 ; k < column2; k++)
{
	cout << endl;
	cin >> b[h][k];
}
// Display Matrix B 
	for(int i = 0 ; i < row2; i++)
{
	for(int j = 0 ; j < column2; j++)
	cout << b[i][j] << " "; 
	cout << endl;
}
	
	
	return 0;
}
