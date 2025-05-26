/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scharoen <scharoen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/24 12:26:03 by scharoen          #+#    #+#             */
/*   Updated: 2025/05/25 12:52:37 by scharoen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	h_line(int x, char a, char c, char b)
{
	int	w;

	ft_putchar(a);
	if (x >= 3)
	{
		w = 0;
		while (w < x - 2)
		{
			ft_putchar(b);
			w++;
		}
		ft_putchar(c);
	}
	if (x == 2)
	{
		ft_putchar(c);
	}
	ft_putchar('\n');
}

void	v_line(int x, int y, char b, char space)
{
	int	h;
	int	s;

	if (y >= 3)
	{
		h = 0;
		while (h < y - 2)
		{
			ft_putchar(b);
			if (x > 2)
			{
				s = 0;
				while (s < x - 2)
				{
					ft_putchar(space);
					s++;
				}
				ft_putchar(b);
			}
			ft_putchar('\n');
			h++;
		}
	}
}

void	rush(int x, int y)
{
	char	a;
	char	b;
	char	c;
	char	space;

	if (x <= 0 || y <= 0 || x >= __INT_MAX__ || y >= __INT_MAX__)
	{
		return ;
	}
	a = 'A';
	b = 'B';
	c = 'C';
	space = ' ';
	h_line(x, a, c, b);
	v_line(x, y, b, space);
	if (y >= 2)
	{
		h_line(x, c, a, b);
	}
}
