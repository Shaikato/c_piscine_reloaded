/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: randre <randre@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 11:19:55 by randre            #+#    #+#             */
/*   Updated: 2023/10/10 11:35:39 by randre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_iterative_factorial(int nb)
{
	int res;
	int i;

	i = 1;
	res = 1;
	if (nb < 0 || nb > 31)
		return (0);
	if (nb == 0)
		return (1);
	while (i < nb + 1)
	{
		res *= i;
		i++;
	}
	return (res);
}
