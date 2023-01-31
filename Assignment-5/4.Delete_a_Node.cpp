

/*
 * Complete the 'deleteNode' function below.
 *
 * The function is expected to return an INTEGER_SINGLY_LINKED_LIST.
 * The function accepts following parameters:
 *  1. INTEGER_SINGLY_LINKED_LIST llist
 *  2. INTEGER position
 */

/*
 * For your reference:
 *
 * SinglyLinkedListNode {
 *     int data;
 *     SinglyLinkedListNode* next;
 * };
 *
 */

SinglyLinkedListNode* deleteNode(SinglyLinkedListNode* llist, int position) {
    SinglyLinkedListNode* temp=llist;
    SinglyLinkedListNode* min;
    SinglyLinkedListNode* max;
    SinglyLinkedListNode* pos;
    if(position==0){
        return llist->next;
    }
    for(int i=0;i<=position+1;i++){
        if(i==position-1){
            temp->next=temp->next->next;
            break;
        }
        temp=temp->next;
    }
    return llist;   
}

