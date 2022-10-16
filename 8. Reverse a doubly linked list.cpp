/*
 * Complete the 'reverse' function below.
 *
 * The function is expected to return an INTEGER_DOUBLY_LINKED_LIST.
 * The function accepts INTEGER_DOUBLY_LINKED_LIST llist as parameter.
 */

/*
 * For your reference:
 *
 * DoublyLinkedListNode {
 *     int data;
 *     DoublyLinkedListNode* next;
 *     DoublyLinkedListNode* prev;
 * };
 *
 */

DoublyLinkedListNode* reverse(DoublyLinkedListNode* llist) {
    DoublyLinkedListNode* heck=NULL;
    DoublyLinkedListNode* orig=llist;
    while (orig != NULL) {
        heck = orig->prev;
        orig->prev = orig->next;
        orig->next = heck;
        orig = orig->prev;
    }
    if(heck!=NULL){
        llist=heck->prev;
    }
    return llist;
}
