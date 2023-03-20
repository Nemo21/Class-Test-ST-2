/*
Avni and Anuj are participating in a contest. There are N problems in this contest; each problem has a unique problem code between 1 and N inclusive. Avni and Anuj decided to split the problems to solve between them ― Avni should solve the problems whose problem codes are divisible by A but not divisible by B, and Anuj should solve the problems whose problem codes are divisible by B but not divisible by A (they decided to not solve the problems whose codes are divisible by both A and B).

To win, it is necessary to solve at least K problems. You have to tell Avni whether they are going to win or lose.

Input The first line of the input contains a single integer T denoting the number of test cases. The description of T test cases follows. The first and only line of each test case contains four space-separated integers N, A, B and K. Output For each test case, print a single line containing the string "Win" if they can solve at least K problems or "Lose" otherwise (without quotes).

Constraints 1≤T≤15 1≤K≤N≤1018 1≤A,B≤109 Subtasks Subtask #1 (15 points):

1≤T≤15 1≤K≤N≤106 1≤A,B≤103 Subtask #2 (85 points): original constraints

Sample Input 1 1 6 2 3 3 Sample Output 1 Win Explanation Example case 1: Avni is solving the problems with codes 2 and 4, Anuj is solving the problem with code 3. Nobody is solving problem 6, since 6 is divisible by both 2 and 3. Therefore, they can solve 3 problems and win.
*/