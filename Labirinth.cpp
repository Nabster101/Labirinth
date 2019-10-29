#include<iostream>
#include<string>
#include<cstdlib>
#include <conio.h>
using namespace std;
int mosse;
int main()
{
	int risp;
	int x = 0, y = 0;
	char lab[4][4] = {{'+','+','+','+'},{'+','+','+','+'},{'+','+','+','+'},{'+','+','+','+'}};
	int n_trappole, px, py;
	cout<<"Quante trappole vuoi?"<<endl;
	cin>>n_trappole;
	int trap[n_trappole][2];
	cout<<"Dove le vuoi queste trappole?"<<endl;	
	for(int i=0; i<n_trappole; i++)
	{
		cout<<"trappola "<< i+1<<": ";
		cin >> px >> py;
		trap[i][0] = px;
		trap[i][1] = py;
		lab[px][py] = '*';
	}
	do{
	system("cls");
	lab[x][y] = 'T';
	lab[3][3] = 'F';
	for(int i=0; i<4; i++)
	{
		for(int j = 0; j<4; j++)
		{
			cout<<lab[i][j] << " ";
		}
		cout << endl;
	}
	cout<<"Dove ti vuoi muovere?"<<endl;
	risp = getch();
	lab[x][y] = '+';
	switch(risp)
	{
		case 'q':
		//	alto sinistra
			if(lab[x-1][y-1] == '*') break;
			if(x-1 < 0 || y-1 < 0) break; 
			x--; y--;
			break;
		case 'd':
		//	destra
			if(lab[x][y+1] == '*') break;
			if(y+1 > 3) break; 
			y++;
			break;			
		case 'e':
		// alto destra
			if(lab[x-1][y+1] == '*') break;
			if(x-1 < 0 || y+1 > 3) break; 
			x--; y++;
			break;
		case 'a':
		//	sinistra
			if(lab[x][y-1] == '*') break;
			if(y-1 < 0) break; 
			y--;
			break;
		case 'w':
		//	sopra
			if(lab[x-1][y] == '*') break;
			if(x-1 < 0) break; 
			x--;
			break;
		case 'z':
		//	basso sinistra
			if(lab[x+1][y-1] == '*') break;
			if(x+1 > 3 || y-1 < 0) break; 
			x++; y--;
			break;
		case 's':
		//	sotto
			if(lab[x+1][y] == '*') break;
			if(x+1 > 3) break; 
			x++;
			break;
		case 'c':
		// basso destra
			if(lab[x+1][y+1] == '*') break;
			if(x+1 > 3 || y+1 > 3) break; 
			x++; y++;
			break;
	}
	if(x == 3 && y == 3) break;
	}while(true);
	cout << "HAI VINTO!";
	return 0;
}


