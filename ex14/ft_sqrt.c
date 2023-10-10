/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: randre <randre@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 11:34:29 by randre            #+#    #+#             */
/*   Updated: 2023/10/10 18:31:06 by randre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_sqrt(int nb)
{
	long	i;
	long	nbl;

	nbl = nb;
	i = (nb / 2) - 1;
	if (nb <= 0)
		return (0);
	if (nb == 1)
		return (1);
	while(i * i != nbl && i * i > nbl / 2)
		i--;
	if (i * i <= nbl / 2)
		return (0);
	return (i);
}
