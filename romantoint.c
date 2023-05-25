#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*
    #Intuition (Describe your first thoughts on how to solve this problem) : 
    My first thought was to create a table of roman numerals and loop through the string. 
    #Approach   :  Describe your algorithm's general approach to solve this problem.
    I created a table of roman numerals and looped through the string. If the current value was less than the next value
    I subtracted the current value from the result. Otherwise, I added the current value to the result.
    #Complexity :  Analyze the time and space complexity of your solution.
    Time complexity: O(n) where n is the length of the string
    Space complexity: O(1) because the table is constant
    


*/
int romanToInt(char * s){
    int res = 0;         // result
    int len = strlen(s); // length of string
    int t['X' + 1] = {   // table of roman numerals, 
        ['I'] = 1,      
        ['V'] = 5,
        ['X'] = 10,
        ['L'] = 50,
        ['C'] = 100,
        ['D'] = 500,
        ['M'] = 1000
    };  
    for (int i = 0; i < len; i++){   // loop through string
        if (t[s[i]] < t[s[i + 1]]){   // if current value is less than next value
            res -= t[s[i]];          // subtract current value from result
        }
        else{
            res += t[s[i]];        // add current value to result
        }
    }
    return res;
}