#ifndef LAPS_H
#define LAPS_H

#include <stdio.h>
#include <stdlib.h>

/**
 * struct car - linked list
 * @id: id of a car
 * @n_laps: number of laps
 * @run: 1 if make a lap 0 if not
 * @next: points to the next node
 *
 * Description: linked list car structure
 */
typedef struct car
{
	int id;
	int n_laps;
	int run;
	struct car *next;
} car_n;

void join_race(int id, car_n **head);
void print_state(car_n **head);
void free_memory(car_n **head);
void race_state(int *id, size_t size);

#endif
