class MyLinkedList {
    struct Node {
        int val;
        Node* next;
        Node(int value) {
            val = value;
            next = NULL;
        }
    };
    Node* head;
    Node* tail;
    int size;
public:
    MyLinkedList() {
        head = NULL;
        tail = NULL;
        size=0;  
    }
    
    int get(int index) {
        if(index<0 || index>=size) return -1;
        Node* temp = head;
        for(int i=0; i<index ; i++) {
            temp=temp->next;
        }
        return temp->val;
    }
    
    void addAtHead(int val) {
        Node* newnode = new Node(val);
        if(size==0) head = tail = newnode;
        else {
            newnode->next=head;
            head=newnode;
        }
        size++;
    }
    
    void addAtTail(int val) {
        Node* newnode = new Node(val);
        if(size==0) head = tail = newnode;
        else {
            tail->next = newnode;
            tail=newnode;
        }
        size++;
    }
    
    void addAtIndex(int index, int val) {
        if(index<0 || index>size) return;
        if(index==0) {
            addAtHead(val);
            return;
        }
        if(index == size) {
            addAtTail(val);
            return;
        }
        Node* newnode = new Node(val);
        Node* temp = head;
        for(int i=0 ; i<index-1 ; i++) {
            temp = temp->next;
        }
        newnode->next = temp->next;
        temp->next = newnode;
        size++;
    }
    
    void deleteAtIndex(int index) {
        if(index<0 || index>=size) return;
        else if(index==0) {
            head = head->next;
            size--;
            if(size==0) {
                tail = NULL;
                return;
            }
        }
        else if(index==size-1) {
            Node*temp = head;
            while(temp->next != tail) {
                temp = temp->next;
            }
            temp->next = NULL;
            tail = temp;
            size--;
        }
        else{
            Node* temp = head;
            for(int i=0 ; i<index-1 ; i++) {
                temp= temp->next;
            }
            temp->next = temp->next->next;
            size--;
        }

    }
};

/**
 * Your MyLinkedList object will be instantiated and called as such:
 * MyLinkedList* obj = new MyLinkedList();
 * int param_1 = obj->get(index);
 * obj->addAtHead(val);
 * obj->addAtTail(val);
 * obj->addAtIndex(index,val);
 * obj->deleteAtIndex(index);
 */