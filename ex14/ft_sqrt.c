/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: randre <randre@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 11:34:29 by randre            #+#    #+#             */
/*   Updated: 2023/10/12 12:27:01 by randre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_abs(int nb)
{
	if (nb < 0)
		nb = -nb;
	return (nb);
}

int	ft_sqrt(int nb)
{
	double	num;
	double	result;
	double	range;

	result = 1;
	num = nb;
	range = num * 0.0001;
	while (ft_abs(result * result - num) > range)
	{
		result = (result + num / result) / 2;
	}
	if ((int)result == 0)
		return (0);
	if (nb % (int)result == 0)
		return (result);
	return (0);
}
