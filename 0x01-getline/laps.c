#include "laps.h"

/**
 * join_race - join new cars to the race
 * Description: join new cars to the race
 * @id: id of a car
 * @head: head of the list
 * Return: none
 **/

void join_race(int id, car_n **head)
{
	car_n *search, *new;

	new = malloc(sizeof(car_n));
	if (!new)
		return;
	new->id = id;
	new->n_laps = 0;
	new->run = 0;
	new->next = NULL;

	if (!head || !(*head))
	{
		*head = new;
		printf("Car %i joined the race\n", id);
		return;
	}
	if (new->id < (*head)->id)
	{
		printf("Car %i joined the race\n", id);
		new->next = *head;
		*head = new;
		return;
	}
	for (search = *head; search; search = search->next)
	{
		if (search && search->id == id)
		{
			if (search->id == id)
				search->run = 1;
			free(new);
			return;
		}
		if (search && (!search->next || (new->id < (search->next)->id)))
		{
			new->next = search->next;
			search->next = new;
			printf("Car %i joined the race\n", id);
			return;
		}
	}
}

/**
 * print_state - print current state of the race
 * Description: print current state of the race
 * @head: head of the list
 * Return: none
 **/

void print_state(car_n **head)
{
	car_n *search;

	for (search = *head; search; search = search->next)
	{
		search->n_laps = search->n_laps + search->run;
		printf("Car %i [%i laps]\n", search->id, search->n_laps);
		search->run = 0;
	}
}

/**
 * free_memory - free all the list
 * Description: free all the list
 * @head: head of the list
 * Return: none
 **/

void free_memory(car_n **head)
{
	car_n *current, *prev;

	if (head == NULL || *head == NULL)
		return;

	current = prev = *head;

	while (current)
	{
		prev = current;
		current = current->next;
		free(prev);
	}
}

/**
 * race_state - return the race state.
 * Description: print Car <id> [# of laps].
 * @id: array of all the id of the cars in race
 * @size: size of *id
 * Return: none
 **/

void race_state(int *id, size_t size)
{
	static car_n *head;
	size_t i;

	if (!size)
	{
		free_memory(&head);
		return;
	}

	for (i = 0; i < size; i++)
		join_race(*(id + i), &head);

	printf("Race state:\n");
	print_state(&head);
}
