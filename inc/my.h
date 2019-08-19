/*
** EPITECH PROJECT, 2017
** my_sokoban
** File description:
** 
*/

#ifndef MY_H_
#define MY_H_

#include <fcntl.h>
#include <curses.h>
#include <termios.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>

int	search_player(char *buffer);
int	search_goal(char *buffer, int *goal);
int	chek_goal(char *buffer, int *goal, int a);
int	game_loop(WINDOW *win, char *buffer);
void	down(WINDOW *win, char *buffer, int lenght);
void	up(WINDOW *win, char *buffer, int lenght);
void	left(WINDOW *win, char *buffer);
void	right(WINDOW *win, char *buffer);
int	my_strlen(char *);

#endif
