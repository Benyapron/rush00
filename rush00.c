/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scharoen <scharoen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/24 10:27:50 by scharoen          #+#    #+#             */
/*   Updated: 2025/05/25 13:04:42 by scharoen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	h_line(int x, char o, char dash)
{
	int	w;

	ft_putchar(o);
	if (x >= 3)
	{
		w = 0;
		while (w < x - 2)
		{
			ft_putchar(dash);
			w++;
		}
		ft_putchar(o);
	}
	if (x == 2)
	{
		ft_putchar(o);
	}
	ft_putchar('\n');
}

void	v_line(int x, int y, char ver, char space)
{
	int	h;
	int	s;

	if (y >= 3)
	{
		h = 0;
		while (h < y - 2)
		{
			ft_putchar(ver);
			if (x > 2)
			{
				s = 0;
				while (s < x - 2)
				{
					ft_putchar(space);
					s++;
				}
				ft_putchar(ver);
			}
			ft_putchar('\n');
			h++;
		}
	}
}

void	rush(int x, int y)
{
	char	o;
	char	dash;
	char	ver;
	char	space;

	if (x <= 0 || y <= 0 || x >= __INT_MAX__ || y >= __INT_MAX__)
	{
		return ;
	}
	o = 'o';
	dash = '-';
	ver = '|';
	space = ' ';
	h_line(x, o, dash);
	v_line(x, y, ver, space);
	if (y >= 2)
	{
		h_line(x, o, dash);
	}
}
