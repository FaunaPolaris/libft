void	fp_fill_grid(char **grid, int width, int height, char content)
{
	int	i;
	int	j;

	i = 0;
	while (i < height)
	{
		j = -1;
		while (j++ < width)
			grid[i][j] = content;
		grid[i][width] = '\0';
		i++;
	}
}
