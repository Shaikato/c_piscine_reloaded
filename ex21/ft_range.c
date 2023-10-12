/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: randre <randre@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 12:34:06 by randre            #+#    #+#             */
/*   Updated: 2023/10/12 11:07:09 by randre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*tab;
	int	i;
	int	*start;

	i = min;
	if (min >= max)
		return (0);
	tab = malloc(sizeof(int) * (max - min));
	if (!tab)
		return (0);
	start = tab;
	while (i < max)
	{
		*tab = i;
		i++;
		tab++;
	}
	return (start);
}
