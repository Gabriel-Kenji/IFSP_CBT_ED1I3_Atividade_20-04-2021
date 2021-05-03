#include <iostream>
#include <fstream>
#include <locale.h>
#include <string.h>
#include <cstring>
using namespace std;

int main(int argc, char** argv)
{
	setlocale(LC_ALL, "");
	
	ifstream arq("lista.txt");
	
	if(arq.is_open())
	{
		string linha,final;
		char frase[80];
    	int j = 0;
    	string a[100];
		while( getline(arq, linha) )
		{
			strcpy(frase, linha.c_str());
     
		    int tamanho = strlen(frase); 
		    char *token = strtok(frase, " ");
		    for (int i = 0; i < tamanho; i++) {
		        //cout << token[i] == 0 ? "\\0" : "%c", token[i];
		    }
		    int i = 0;
		    while(token != NULL) {
		    	i = i + 1;
		    	a[i] = token;
		    	//cout << token << endl;
		        //printf(token);
		        
		        token = strtok(NULL, " ");
		        //cout << a[i] << "a" << endl;
		    }
		    for(j=1; j <=i; j++)
		    {
		    	
		    	if(j!=i)
		    	{
		    	
		    		final = final  + a[j] + " ";
				}
				else
				{
					
					final =  a[j]  +", " + final  ;
				}
			}
			cout << final;
		}
		arq.close();
	}
	else
	{
		cout << "Não foi possível abrir o arquivo";
	}
	
	return 0;
}
