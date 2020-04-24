/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solution.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cosney <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/24 04:21:15 by cosney            #+#    #+#             */
/*   Updated: 2020/04/24 19:59:25 by cosney           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		*empty_spots(char board[6][6], int *pos, char var);
int		check_position(char board[6][6], int *pos, char var);

int		solution(char board[6][6], char x)
{
	int		 pos[2];

    empty_spots(board, pos, x);
	if (pos[0] == -1)
		x = x - 1;
	if (pos[0] == -1 && x == '0')
		return (0);
	empty_spots(board, pos, x);
	while (pos[1] < 5)
	{
		if (check_position(board, pos, x) == 0 && board[pos[0]][pos[1]] == '0')
		{
			board[pos[0]][pos[1]] = x;
			if (!solution(board, x))
				return (0);
			board[pos[0]][pos[1]] = '0';
			pos[1] = pos[1] + 1;
		}
		else
			pos[1] = pos[1] + 1;
	}
	return (1);
}
