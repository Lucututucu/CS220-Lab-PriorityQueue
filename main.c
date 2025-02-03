/** 
 * ===========================================================
 * Name: 
 * Section: 
 * Project: Priority Queue ADT implemented using linked list
 * Purpose: Priority Queue ADT library - FIFO
 * ===========================================================
 */

#include "priorityQueueAsLinkedList.h"
#include <stdio.h>

int main() {
    PriorityQueueAsLinkedList* pq = priorityQueueInit();

    // Try Adding Different Items to the Priority Queue Here
    priorityQueueEnqueue(pq, 5, 2);
    priorityQueuePrint(pq);
    priorityQueueEnqueue(pq, 6, 1);
    priorityQueuePrint(pq);
    priorityQueueEnqueue(pq, 7, 1);
    priorityQueuePrint(pq);
    priorityQueueEnqueue(pq, 7, 3);
    priorityQueuePrint(pq);
    priorityQueueEnqueue(pq, 100, 0);
    priorityQueuePrint(pq);
    priorityQueueEnqueue(pq, 101, 1);
    priorityQueuePrint(pq);
    priorityQueueEnqueue(pq, 106, 6);
    priorityQueuePrint(pq);
    priorityQueueEnqueue(pq, 1006, 6);
    priorityQueuePrint(pq);
    priorityQueueEnqueue(pq, 10006, 6);

    // Prints the Priority Queue
    priorityQueuePrint(pq);

    priorityQueueDequeue(pq);
    priorityQueueDequeue(pq);
    priorityQueueDequeue(pq);
    priorityQueueDequeue(pq);
    priorityQueueDequeue(pq);

    
    priorityQueuePrint(pq);

}