/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   colle01.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gvilcean <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/17 19:49:29 by gvilcean          #+#    #+#             */
/*   Updated: 2017/09/17 22:04:44 by gvilcean         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

void	ft_print_letter01(int x, int y, int row, int collumn)
{
	if ((row == 1 && collumn == 1) || (row == y && collumn == x &&
				row != 1 && collumn != 1))
		ft_putchar('/');
	else if ((row == 1 && collumn == x) || (row == y && collumn == 1))
		ft_putchar('\\');
	else if (row == 1 && collumn != 1 && collumn != x)
		ft_putchar('*');
	else if (row == y && collumn != 1 && collumn != x)
		ft_putchar('*');
	else if (collumn == 1 && row != 1 && row != y)
		ft_putchar('*');
	else if (collumn == x && row != 1 && row != y)
		ft_putchar('*');
	else
		ft_putchar(' ');
}

void	colle(int x, int y)
{
	int row;
	int collumn;

	row = 1;
	collumn = 1;
	while (row <= y)
	{
		while (collumn <= x)
		{
			ft_print_letter01(x, y, row, collumn);
			collumn++;
		}
		ft_putchar('\n');
		collumn = 1;
		row++;
	}
}
