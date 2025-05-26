/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plimmong <plimmong@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/25 00:59:31 by plimmong          #+#    #+#             */
/*   Updated: 2025/05/25 01:47:07 by plimmong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	choose(int w, int l, int row, int col)
{
	if (row == 1 && (col == 1 || col == w))
	{
		ft_putchar('A');
	}
	else if (row == 1)
	{
		ft_putchar('B');
	}
	else if (row == l && (col == 1 || col == w))
	{
		ft_putchar('C');
	}
	else if (col == 1 || col == w)
	{
		ft_putchar('B');
	}
	else if (row == l || col == w)
	{
		ft_putchar('B');
	}
	else
	{
		ft_putchar(' ');
	}
}

void	rush(int x, int y)
{
	int	row;
	int	col;

	if (x >= 0 && y >= 0 && x < __INT_MAX__ && y < __INT_MAX__)
	{
		row = 1;
		while (row <= y)
		{
			col = 1;
			while (col <= x)
			{
				choose(x, y, row, col);
				col++;
			}
			ft_putchar('\n');
			row++;
		}
	}
}
