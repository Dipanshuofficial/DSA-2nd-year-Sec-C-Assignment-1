SinglyLinkedListNode* removeDuplicates(SinglyLinkedListNode* llist) {
    SinglyLinkedListNode* temp=llist;
    while(temp->next!=NULL){
        if(temp->data==temp->next->data){
            temp->next=temp->next->next;
        }
        else{
            temp=temp->next;
        }
    }
    return llist;
}
