#include <iostream>
#include <fstream>
#include <locale.h>
#include <string.h>
#include <cstring>
using namespace std;

int main(int argc, char** argv)
{
	setlocale(LC_ALL, "");
	
	ifstream arq("lista.txt");//endereço do arquivo aqui
	
	if(arq.is_open())
	{
		string linha,final,nome,nomeulti;
		char frase[80];
		char nomeult[100];
    	int j = 0;
    	int f = 0;
    	string a[100];
		while( getline(arq, linha) )
		{
			strcpy(frase, linha.c_str());
     		final = "";	
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
		    		if(j==1)
		    		{
		    			nome = a[j];
		    			final = final  + nome + " ";
					}
					else
					{
						nome = a[j];
		    			final = final  + nome[0] + ". ";
					}
		    		
				}
				else
				{
					nome = a[j];
					strcpy(nomeult, nome.c_str());
					int tamanhonome = strlen(nomeult);
					nomeulti = "";
					for(f = 0; f < tamanhonome; f++)
					{
						nomeult[f] = toupper(nomeult[f]) ;
						
						if(tamanhonome == 0)
						{
							nomeulti = nomeult[f];
						}
						else
						{
							nomeulti = nomeulti + nomeult[f];
						}
						
					}
        				

					
					final =  nomeulti +  ", " + final  ;
				}
			}
			cout << final<< endl;
		}
		arq.close();
	}
	else
	{
		cout << "Não foi possível abrir o arquivo";
	}
	
	return 0;
}
