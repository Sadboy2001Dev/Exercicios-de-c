/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hpedro <hpedro@student.42.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/13 07:21:35 by hpedro          #+#    #+#             */
/*   Updated: 2025/02/13 07:21:35 by hpedro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void ft_print_alphabet(void)
{
	char c = 'a';

	while(c <= 'z'){
		write(1, &c, 1);
		c++;
	}
}
