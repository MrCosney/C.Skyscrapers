/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_spot.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cosney <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/24 03:34:35 by cosney            #+#    #+#             */
/*   Updated: 2020/04/24 05:03:35 by cosney           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		*empty_spots(char board[][9], int *pos, char n, int k)
{
	int x;
	int y;
	int j;
	int count;

	x = 1;
	while (x < (k + 1))
	{
		count = 0;
		j = 1;
		while (j < (k + 1))
		{
			if (board[x][j] == n)
				count++;
		    j++;
		}
		if (count < 1)
		{
			y = 1;
			while (y < (k + 1))
			{
				if (board[x][y] == '0')
				{
					pos[0] = x;
					pos[1] = y;
					return (pos);
				}
				y++;
			}
		}
		x++;
	}
	pos[0] = -1;
	return (0);
}
