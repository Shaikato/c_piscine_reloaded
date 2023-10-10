/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: randre <randre@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 12:31:02 by randre            #+#    #+#             */
/*   Updated: 2023/10/10 12:33:34 by randre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int ft_strlen(char *str)
{
	int i;

	i = 0;
	while (*str)
	{
		str++;
		i++;
	}
	return (i);
}

char	*fr_strdup(char *src)
{
	char	*str;

	str = malloc(sizeof(char) * (ft_strlen(src) + 1));
	while (*src)
	{
		*str = *src;
		src++;
		str++;
	}
	*str = '0';
	return (str);
}