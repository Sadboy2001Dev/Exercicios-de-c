/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hpedro <hpedro@student.42.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/13 07:26:07 by hpedro          #+#    #+#             */
/*   Updated: 2025/02/13 07:26:07 by hpedro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdbool.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void ft_escrever_comb(int a, int b, bool ult)
{
	ft_putchar(48 + a / 10);
	ft_putchar(48 + a % 10);
	ft_putchar(' ');
	ft_putchar(48 + b / 10);
	ft_putchar(48 + b % 10);

	if(ult)
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void ft_print_comb2(void)
{
	int a;
	int b;
	bool ult;

	a = 0;

	while(a <= 99)
	{
		b = a + 1;

		while(b <= 99)
		{
			ult = !(a == 98 && b == 99);
			ft_escrever_comb(a, b, ult);
			b++;
		}
		a++;
	}
}
