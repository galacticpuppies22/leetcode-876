#include "../incl/main.h"

int main(void)
{
    initList(&case1Head, case1NodeValues, case1NodeValuesLength);
    initList(&case2Head, case2NodeValues, case2NodeValuesLength);

    // // Declaration of a function pointer 
    // struct ListNode* (*funcPtr)(struct ListNode*); 
    // // Assign the middleNode function to the function pointer 
    // funcPtr = middleNode;

    printf("------------------------");
    printf("Running %d Tests...", NUM_TEST_CASES);
    printf("------------------------\n");

    runningReturn += testCaseN(case1Head, case1Solution);
    runningReturn += testCaseN(case2Head, case2Solution);
    // runningReturn += testCaseN(middleNode, case1Head, case1Solution);
    // runningReturn += testCaseN(middleNode, case2Head, case2Solution);

    printf("------------------------");
    printf("%ld / %d tests passed!", runningReturn - NUM_TEST_CASES, NUM_TEST_CASES);
    printf("------------------------\n");

    return runningReturn;
}

// return 0 if the test case passes, 1 if it fails; the reason for this design is that we call `testCaseN` NUM_TEST_CASES times
int testCaseN(struct ListNode *head, int solution)
{
    struct ListNode *proposedMiddleNode = NULL;
    proposedMiddleNode = middleNode(head);

    printf("Test case %ld ", ++currentTestCase);
    if(proposedMiddleNode != NULL && proposedMiddleNode->val == solution)
    {
        printf("passed!\n");
        return 0;
    }
    else
    {
        printf("FAILED!\n");
        return 1;
    }
}