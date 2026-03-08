Question 2:
Create a class named Matrix2D using a dynamic 2D array.
Data Members:
•	int rows
•	int cols
•	int** arr
Required Functionalities
1.	bool empty()
Returns true if matrix has zero rows or columns.
2.	bool full()
Returns true if matrix is fully allocated (no NULL rows).
3.	int getRows()
Returns number of rows.
4.	int getCols()
Returns number of columns.
5.	bool insertAt(int r, int c, int value)
Inserts value at position (r, c).
Returns false if index invalid.
6.	int getElement(int r, int c)
Returns element at given index.
7.	void display()
Prints the matrix.
Constructors & Destructor
•	Parameterized constructor with default values.
•	Copy constructor (deep copy).
•	Destructor (deallocate memory properly).
