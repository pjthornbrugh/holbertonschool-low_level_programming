C - More singly linked lists

0. Print list
size_t print_listint(const listint_t *h);
0-print_listint.c

1. List length
Prototype: size_t listint_len(const listint_t *h);
1-listint_len.c

2. Add node
listint_t *add_nodeint(listint_t **head, const int n);
2-add_nodeint.c

3. Add node at the end
listint_t *add_nodeint_end(listint_t **head, const int n);
3-add_nodeint_end.c

4. Free list
void free_listint(listint_t *head);
4-free_listint.c

5. Free
void free_listint2(listint_t **head);
5-free_listint2.c

6. Pop
int pop_listint(listint_t **head);
6-pop_listint.c

7. Get node at index
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index);
7-get_nodeint.c

8. Sum list
int sum_listint(listint_t *head);
8-sum_listint.c

9. Insert
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n);
9-insert_nodeint.c

10. Delete at index
int delete_nodeint_at_index(listint_t **head, unsigned int index);
10-delete_nodeint.c
