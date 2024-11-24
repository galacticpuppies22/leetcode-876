/*
Problem: https://leetcode.com/problems/number-of-steps-to-reduce-a-number-to-zero/
*/
#include "../incl/util.h"
#include "../incl/problem.h"

/**
 * Constraints:
 * 
 * The number of nodes in the list is in the range [1, 100].
 * 1 <= Node.val <= 100
 */
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* middleNode(struct ListNode* head)
{
#ifdef SOLUTION_1
    struct ListNode *currentNode = head;
    long unsigned int listLength = 0;

    while(currentNode != NULL)
    {
        currentNode = currentNode->next;
        listLength++;
    }

#ifdef DEBUG
    printf("%s:%ld\n", STRINGIFY(listLength), listLength);
#endif /* DEBUG */

    //getting that middle node in order to return it
    currentNode = head;
    for (int i = 0; i < listLength / 2; i++)
    {
        currentNode = currentNode->next;
    }
#ifdef DEBUG
    printf("%s:%d\n", STRINGIFY(currentNode), currentNode->val);
#endif /* DEBUG */
    return currentNode;
    //time complexity: O(n)
    //space complexity: O(n)

#ifdef DEBUG
    // //if you just want the test to pass
    // struct ListNode *soln = malloc(sizeof(struct ListNode));
    // soln->val = 3;
    // soln->next = NULL;
    // return soln;
#endif /* DEBUG */

#endif /* SOLUTION_1 */

#ifdef SOLUTION_2
    struct ListNode *endNode = head;
    struct ListNode *middleNode = head;
    while(endNode != NULL && endNode->next != NULL)
    {
        endNode = endNode->next->next;
        middleNode = middleNode->next;
    }
    return middleNode;
    //time complexity: O(n)
    //space complexity: O(1)
#endif /* SOLUTION_2 */
}
