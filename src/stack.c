#include "stack.h"
#include <stdbool.h>

void initialize(stack* s){
  s->head = NULL; /*has head to point to nothing*/
}

bool empty(stack* s)
{
  return s->head==NULL; /* returns true if stack empty and false is not empty*/
}

void push(int x, stack* s){
    node* element = (node*)malloc(sizeof(node)); /*creates new pointer to a node and allocates memory*/
    element->next = s->head; /*has the new element point to the element below itself ie. what s->head was pointing to*/
    s->head = element; /*Updates s->head to now again point to the top of the stack*/
    element->data = x; /*inserts x in the new top element*/

}

int pop(stack* s){
  if (s->head != NULL) { /*checks if there are any elements to pop*/
    int popped = s->head->data; /*saves data value of top element in a return variable*/
    node* p = s->head; /*creates a temp node pointer to be cleared later*/
    s->head = p->next; /*sets s->head to point to new top element*/
    free(p); /*frees old top element in memory*/

  return popped;
  }
}



bool full(stack* s) {
    /* is never full so must always return false */
  return false;
}
