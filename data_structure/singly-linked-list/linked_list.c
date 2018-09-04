#include <stdio.h>

// basic singlly-linked list
typedef struct ListElement {
  struct ListElement *next;
};

// More useful singlly-linked list
typedef struct IntElement {
  struct IntElement *next;
  int data;
};

