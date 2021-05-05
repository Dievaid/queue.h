#ifndef QUEUE_H_
#define QUEUE_H_

typedef struct queueNode
{
    void* data;
    struct queueNode* next;
}queueNode;

typedef struct Queue {
    unsigned int size;
    queueNode* front;
    queueNode* rear;
}Queue;

queueNode* makeNode(void* data) {
    queueNode* newNode = (queueNode*)malloc(sizeof(queueNode));
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

/**
 * Creates an empty queue
 * @return Your empty queue
*/
Queue* createQueue() {
    Queue* newQueue = (Queue*)malloc(sizeof(Queue));
    newQueue->size = 0;
    newQueue->front = NULL;
    newQueue->rear = NULL;
    return newQueue; 
}

/**
 * Checks if the queue is empty
 * @return 1(it is Empty) or 0(it is not Empty)  
*/
int isEmpty(Queue* queue) {
    return queue->size == 0;
}

/**
 * Adds any data type to your queue
 * @param queue This is your queue
 * @param data This is the data you want to enqueue  
*/
void en(Queue* queue, void* data) {

    queueNode* newQueueNode;
    newQueueNode = makeNode(data);

    if(isEmpty(queue)) {
        queue->front = newQueueNode;
        queue->rear = newQueueNode;
    }
    else {
        queue->rear->next = newQueueNode;
        queue->rear = queue->rear->next;
    }
    queue->size++;
}


/**
 * Removes an element from the queue and returns it as a void pointer
 * @param queue This is your queue
 * @returns Void pointer to the dequeued value
*/
void* de(Queue* queue) {
    
    if(isEmpty(queue))
        return NULL;
    queueNode* auxiliaryNode = queue->front;
    void* data = auxiliaryNode->data;
    queue->front = queue->front->next;
    queue->size--;
    free(auxiliaryNode);
    return data;
}

#endif