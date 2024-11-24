#pragma once
#include "util.h"
#include "problem.h"

#define NUM_TEST_CASES 2

// Declare the head of the linked list
// extern struct ListNode *head;

//We compare the solution by node->val; this comparison makes the assumption that node n's->val is unique
/*------------------------Case 1------------------------*/
const int case1NodeValues[] = {1,2,3,4,5};
const int case1NodeValuesLength = 5;
struct ListNode *case1Head = NULL;
const int case1Solution = 3;

/*------------------------Case 2------------------------*/
const int case2NodeValues[] = {1,2,3,4,5,6};
const int case2NodeValuesLength = 6;
struct ListNode *case2Head = NULL;
const int case2Solution = 4;
