#include <iostream>
#include <string.h>
#include <locale.h>
#include <Windows.h>
#include <unistd.h>
using namespace std;
unsigned int microseconds;



void gotoxy(short x, short y)
{
	COORD coord = {x, y};
	SetConsoleCursorPosition( GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

void mostra(char s, short x, short y)
{
	gotoxy(x, y);
	cout << s;
}

int main(int argc, char** argv){
	int a,i,b,c,coluna;
	char p[1000];
	
	
	cout << "Digite algo:";
	gets(p);
	cout << p;
	int tamanho = strlen(p); 
	int lin[tamanho], col[tamanho];
	coluna = 60 - tamanho/2;
	for (a=0; a<= tamanho; a++)
	{
		
		col[a] = coluna;
		lin[a] = 4;
		
		mostra(p[a],col[a],lin[a]) ;
		coluna = coluna + 1;		
	}
	for(i=0; i<=tamanho; i++)
	{
		lin[i] = 4;
		for(b=1;b<=15;b++)
		{
			usleep(100000);
			system("cls");
			for (c=0; c<= tamanho; c++)
			{
				if(i==c)
				{
						lin[c] = lin[c] + 1;
						mostra(p[c],col[c],lin[c]) ;
					
				}
				else
				{
					mostra(p[c],col[c],lin[c]) ;
				}
						
			}
	    	
		}
		
	}
    
    return 0;
}
	
	


