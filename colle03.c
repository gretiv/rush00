/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cole03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gvilcean <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/16 22:43:36 by gvilcean          #+#    #+#             */
/*   Updated: 2017/09/17 22:07:11 by gvilcean         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

void	print_letter03(int row, int col, int x, int y)
{
	if ((row == 1 && col == 1) || (row == y && col == 1))
		ft_putchar('A');
	else if ((row == 1 && col == x) || (row == y && col == x))
		ft_putchar('C');
	else if (row == 1 && col != 1 && col != x)
		ft_putchar('B');
	else if (row == y && col != 1 && col != x)
		ft_putchar('B');
	else if (col == 1 && row != 1 && row != y)
		ft_putchar('B');
	else if (col == x && row != 1 && row != y)
		ft_putchar('B');
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
			print_letter03(row, collumn, x, y);
			collumn++;
		}
		collumn = 1;
		ft_putchar('\n');
		row++;
	}
}
