// You are given an array of integers arr of size N. Your task is to partition the array into two non-empty subarrays such that the sum of elements in the left subarray is strictly greater than the sum of elements in the right subarray. Return the minimum index where this partition can occur. Input: • The first line contains an integer N, the number of elements in the array arr. • The second line contains N space-separated integers representing the array arr. Output: • Print the minimum index i such that the sum of elements from arr[0] to arr[i] (left subarray) is strictly greater than the sum of elements from arr[i+1] to arr[N-1] (right subarray). • If no such partition exists, print -1.

// Input Format

// 5

// 3 1 4 1 2

// Constraints

// 2≤N≤105 −106≤arr[i]≤106

// Output Format

// 2

// Submissions: 43
// Max Score: 15
// Difficulty: Medium
// Rate This Challenge:

    
// More


#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n;
    cin>>n;
    int i=0;
    int j=n-1;
    vector<int>arr(n);
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int l=0;
    int h=n-1;
    for(int &i:arr)
    {
        h+=i;
    }
    int a=-1;
    for(int i=0;i<n;i++)
    {
        if(l>=h){
            a=i;
            break;
        }
        l+=arr[i];
        h-=arr[i];
    }
    cout<<a<<endl;
    return 0;
}