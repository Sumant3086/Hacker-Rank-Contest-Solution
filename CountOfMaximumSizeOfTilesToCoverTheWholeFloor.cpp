// In this challenge you have a floor of N x M size. You want to cover the whole floor by tiles. So you have to find out the the squared shape tile with the maximum dimension of S size, so that whole floor can be covered without cutting any tile, means there should be no wastage of any part of tile.

// Write a program which would take input the dimensions of the floor and print the output as the count of tiles required to cover the whole floor.

// Input Format

// The input would be 2 space seperated integers denoting the length N and width M of the floor.

// Constraints

// NA

// Output Format

// The output should be an integer denoting the number of tiles required to cover the whole floor.

// Sample Input 0

// 35 45
// Sample Output 0

// 63
// Sample Input 1

// 39 65
// Sample Output 1

// 15
// Sample Input 2

// 95 361
// Sample Output 2

// 95

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int n,m;
    cin>>n>>m;
    int titleSize=__gcd(n,m);
    int numberOfTitle=(n*m)/(titleSize*titleSize);
    cout<<numberOfTitle<<endl;
    return 0;
}
