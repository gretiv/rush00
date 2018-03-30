/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   colle00.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gvilcean <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/17 16:58:01 by gvilcean          #+#    #+#             */
/*   Updated: 2017/09/18 01:18:00 by gvilcean         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

void	ft_print_letter00(int row, int collumn, int x, int y)
{
	if ((row == 1 && collumn == 1) || (row == 1 && collumn == x))
		ft_putchar('o');
	else if ((row == y && collumn == 1) || (row == y && collumn == x))
		ft_putchar('o');
	else if (row == 1 && collumn != 1 && collumn != x)
		ft_putchar('-');
	else if (row == y && collumn != 1 && collumn != x)
		ft_putchar('-');
	else if (collumn == 1 && row != 1 && row != y)
		ft_putchar('|');
	else if (collumn == x && row != 1 && row != y)
		ft_putchar('|');
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
			ft_print_letter00(row, collumn, x, y);
			collumn++;
		}
		collumn = 1;
		ft_putchar('\n');
		row++;
	}
}
