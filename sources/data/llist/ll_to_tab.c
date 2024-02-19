#include "libfpp.h"

char	**ll_to_tab(t_llist *list)
{
	char	**output;
	size_t	list_len;
	size_t	i;

	list_len = ll_len(list);
	output = (char **)mem_calloc(list_len + 1, sizeof(char *));
	if (!output)
		return (NULL);
	i = -1;
	while (++i < list_len)
	{
		output[i] = list->value;
		list = list->next;
	}
	return (output);
}

