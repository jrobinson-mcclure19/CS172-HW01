////////////////////////////
// Jalen Robinson-McClure
// May 24th, 2017
// CS 172
// EX01
////////////////////////////

//////////////////////////////////////
// Ex01_01
// A) When a program runs on a computer, the part of the computer that carries out the instructions is called the Central processing unit. (CPU)
//B) When a program runs on a computer it is stored in a storage device
//C) When a program is not running it is stored on a disk
// D) a bit is a binary digit like 0 or 1
//E) a byte in memory is identified by a unique number called its unique adress
//F) In modern computor systems a byte consists of 8 bits
//G) An operating system (is all of the above)
//H) Application Software is any sowftware that runs with support of the operating system
////////////////////////////////////////


#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>
using namespace std;

// called functions
void timesTwo(int &numb)
{
	numb = numb * 2;
}
int add(int numb1, int numb2)
{
	return numb1 + numb2;
}

void addOne(int &add)
{
	add++;
}
void output(int arr[], int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << endl;
	}
}

void search(int arr[], int size)
{
	int value;
	bool isInArr = false;
	cout << "Enter a value " << endl;
	cin >> value;

	int i = 0;
	do {
		if (arr[i] == value)
		{
			isInArr = true;
			cout << "The value is in the array" << endl;
		}
		i++;
	} while (i < size);
	if (isInArr == false) {
		cout << "The value is not in the array" << endl;
	}
}

/*
int timesTwo(int numb)
{
	return numb * 2;
}
*/

// Ex01_02
void ex02()
{
// EX01_02a
	cout << "EX01_01a" << endl;
	// turn to bool
	bool hasPassedTest;
	// initialize
	hasPassedTest = true;
	// tell user true or false
	cout << hasPassedTest << endl;
	cout << endl; 

// EX01_02b
	cout << "EX01_01b" << endl;
	// random generator
	srand(time(0));
	// declare variables
	int x;
	int y;
	// pull random number
	x = rand() % 100;
	y = rand() % 100;
	// tell user the values
	cout << "x is: " << x << endl;
	cout << "y is: " << y << endl;
	// tell user the comparison of the values
	if (x > y)
	{
		cout << "x is greater than y" << endl;
	}
	else if (x < y)
	{
		cout << "y is greater then x" << endl;
	}
	else if (x = y)
	{
		cout << "x is equal to y" << endl;
	}
	cout << endl;

// EX01_02c
	cout << "EX01_01c" << endl;
	//declare variable 
	int numberOfShares;
	// prompt user for a value
	cout << "Enter a vaule: " << endl;
	cin >> numberOfShares;
	cout << "Your number is " << numberOfShares << endl;
	// compare numbers
	// less then 100
	if (numberOfShares < 100)
	{
		cout << "The value of this number is less than 100." << endl;
	}
	// greater than or equal to 100
	else if (numberOfShares >= 100)
	{
		cout << "The value of the number is not less then 100" << endl;
	}
	cout << endl;
// EX01_02d
	// declare variables
	int boxWidth;
	int bookWidth;
	// prompt user for box width
	cout << "What is the width of the Box: " << endl;
	cin >> boxWidth;
	cout << "What is the width of the book: " << endl;
	cin >> bookWidth;
	// check if divisible 
	boxWidth % bookWidth;
	// display if it is or is not divisible 
	if (boxWidth % bookWidth == 0)
	{
		cout << "The box width is evenly divisible by the book width. " << endl;
	}
	else
	{
		cout << "The box width is not evenly divisible by the book width" << endl;
	}
	cout << endl; 
// EX01_02e
	cout << "EX01_01e" << endl;
	//Declare Variable
	int shelfLife;
	int temp;
	// prompt user for shelf life of Chocolate and temp
	cout << "What is the shelf life of the box of chocolate" << endl;
	cin >> shelfLife;
	cout << "What is the outside temperature: " << endl;
	cin >> temp;
	// Subtraction
	if (temp > 90)
	{
		int answer;
		answer = shelfLife - 4;
		cout << "The shelf life is now " << answer << endl;
	}
	else if (temp <= 90)
	{
		cout << "The shelf life is still " << shelfLife << endl;
	}
	cout << endl; 
}

// Ex01_03
void ex03()
{
	cout << "EX01_02a" << endl;
	// ex01_03a
	// Variables
	double area;
	double side;
	double diagonal;
	double work;

	// Ask User for the area of the square
	cout << "What is the area of the square (in square units)? " << endl;
	cin >> area;

	// Find the diagonal 
	side = sqrt(area);
	work = ((side * side) * 2);
	diagonal = sqrt(work);
	cout << "The diagonal of the square is " << diagonal << " units" << endl;
	cout << endl;

	cout << "EX01_02b";
	// ex01_03b
	//variables
	char answer;
	// prompt user to write yes or no
	cout << "type in Y or N" << endl;
	cin >> answer;
	if (answer == 'y' || answer == 'Y')
	{
		cout << "Yes" << endl;
	}
	else if (answer == 'n' || answer == 'N')
	{
		cout << "No" << endl;
	}
	else
	{
		cout << "Not a prpoper character" << endl;
	}
	cout << endl;


//ex01_03c
	char tab;
	tab = '\t';
	cout << endl;
//ex01_03d
	cout << "EX01_02d" << endl;
	// Variables
	string mailingAddress;
	// propmt user for mailing adress
	cout << "What is your mailing adress" << endl;
	cin.ignore();
	getline(cin, mailingAddress);
	cout << "Your mailing address is: " << mailingAddress << endl;
	cout << endl;

//ex01_03e
	string empty;
	cout << endl;
}

void ex04()
{
//ex01_04a
	// variable
	cout << "EX01_03a" << endl;
	int number;
	int cube;
	// prompt user
	cout << "Input a number between 1 and 10";
	cout << endl;
	cin >> number;
	cout << endl;
	// while loop
	while (number >= 11)
	{
		cout << "Not valid try again. " << endl;
		cout << "Input a number between 1 and 10" << endl;
		cin >> number;
		cout << endl;
	}
	cout << "good job" << endl;
//ex01_04b
	cout << "EX01_03b" << endl;
	
	for (int i = 0; i < number; i++)
	{
		int want;
		want = i + 1;
		cube = (want * want * want);
		cout << cube << endl;
	}
	cout << endl;
//ex01_04c
	cout << "EX01_03c" << endl;
	int astrix = 0;
	do
	{
		cout << "*" << endl;
		astrix++;
	} while (astrix < number);
	cout << endl;
//ex01_04d
	cout << "Ex01_03d" << endl;
	int even = 0;
	for (int i = 0; i <= 40; i = i + 2)
	{
		cout << even << endl;
		even = even + 2;
	}
//ex01_04e
	cout << "EX01_03e" << endl;
	timesTwo(number);
	cout << number << endl;
	cout << endl;
//ex01_04f
	cout << "Ex01_03f" << endl;
	srand(time(NULL));
	int rand1 = rand() % 20;
	int rand2 = rand() % 20;
	cout << "Your first number is: " << rand1 << endl;
	cout << "Your second number is: " << rand2 << endl;
	int randAnswer = add(rand1, rand2);
	cout << randAnswer << endl;
	cout << endl;
//ex01_04g
	cout << "EX01_03g" << endl;
	srand(time(NULL)); 
	int add = rand() % 20;
	addOne(add);
	cout << add << endl;
	cout << endl;
}

// EX01_05
void ex05()
{
//ex01_05a
	cout << "EX01_04a" << endl;
	//variables
	const int size = 5;
	int j[size];
	for (int i = 0; i < size; i++)
	{
		cout << "enter a number" << endl;
		cin >> j[i];
	}
	cin.ignore();
	for (int i = 0; i < 5; i++)
	{
		cout << j[i] << " ";
	}
	cout << endl;
//ex01_05b
	cout << "EX01_04b" << endl;
	int sum;
	int product;
	sum = j[0] + j[1] + j[2] + j[3] + j[4];
	cout << "The sum of the number is: " << sum << endl;
	product = j[0] * j[1] * j[2] * j[3] * j[4];
	cout << "The product of the number is: " << product << endl;
	cout << endl;
//ex01_05c
	cout << "EX01_04c" << endl;
	output(j, size);
	cout << endl;
//ex01_05d
	cout << "EX01_04d" << endl;
	search(j, size);
	cout << endl;
}

int main()
{
	ex02();
	ex03();
	ex04();
	ex05();
	return 0; 
}
