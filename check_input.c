/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_input.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cosney <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/24 04:53:38 by cosney            #+#    #+#             */
/*   Updated: 2020/04/24 05:19:42 by cosney           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		check_input(int argc, char **argv, int k)
{
	int		i;

	i = 0;
	if (argc != 2)
		return (1);
	while (i < (8 * k - 1))
	{
		if (argv[1][i] < '1' || argv[1][i] > (k + '0'))
			return (1);
		i = i + 2;
	}
	i = 1;
	while (i < (8 * k - 1))
	{
		if (argv[1][i] != ' ')
			return (1);
		i = i + 2;
	}
	if (argv[1][8 * k - 1] != '\0')
		return (1);
	return (0);
}
