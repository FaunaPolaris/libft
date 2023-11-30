#ifndef LINKED_LIST_H
# define LINKED_LIST_H

// doubly linked list:

// creation and deletion:

t_dllist	*dll_new(void **values);
t_dllist	*dll_node_new(void *values);

int	dll_add_back(t_dllist *head, void *value);
int	dll_add_frnt(t_dllist *head, void *value);

void	dll_clear(t_dllist **head);

// checking

int	dll_size(t_dllist *head);

int	dll_is_crescent(t_dllist *head);

int	dll_has(t_dllist *head, int find);
int	dll_has_dupls(t_dllist *head);
int	dll_has_hgher(t_dllist *head, int compare);
int	dll_has_lower(t_dllist *head, int compare);

// find_values:

int	dll_highest(t_dllist *head);
int	dll_lowest(t_dllist *head);
int	dll_mediam(t_dllist *head);

int	dll_next_hgher(t_dllist *head, int than);
int	dll_next_lower(t_dllist *head, int than);
int	dll_next_lowerf(t_dllist *head, int than);

int	dll_closest(t_dllist *head, int to);
int	dll_closest_hgher(t_dllist *head, int to);
int	dll_closest_lower(t_dllist *head, int to)

// find_nodes:

t_dllist	*dll_pointer(t_dllist *head, int of);
int	dll_find_back(t_dllist *head);

// index:

int	dll_index(t_dllist *head, int of);

int	dll_lindex2(t_dllist *head, int nb1, int nb2);
int	dll_lindex3(t_dllist *head, int nb1, int nb2, int nb3);

// 	dindex:

int	dll_dindex(t_dllist *head, int of);
int	dll_di_haslower(t_dllist *head, int than);
int	dll_di_lower(t_dllist *head, int than);
int	dll_di_lowerback(t_dllist *head, int than);
int	dll_di_lowerfrnt(t_dllist *head, int than);
int	dll_di_value(t_dllist *head, int dindex);

//	rindex:

int	dll_rindex(t_dllist *head, int of);

int	dll_rlindex2(t_dllist *head, int nb1, int nb2);
int	dll_rlindex3(t_dllist *head, int nb1, int nb2, int nb3);

#endif
