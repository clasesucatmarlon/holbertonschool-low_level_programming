/**
 * print_name - print name
 * @name: name input
 * @f: pointer function
 * Return: void
 */

void print_name(char *name, void (*f)(char *))
{

	if (f)
	{
		(*f)(name);
	}
}
