/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   colle04.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gvilcean <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/17 18:13:35 by gvilcean          #+#    #+#             */
/*   Updated: 2017/09/17 22:12:32 by gvilcean         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

void	ft_print_letter04(int row, int collumn, int x, int y)
{
	if ((row == 1 && collumn == 1) || (row == y && collumn == x &&
				collumn != 1 && row != 1))
		ft_putchar('A');
	else if ((row == 1 && collumn == x) || (row == y && collumn == 1))
		ft_putchar('C');
	else if (row == 1 && collumn != 1 && collumn != x)
		ft_putchar('B');
	else if (row == y && collumn != 1 && collumn != x)
		ft_putchar('B');
	else if (collumn == 1 && row != 1 && row != y)
		ft_putchar('B');
	else if (collumn == x && row != 1 && row != y)
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
			ft_print_letter04(row, collumn, x, y);
			collumn++;
		}
		collumn = 1;
		ft_putchar('\n');
		row++;
	}
}
