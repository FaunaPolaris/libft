#ifndef LINKED_LIST_H
# define LINKED_LIST_H

// linked list:

t_llist		*ll_new(char **variable);
t_llist		*ll_node(char *value);
t_llist		*ll_get_node(t_llist **head, char *value);
void		ll_add_back(t_llist **llst, t_llist *new);
void		ll_add_back_tab(t_llist **head, char **values);
void		ll_del_one(t_llist *llist);
void		ll_change_node(t_llist *node, char *new_value);
void		ll_remove_node(t_llist **head, char *value);
void		ll_clear(t_llist **llst);
char		**ll_to_tab(t_llist *list);
size_t		ll_len(t_llist *list);

// doubly linked list:

//	 creation and deletion:

t_dllist	*dll_new(char **values);
t_dllist	*dll_node_new(char *values);

int	dll_add_back(t_dllist *head, char *value);
int	dll_add_frnt(t_dllist **head, char *value);

void	dll_clear(t_dllist **head);

// 	checking

int	dll_size(t_dllist *head);

int	dll_is_crescent(t_dllist *head);

int	dll_has(t_dllist *head, int find);
int	dll_has_dupls(t_dllist *head);
int	dll_has_hgher(t_dllist *head, int compare);
int	dll_has_lower(t_dllist *head, int compare);

// 	find values:

int	dll_highest(t_dllist *head);
int	dll_lowest(t_dllist *head);
int	dll_mediam(t_dllist *head);

int	dll_next_hgher(t_dllist *head, int than);
int	dll_next_lower(t_dllist *head, int than);
int	dll_next_lowerf(t_dllist *head, int than);

int	dll_closest(t_dllist *head, int to);
int	dll_closest_hgher(t_dllist *head, int to);
int	dll_closest_lower(t_dllist *head, int to);

// 	find nodes:

t_dllist	*dll_pointer(t_dllist *head, int of);
t_dllist	*dll_find_back(t_dllist *head);

// 	index:

int	dll_index(t_dllist *head, int of);

int	dll_lindex2(t_dllist *head, int nb1, int nb2);
int	dll_lindex3(t_dllist *head, int nb1, int nb2, int nb3);

// 		dindex (desired index):
// 	phony value for the crescent ordered list

int	dll_dindex(t_dllist *head, int of);
int	dll_di_haslower(t_dllist *head, int than);
int	dll_di_lower(t_dllist *head, int than);
int	dll_di_lowerback(t_dllist *head, int than);
int	dll_di_lowerfrnt(t_dllist *head, int than);
int	dll_di_value(t_dllist *head, int dindex);

//		rindex (reverse index):
//	indexed value of each node from the back

int	dll_rindex(t_dllist *head, int of);

int	dll_rlindex2(t_dllist *head, int nb1, int nb2);
int	dll_rlindex3(t_dllist *head, int nb1, int nb2, int nb3);

#endif
