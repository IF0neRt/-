#include <stdio.h>

int read_word(char s[], int *i, char w[])

  int y;

{
	do
	{
	  
	  *i = *i + 1;

	}while (s[i] <= ' ') && (s[i] != '\0');

	y = 0;

	do
	{
		w[y] = s[*i];
		y = y + 1;
		*i = *i + 1;
	}while (s[*i] > ' ');

	w[y] = '\0';

	return y;
}


int palindrom(char s, int l)

int i, y;

{
  i = 0;
  y = l - 1;

  do
  {

  	i = i + 1;
  	y = y - 1;

  }while (i < y) && (s[i] = s[y]);

return (i >= y);
}


int del_palindrom(char s);
int i, z, l;

{
	i = 0;
	z = 0;
 
	do
	{
  		l = read_word(s, &i, w);
  		 if (palindrom(w,l) = 0)
  		 {
  		 	y = 0;
  		 	do
  		 	{
  		 		s[z] = w[y];
  		 		z = z + 1;
  		 		y = y + 1;
  		 	} while (w[y] != '\0');
  		 	s[z++] = ' ';
  		 } 
	}while (s[i] != '\0');

	s[z] = '\0';

}

int main()
//ввод строки(s)
// del_polindrom(s);// Вызов функции удаления слова полиндром
// Вывод строки(s)
// Конец









