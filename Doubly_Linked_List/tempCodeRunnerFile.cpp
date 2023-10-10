
            temp = temp->next;
        }
        temp->next = newNode;
        newNode->prev = temp;