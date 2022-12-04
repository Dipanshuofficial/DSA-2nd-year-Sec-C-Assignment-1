

// Complete the printLinkedList function below.

/*
 * For your reference:
 *
 * SinglyLinkedListNode {
 *     int data;
 *     SinglyLinkedListNode* next;
 * };
 *
 */
void printLinkedList(SinglyLinkedListNode* head) {
    SinglyLinkedListNode* temp;
    temp=head;
    while(temp!=NULL){
        cout<<temp->data<<"\n";
        temp=temp->next;
    }

}

