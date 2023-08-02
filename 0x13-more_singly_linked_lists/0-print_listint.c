#include <stdio.h>
#include <stddef.h>

typedef struct listint_t {
    int data;
    struct listint_t *next;
} listint_t;

size_t print_listint(const listint_t *h) {
    size_t count = 0;
    
    while (h != NULL) {
        printf("%d\n", h->data);
        h = h->next;
        count++;
    }
    
    return count;
}

int main() {
    listint_t node1 = {1, NULL};
    listint_t node2 = {2, NULL};
    listint_t node3 = {3, NULL};

    node1.next = &node2;
    node2.next = &node3;

    size_t count = print_listint(&node1);
    printf("Number of nodes: %lu\n", count);

    return 0;
}
