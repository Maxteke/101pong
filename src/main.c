/*
** EPITECH PROJECT, 2017
** my_sokoban
** File description:
** main
*/

#include "my.h"

WINDOW	*create_win()
{
	WINDOW	*win;

	win = initscr();
	cbreak();
	noecho();
	keypad(win, TRUE);
	return (win);
}

int	my_strlen(char *buffer)
{
	int	i;

	i = 0;
	while (buffer[i] != '\n')
		i++;
	return (i);
}

void start_game(char **av)
{
    WINDOW	*win;
	int	fd;
	struct stat stats;
	char	*buffer;

	win = create_win();
	fd = open(av[1], O_RDONLY);
	stat(av[1], &stats);
	buffer = malloc(stats.st_size + 1);
	read(fd, buffer, stats.st_size);
	while (win != NULL) {
		game_loop(win, buffer);
		win = NULL;
	}
	endwin();
}

int	main(int ac, char **av)
{
	if (ac == 2)
        start_game(av);
    else
        return (84);
    return (0);
}