/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_bits.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssnelgro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/09 19:16:11 by ssnelgro          #+#    #+#             */
/*   Updated: 2018/03/09 19:37:00 by ssnelgro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void print_bits(unsigned char thebits)
{
	int digit = 0b10000000;
	int	res;
	
	int i = 0;
	while (i < 8)
	{
		res = (thebits & digit);
		res = (res) ? '1': '0';
		write (1, (char *)&res, 1);
		digit = digit >> 1;
		i++;
	}
}

int main(void)
{
	print_bits(11);
	return (0);
}
