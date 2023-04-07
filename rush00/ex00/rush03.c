/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andrgonc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/04 17:46:57 by andrgonc          #+#    #+#             */
/*   Updated: 2023/03/05 16:30:58 by andrgonc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	print_line(int a, int x)
{
	while (a <= x)
	{
		if (a == 1)
		{
			ft_putchar('A');
			a++;
		}
		else if (a == x)
		{
			ft_putchar('C');
			a++;
		}
		else
		{
			ft_putchar('B');
			a++;
		}
	}
}

void	print_col(int a, int x)
{
	while (a <= x)
	{
		if (a == 1 || a == x)
		{
			ft_putchar('B');
			a++;
		}
		else
		{
			ft_putchar(' ');
			a++;
		}
	}
}

void	rush(int x, int y)
{
	int	a;
	int	b;

	a = 1;
	b = 1;
	while (b <= y)
	{
		if (b == 1 || b == y)
		{
			print_line(a, x);
		}
		else
		{
			print_col(a, x);
		}
		a = 1;
		ft_putchar('\n');
		b++;
	}	
}
