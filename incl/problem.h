#pragma once
#include "util.h"
#include "list.h"

#define MAX_NODE_VALUE 100 //from problem constraints in problem.c
#define MIN_NODE_VALUE 1

// typedef struct ListNode {
//     int val;
//     struct ListNode *next;
// } ListNode;

struct ListNode* middleNode(struct ListNode* head);