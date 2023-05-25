/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */

/*
    
*/
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
bool isPalindrome(struct ListNode* head){  
    int len = 0;
    struct ListNode* temp = head;
    while (temp != NULL){  // get length of linked list
        len++;
        temp = temp->next;
    }
    int arr[len];  // create array of length len
    temp = head;  // reset temp to head
    for (int i = 0; i < len; i++){  // loop through linked list and add values to array 
        arr[i] = temp->val;         
        temp = temp->next;
    }
    for (int i = 0; i < len / 2; i++){   // loop through array and compare values 
        if (arr[i] != arr[len - i - 1]){  // if values are not equal, return false 
            return false;
        }
    }
    return true;
}