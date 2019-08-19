/*
** EPITECH PROJECT, 2017
** my_sokoban
** File description:
** game.c
*/

#include "my.h"

int	search_player(char *buffer)
{
	int	i;

	i = 0;
	while (buffer[i] != 'P') {
		i++;
	}
	return (i);
}

int	search_goal(char *buffer, int *goal)
{
	int	i;
	int	a;

	i = 0;
	a = 0;
	while (buffer[i] != '\0') {
		if (buffer[i] == 'O') {
			goal[a] = i;
			a++;
		}
		i++;
	}
	return (a);
}

int	chek_goal(char *buffer, int *goal, int a)
{
	int	i;
	int	b;

	i = 0;
	b = a;
	while (i < a) {
		if (buffer[goal[i]] == 'X')
			b--;
		i++;
	}
	return (b);
}

int	game_loop(WINDOW *win, char *buffer)
{
	int	lenght;
	int	goal[100];
	int	a = search_goal(buffer, goal);
	int	b;
	int	keyp;

	waddstr(win, buffer);
	lenght = my_strlen(buffer) + 1;
	while (b != 0) {
		b = chek_goal(buffer, goal, a);
		keyp = getch();
		if (keyp == KEY_RIGHT)
			right(win, buffer);
		if (keyp == KEY_LEFT)
			left(win, buffer);
		if (keyp == KEY_UP)
			up(win, buffer, lenght);
		if (keyp == KEY_DOWN)
			down(win, buffer, lenght);
		if (keyp == ' ')
			return (0);
	}
    return (0);
}
