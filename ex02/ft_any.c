int	ft_any(char **tab, int(*f)(char*))
{
	int i;

	i = 0;
	while (tab[i] != NULL)
		if ((*f)(tab[i++]))
			return (1);
	return (0);
}
