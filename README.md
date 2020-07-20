Problem Statement
Alice wrote a sequence of words in CamelCase as a string of letters, S , having the following properties:

It is a concatenation of one or more words consisting of English letters.
All letters in the first word are lowercase.
For each of the subsequent words, the first letter is uppercase and rest of the letters are lowercase.


Given S , print the number of words in  S on a new line.

For example S = oneTwoThree, . There are  3 words in the string.



In case the string S violates the rule of CamelCase, program should report it. 

Extra Info


Input Format
A single line containing string S.

Output Format
Print the number of words in string S, if CamelCase rule has not been violated ; or print "Input Error" otherwise

Constraints
1 <= |S| <= 10^5

Time Limit
1s.
Each test case should pass in 1s.
Sample Input
thisIsCamelCase
Sample Output
4