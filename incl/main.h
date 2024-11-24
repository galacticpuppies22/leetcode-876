// #pragma once
#include "../incl/util.h"
#include "../incl/problem.h"
#include "../incl/solution.h"

long int runningReturn = 0;
long int currentTestCase = 0;

int main(void);
int testCaseN(struct ListNode *head, int solution);
// int testCaseN(struct ListNode *head, int solution, struct ListNode* (*funcPtr)(struct ListNode*));

