#include <iostream>
using namespace std;

int tcoin=2; //true weight
int fcoin=1; //lighter coin (fake)

int main()
{
int n;
int fakecoin[n];
int coin[n];
int flag=-1;
int sum=0;

cout <<"(Note)The True coin have a value of 2... And the fake coin is lighter with weight of 1 \n" <<endl;
cout <<"Enter the number of coins:" <<endl;
cin>> n;

cout <<"Enter the coins to be weighted ";
for(int i=0;i<n;i++)
{
	cin >> coin[i];
	
	if(coin[i] != 2)
	{
		flag=i;  //the index of the fake coin if there is any
	}
	sum+=coin[i];
}

if(sum*2 == n*2)
{
	cout <<"The coins are ballanced";
}

if(sum*2 != n*2)
{
	cout <<"The coins are not ballanced... and the index of the fake coin is " <<flag;
}

}
