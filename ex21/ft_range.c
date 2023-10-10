/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: randre <randre@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 12:34:06 by randre            #+#    #+#             */
/*   Updated: 2023/10/10 12:43:27 by randre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*tab;
	int	i;
	int	*start;

	i = min;
	tab = malloc(sizeof(int) * (max - min));
	start = tab;
	while (i < max)
	{
		*tab = i;
		i++;
		tab++;
	}
	return (start);
}
