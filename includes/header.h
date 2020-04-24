/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   header.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cosney <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/24 03:33:41 by cosney            #+#    #+#             */
/*   Updated: 2020/04/24 05:07:13 by cosney           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HEADER_H
# define HEADER_H

void	viewtable(char **argv, char a[6][6]);
void	print(char a[][6]);
int		solution(char a[6][6], char n);
int		check_input(int argc, char **argv);
int		*empty_spots(char board[6][6], int *pos, char x);
int		check_position(char bd[6][6], int *pos, char x);

#endif
