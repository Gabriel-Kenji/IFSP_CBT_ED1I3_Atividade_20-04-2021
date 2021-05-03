#include <iostream>
#include <string.h>
#include <locale.h>
using namespace std;
int main(){
	setlocale(LC_ALL, "");
  char espaco[100],frase1[1000], frase2[1000];
  int tamanhoespaco,tam, i, j;

  printf("\nDigite uma palavra ou frase que e verifique se é um palíndromo: ");
  gets(espaco);

  tamanhoespaco = strlen(espaco);

  for(i=0,j=0;i<tamanhoespaco;i++)
 {
    if(isalpha(espaco[i]))
    {
        frase1[j]=espaco[i];
        j++;
    }
 }

frase1[j]='\0';

tam = strlen(frase1);

for (i=tam-1,j=0;i>=0;i--,j++)
frase2[j] = frase1[i];

frase2[tam] = '\0';


if (strcmpi(frase1,frase2) == 0)
{
	cout <<  "É palindromo!!";
}
else
{
	cout << "Nao é palindromo!!";
}



}
