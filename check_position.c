/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_position.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cosney <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/24 03:34:46 by cosney            #+#    #+#             */
/*   Updated: 2020/04/24 19:54:32 by cosney           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ch_up(char board[6][6], int *pos)
{
	int		i;
	int		j;
	char	max;

	i = 1;
	j = 1;
	max = '$';
	board[pos[0]][pos[1]] = '2';
	while (board[i][pos[1]] != '4')
	{
		if (board[i][pos[1]] > max)
		{
			max = board[i][pos[1]];
			j++;
		}
		i++;
	}
	board[pos[0]][pos[1]] = '0';
	if (j != (board[0][pos[1]] - '0'))
		return (1);
	return (0);
}

int		ch_dw(char board[6][6], int *pos)
{
	int		i;
	int		j;
	char	max;

	i = 4;
	j = 1;
	max = '$';
	board[pos[0]][pos[1]] = '2';
	while (board[i][pos[1]] != '4')
	{
		if (board[i][pos[1]] > max)
		{
			max = board[i][pos[1]];
			j++;
		}
		i--;
	}
	board[pos[0]][pos[1]] = '0';
	if (j != (board[5][pos[1]] - '0'))
		return (1);
	return (0);
}

int		ch_lf(char board[6][6], int *pos)
{
	int		i;
	int		j;
	char	max;

	i = 1;
	j = 1;
	max = '$';
	board[pos[0]][pos[1]] = '2';
	while (board[pos[0]][i] != '4')
	{
		if (board[pos[0]][i] > max)
		{
			max = board[pos[0]][i];
			j++;
		}
		i++;
	}
	board[pos[0]][pos[1]] = '0';
	if (j != (board[pos[0]][0] - '0'))
		return (1);
	return (0);
}	

int		ch_rt(char board[6][6], int *pos)
{
	int		i;
	int		j;
	char	max;

	i = 4;
	j = 1;
	max = '$';
	board[pos[0]][pos[1]] = '2';
	while (board[pos[0]][i] != '4')
	{
		if (board[pos[0]][i] > max)
		{
			max = board[pos[0]][i];
			j++;
		}
		i--;
	}
	board[pos[0]][pos[1]] = '0';
	if (j != (board[pos[0]][5] - '0'))
		return (1);
	return (0);
}

int		check_position(char bd[6][6], int *p, char var)
{
	int		index;

	index = 1;
	if (bd[p[0]][p[1]] != '0')
		return (1);
	while (index < 5)
	{
		if (bd[p[0]][index] == var && p[1] != index)
			return (1);
		index++;
	}
	index = 1;
	while (index < 5)
	{
		if (bd[index][p[1]] == var && p[0] != index)
			return (1);
		index++;
	}
	if (var == '2')
	{
		if (ch_up(bd, p) || ch_dw(bd, p) || ch_lf(bd, p) || ch_rt(bd, p))
			return (1);
	}
	return (0);
}
