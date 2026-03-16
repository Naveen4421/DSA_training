/**
 * Removes ALL occurrences of a specific value from the linked list.
 * This handles cases where the value is at the head, middle, or end.
 * 
 * @param head The pointer to the head of the list.
 * @param val The specific value to be removed.
 * @return The new head of the list.
 */
struct node* removeValue(struct node *head, int val) {
    struct node *temp, *prev;

    // 1. Handle cases where the head itself contains the value to be removed
    while (head != NULL && head->data == val) {
        temp = head;
        head = head->next;
        free(temp);
    }

    // 2. Handle cases where the value is in the middle or at the end
    prev = head;
    if (prev != NULL) {
        temp = prev->next;
        while (temp != NULL) {
            if (temp->data == val) {
                // Bypass the node and free it
                prev->next = temp->next;
                free(temp);
                // Move temp to the next node in line without moving prev
                temp = prev->next;
            } else {
                // Move both pointers forward
                prev = temp;
                temp = temp->next;
            }
        }
    }
    return head;
}