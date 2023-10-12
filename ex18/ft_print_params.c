/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: randre <randre@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 12:07:41 by randre            #+#    #+#             */
/*   Updated: 2023/10/12 10:57:09 by randre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (*str)
	{
		str++;
		i++;
	}
	return (i);
}

int	main(int argc, char **argv)
{
	int	i;

	i = 0;
	while (i++ < argc - 1)
	{
		while (*argv[i])
		{
			ft_putchar(*argv[i]);
			argv[i]++;
		}
		ft_putchar('\n');
	}
	return (0);
}
