void	fp_fill_grid(char **grid, int size, char content)
{
	int	i;
	int	j;

	i = 0;
	while (i < size)
	{
		j = -1;
		while (j++ < size)
			grid[i][j] = content;
		grid[i][size] = '\0'
	}
}
