/*Tower of Hanoi is a puzzle game where the player have 3 main towers, and many blocks. the blocks
are placed on the most left tower and the goal of the game is to move these blocks from 
the left most tower to the right most tower, but with a twist. We cannot place a big block on top of 
a small block. This C++ program is a solution for any Tower of Hanoi puzzle no matter the number of 
blocks*/


#include <iostream>
#include <conio.h>
using namespace std;


void Tower(int n, char a, char b, char c)
{

	if(n==1)
	{
		cout << "Move Task 1 from " << a << " to "<<c<<endl;
	}
	else
	{
		Tower(n-1,a,c,b);
		Tower(1,a,b,c);
		Tower(n-1,b,a,c);
	}
}

int main()
{
	int n;
	char a,c,b;
	cout << "Enter the number of tasks: "; 
	cin >> n;
	
	cout << "Enter the Name of the tower: ";
	 cin >>a;
	 
	cout << "Enter the Name of the tower: ";
	 cin >>b;
	 
	cout << "Enter the Name of the tower: ";
	 cin >>c;
	 
	cout <<endl;
	
	Tower(n,a,b,c);
	getch();
	 
	
}

