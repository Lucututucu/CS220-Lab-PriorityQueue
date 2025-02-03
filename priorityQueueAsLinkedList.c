/** 
 * ===========================================================
 * Name: 
 * Section: 
 * Project: Priority Queue ADT implemented using linked list
 * Purpose: Priority Queue ADT library - FIFO
 * ===========================================================
 */

#ifndef PRIORITYQUEUEASLIST_H
#define PRIORITYQUEUEASLIST_H
#include <stdbool.h>
#include <stddef.h>
#include <stdio.h>

#include "listAsLinkedList.h"

typedef LinkedList PriorityQueueAsLinkedList;

/** priorityQueueEnqueue()
 * @brief - puts an element into the queue based on its priority (lower numbers towards the front)
 *          in the event of a tie, the new node goes after the others
 * @param queue - a ptr to the queue structure
 * @param element - the value to add to the queue
 * @param priority - the priority of the value to add to the queue
 * @pre   - queue before element added
 * @post  - queue one element longer
 */
void priorityQueueEnqueue(PriorityQueueAsLinkedList* queue, double element, int priority) {
    Node* temp = queue->head;
    int i = 0;
    while(temp != NULL) {
        if (priority >= temp->priority) {
            printf("I'm %lf %d, passing %lf \n ", element, priority, temp->data);
            temp = temp->next;
            if (temp == NULL) {
                printf("I HATE YOU\n");
            }
            i++;   
        } else {
            printf("I'm at the end %lf %d\n ", element, priority);
            temp = NULL;
        }
    }
    
    printf("I HATE YOU\n");
    insertElementLinkedList(queue, i, element, priority);
}

/** priorityQueueDequeue()
 * @brief - removes an element from the front of the queue
 * @param queue - a ptr to the queue structure
 * @pre   - queue before element removed from the front
 * @post  - queue one element shorter
 */
double priorityQueueDequeue(PriorityQueueAsLinkedList* queue) {
    double dequeueNum = getElementLinkedList(queue, 0)->data;
    deleteElementLinkedList(queue, 0);
    return dequeueNum;
}

/** priorityQueueIsEmpty()
 * @brief  - determines if the queue is empty
 * @param queue - a ptr to the queue structure
 * @return - true if the queue is empty or false
 * @pre    - queue unmodified
 * @post   - queue unmodified; and empty status returned
 */
bool priorityQueueIsEmpty(PriorityQueueAsLinkedList* queue) {
    return lengthOfLinkedList(queue) == 0;
}

/** priorityQueueIsFull()
 * @brief - determines if the queue is full
 * @param queue - a ptr to the queue structure
 * @return - true if the queue is full or false
 * @pre    - queue unmodified
 * @post   - queue unmodified; always returns false
 */
bool priorityQueueIsFull(PriorityQueueAsLinkedList* queue) {
    return false;
}

/** priorityQueueInit()
 * @brief  - initializes the queue structure
 * @return - pointer to queue
 * @pre    - nothing
 * @post   - new empty queue returned
 */
PriorityQueueAsLinkedList* priorityQueueInit() {
    return createLinkedList();
}

/** deletePriorityQueue()
 * @brief  - deletes queue, freeing all memory used
 * @param queue - a ptr to the queue structure
 * @pre    - unmodified queue
 * @post   - the queue is erased
 */
void deletePriorityQueue(PriorityQueueAsLinkedList* queue) {
    deleteLinkedList(queue);
}

/** priorityQueuePeek()
 * @brief  - returns the item in the front of the
 *           queue but doesn't remove it
 * @param queue - a ptr to the queue structure
 * @return - the item on the top of the queue
 * @pre    - queue unmodified
 * @post   - queue unmodified; top element returned
 */
double priorityQueuePeek(PriorityQueueAsLinkedList* queue) {
    return getElementLinkedList(queue, 0)->data;
}

/** priorityQueueSize()
 * @brief  - determines the size of the queue
 * @param queue - a ptr to the queue structure
 * @return - number of items in the queue
 * @pre    - queue unmodified
 * @post   - queue unmodified; size of queue returned
 */
int priorityQueueSize(PriorityQueueAsLinkedList* queue) {
    return lengthOfLinkedList(queue);
}

/** priorityQueuePrint()
 * @brief  - outputs the queue to the console
 * @param queue - the queue structure
 * @pre    - queue unmodified
 * @post   - queue unmodified; queue elements printed
 */
void priorityQueuePrint(PriorityQueueAsLinkedList* queue) {
    printLinkedList(queue);
}

#endif  
