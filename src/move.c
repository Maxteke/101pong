/*
** EPITECH PROJECT, 2017
** my_sokoban
** File description:
** moove
*/

#include "my.h"

void    down(WINDOW *win, char *buffer, int lenght)
{
	int   i;

	wclear(win);
	i = search_player(buffer);
	if (buffer[i + lenght] == 'X' && buffer[i + lenght + lenght] != '#'
	    && buffer[i + lenght + lenght] != 'X') {
		buffer[i] = ' ';
		buffer[i + (lenght + lenght)] = 'X';
		buffer[i + lenght] = 'P';
	} else if (buffer[i + lenght] != '#' && buffer[i + lenght] != 'X') {
		buffer[i] = ' ';
		buffer[i + lenght] = 'P';
	}
	waddstr(win, buffer);
	refresh();
}

void    up(WINDOW *win, char *buffer, int lenght)
{
	int   i;

	wclear(win);
	i = search_player(buffer);
	if (buffer[i - lenght] == 'X' && buffer[i - lenght - lenght] != '#'
	    && buffer[i + lenght + lenght] != 'X') {
		buffer[i] = ' ';
		buffer[i - (lenght + lenght)] = 'X';
		buffer[i - lenght] = 'P';
	} else if (buffer[i - lenght] != '#' && buffer[i - lenght] != 'X') {
		buffer[i] = ' ';
		buffer[i - lenght] = 'P';
	}
	waddstr(win, buffer);
	refresh();
}

void    left(WINDOW *win, char *buffer)
{
	int   i;

	wclear(win);
	i = search_player(buffer);
	if (buffer[i - 1] == 'X' && buffer[i - 2] != '#' && buffer[i -2] != 'X') {
		buffer[i] = ' ';
		buffer[i - 2] = 'X';
		buffer[i - 1] = 'P';
	} else if (buffer[i - 1] != '#' && buffer[i - 1] != 'X') {
		buffer[i] = ' ';
		buffer[i - 1] = 'P';
	}
	waddstr(win, buffer);
	refresh();
}

void    right(WINDOW *win, char *buffer)
{
	int   i;

	wclear(win);
	i = search_player(buffer);
	if (buffer[i + 1] == 'X' && buffer[i + 2] != '#' && buffer[i -2] != 'X') {
		buffer[i] = ' ';
		buffer[i + 2] = 'X';
		buffer[i + 1] = 'P';
	} else if (buffer[i + 1] != '#' && buffer[i + 1] != 'X') {
		buffer[i] = ' ';
		buffer[i + 1] = 'P';
	}
	waddstr(win, buffer);
	refresh();
}
