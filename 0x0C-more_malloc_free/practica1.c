#include <stdio.h>
#include <stdlib.h>

void copy_string();
char **matriz(int files, int colum);


void print_grid(char **grid, int width, int height)
{
	int w;
	int h;

	h = 0;
	while (h < height)
	{
		w = 0;
		while (w < width)
		{
			printf("%c ", grid[h][w]);
			w++;
		}
		printf("\n");
		h++;
	}   
}


int main(void)
{
	char **grid;

	int m = 0, f = 4, c = 4;
	m = c - 1;

	grid = matriz(f, c);
	if (grid == '\0')
	{
		return (1);
	}
	for (int i = 0; i < f; i++)
	{
		for (int j = 0; j < c; j++)
		{
			if (i == j)
			{
				grid[i][j] = 'X'; 
			}
		}
	}

	for (int i = 0; i < f; i++)
	{

		if (m >= 0)
		{

			grid[i][m] = 'X'; 

		}
		m--;
	}
	print_grid(grid, 4, 4);
	printf("\n");

	print_grid(grid, 4, 4);
	return (0);
}


char **matriz(int files, int colum)
{
	char **f;

	f = malloc(files * sizeof(char *));

	for (int i = 0; i < files; i++)
	{
		f[i] = malloc(colum * sizeof(char));
	}

	for (int i = 0; i < files; i++)
	{
		for (int j = 0; j < colum; j++)
		{
			f[i][j] = '0';
		}
	}
	return (f);
}

void copy_string(){   

	char s[] = "hola mi gente";
	char *p = &s;
	int large, f, c = 0, i, j;
	char *x;


	for (; *p != '\0'; p++)
	{
		printf("direccion memoria = %p\n", p);
		printf("valor en el arreglp = %c\n", *p);
		c++;
	}

	large = c * 2;
	x = malloc(large * sizeof(char) + 3);

	f = 0;
	for (i = 0; i < 2; i++)
	{

		for (j = 0; j < c; j++)
		{
			x[f] = s[j];
			f++;
		}
		if (f == c)
		{
			x[f] = ' ';
			f++;
		}
	}
	x[f] = '\0';  
					         
}
