/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cosney <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/24 03:34:21 by cosney            #+#    #+#             */
/*   Updated: 2020/04/24 19:56:52 by cosney           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	viewtable(char **argv, char board[6][6]);
void	print(char	board[6][6]);
void	ft_putstr(char *str);
int		solution(char board[6][6], char x);
int		check_input(int argc, char **argv);


int		main(int argc, char **argv)
{
	char	board[6][6];
	char	value;

	value = '4';
	if (check_input(argc, argv))
    {
		ft_putstr("Error\n");
		return (0);
	}
	viewtable(argv, board);
	if (solution(board, value))
	{
		ft_putstr("Error\n");
		return (0);
	}
	print(board);
	return (0);
}
