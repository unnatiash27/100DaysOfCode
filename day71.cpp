//Design your implementation of the circular double-ended queue (deque).
   
class MyCircularDeque {
    queue<int>q1,q2;
    int size;
public:
    MyCircularDeque(int k) {
        size=k;
    }
    
    bool insertFront(int value) {
        if(isFull())return false;
        else
        {
            while(q1.size()>0)
            {
                q2.push(q1.front());
                q1.pop();
            }
            q1.push(value);
            while(q2.size()>0)
            {
                q1.push(q2.front());
                q2.pop();
            }
        }
        return true;
    }
    
    bool insertLast(int value) {
        if(isFull())
        return false;
        else
        q1.push(value);
        return true;
    }
    
    bool deleteFront() {
        if(isEmpty())
        return false;
        else
        q1.pop();
        return true;
    }
    
    bool deleteLast() {
        if(isEmpty())return false;
        else
        {
            while(q1.size()>1)
            {
                q2.push(q1.front());
                q1.pop();
            }
            q1.pop();
            while(q2.size()>0)
            {
                q1.push(q2.front());
                q2.pop();
            }
        }
        return true;
    }
    
    int getFront() {
        if(!isEmpty())
        return q1.front();
        return -1;
    }
    
    int getRear() {
        if(!isEmpty())
        return q1.back();
        return -1;
    }
    
    bool isEmpty() {
        return(q1.size()==0);
    }
    
    bool isFull() {
        return (q1.size()==size);
    }
};

/**
 * Your MyCircularDeque object will be instantiated and called as such:
 * MyCircularDeque* obj = new MyCircularDeque(k);
 * bool param_1 = obj->insertFront(value);
 * bool param_2 = obj->insertLast(value);
 * bool param_3 = obj->deleteFront();
 * bool param_4 = obj->deleteLast();
 * int param_5 = obj->getFront();
 * int param_6 = obj->getRear();
 * bool param_7 = obj->isEmpty();
 * bool param_8 = obj->isFull();
 */
