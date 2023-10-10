/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: randre <randre@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 11:27:24 by randre            #+#    #+#             */
/*   Updated: 2023/10/10 18:25:29 by randre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_recursive_factorial(int nb)
{
	int res;

	if (nb < 0 || nb > 12)
		return (0);
	if (nb == 0)
		return (1);
	res = nb;
	res *= ft_recursive_factorial(nb - 1);
	return (res);
}
