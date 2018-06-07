/* 

Once, after a stressful day, Chef decided to relax and visit a casino near his house to gamble. 
He feels lucky and he's going to bet almost all of his money.
The game Chef is going to play in the casino consists of tossing a die with N faces twice. 
There is a number written on each face of the die (these numbers are not necessarily distinct). 
In order to win, Chef must get the number A on the first toss and the number B on the second toss of the die.
The excited viewers want to know the probability that Chef will win the game. 
Can you help them find that number? Assume that Chef gets each face of the die with- 
-the same probability on each toss and that tosses are mutually independent.



Input

The first line of the input contains a single integer T denoting the number of test cases. The description of T test cases follows.
The first line of each test case contains three space-separated integers N, A and B.
The second line contains N space-separated integers x1,x2,…,xN denoting the numbers written on the faces of the die.
Output
For each test case, print a single line containing one real number — the probability that Chef will win. 
Your answer will be considered correct if its absolute error does not exceed 10−6.

Constraints

1≤T≤70
1≤N≤104
1≤A≤N
1≤B≤N
1≤xi≤N for each valid i

Subtasks

Subtask #1 (20 points):
T≤10
N≤100
Subtask #2 (80 points): original constraints

Example Input

2
5 1 1
1 1 1 1 1
2 1 1
1 2

Example Output

1.0000000000
0.2500000000

*/

#include<iostream>
using namespace std;

int main()
{
	int T,N,A,B,AA=0,BB=0,i;
	float prob;

	cin>>T;

	for(;T!=0;T--)
	{
		cin>>N>>A>>B;

		int a[N];

		for(i=0;i<N;i++)
				cin>>a[i];

		AA=0;BB=0;
				
	    for(i=0;i<N;i++)
	    {
	    	if(a[i]==A)
	    		AA++;
	    	if(a[i]==B)
	    		BB++;
	    			
	    }					

	    prob=((float)AA/N)*((float)BB/N);
	    

	    cout<<prob<<"\n";
	}	

	return 0;
}