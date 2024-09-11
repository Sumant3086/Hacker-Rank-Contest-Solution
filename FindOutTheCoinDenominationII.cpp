// Find out the coin denomination IIlocked
// Problem
// Submissions
// Leaderboard
// Discussions
// In this challenge you are asked to create coin denomination for a newly founded island. On the island the maximum amount of money you can give for a purchase at a time is M.

// The denomination of money should be in this way that all the items starting from cost 1 to M can be purchased by giving distinct coins.

// For example if M is 53 then coin denomination can be [1,2,4,8,16,32], so if we take any amount between 1 to 53, example :-

// 14 -> [2,4,8]

// 25 -> [1,8,16]

// 50 -> [2,16,32]

// the above coin distribution describes the change of coins according to denomination.

// So you have to write a program which takes the amount M and N as an input.(note: N is the cost of any item to be purchased) and output should be the number of distinct coins required to purchase the item of cost N.

// Input Format

// Input would be two space seperated integers M and N.

// where M is the item with maximum cost at the island and N is the cost of item for which you have to find out the number of coins required to purchase that item.

// Constraints

// NA

// Output Format

// Output should be a single integer denoting the number of distinct coins required to purchase item of cost N.

// Sample Input 0

// 12 7
// Sample Output 0

// 3
// Sample Input 1

// 19 15
// Sample Output 1

// 4
// Sample Input 2

// 250 67
// Sample Output 2

// 3
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int m,n;
    cin>>m>>n;
    int count=0;
    while(n>0){
        if(n & 1){
            count++;
        }
        n=n>>1;
    }
        cout<<count<<endl;
    return 0;
}
