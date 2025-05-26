/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scharoen <scharoen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/24 11:38:18 by scharoen          #+#    #+#             */
/*   Updated: 2025/05/25 13:08:38 by scharoen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	h_line(int x, char slash, char backslash, char star)
{
	int	w;

	ft_putchar(slash);
	if (x >= 3)
	{
		w = 0;
		while (w < x - 2)
		{
			ft_putchar(star);
			w++;
		}
		ft_putchar(backslash);
	}
	if (x == 2)
	{
		ft_putchar(backslash);
	}
	ft_putchar('\n');
}

void	v_line(int x, int y, char star, char space)
{
	int	h;
	int	s;

	if (y >= 3)
	{
		h = 0;
		while (h < y - 2)
		{
			ft_putchar(star);
			if (x > 2)
			{
				s = 0;
				while (s < x - 2)
				{
					ft_putchar(space);
					s++;
				}
				ft_putchar(star);
			}
			ft_putchar('\n');
			h++;
		}
	}
}

void	rush(int x, int y)
{
	char	slash;
	char	backslash;
	char	star;
	char	space;

	if (x <= 0 || y <= 0 || x >= __INT_MAX__ || y >= __INT_MAX__)
	{
		return ;
	}
	slash = '/';
	backslash = '\\';
	star = '*';
	space = ' ';
	h_line(x, slash, backslash, star);
	v_line(x, y, star, space);
	if (y >= 2)
	{
		h_line(x, backslash, slash, star);
	}
}
