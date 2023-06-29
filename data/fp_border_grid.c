void	fp_border_grid(char **grid, int width, int height, char c)
{
	int	x;
	int	y;

	y = 0;
	while (y < height)
	{
		x = 0;
		while (x < width)
		{
			if (y == 0 || y == height - 1)
				grid[y][x] = c;
			if (x == 0 || x == width - 1)
				grid[y][x] = c;
			x++;
		}
		y++;
	}
}
