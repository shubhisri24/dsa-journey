/*
Problem Statement

Given an array arr[] of integer numbers, where arr[i] represents the number of pages in the iᵗʰ book. There are m number of students and the task is to allocate all the books to their students. Allocate books in such a way that:

1 - Each student gets at least one book.

2 - Each book should be allocated to a student.

3 - Book allocation should be in a contiguous manner.

You have to allocate the book to m students such that the maximum number of pages assigned to a student is minimum.

Example:
Let’s consider n = 4 (number of books) and m = 2 (number of students).
arr[] = {10, 20, 30, 40}
*/

#include <iostream>
#include <vector>
using namespace std;

bool isPossible(vector<int> arr, int n, int m, int mid)
{
    int studentCount = 1;
    int page = 0;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] > mid)
        {
            return false; // Single book has more pages than allowed max
        }

        if (page + arr[i] <= mid)
        {
            page += arr[i]; // Assign book to current student
        }
        else
        {
            studentCount++;     // Assign to new student
            page = arr[i];      // Start new sum with current book
        }

        if (studentCount > m)
        {
            return false; // More students required than available
        }
    }

    return true;
};

int allocateBooks(vector<int> arr, int n, int m)
{
    int s = 0;
    int sum = 0;

    for (int i = 0; i < n; i++)
    {
        sum += arr[i]; // Total sum of pages
    }

    int e = sum;
    int ans = -1;

    while (s <= e)
    {
        int mid = s + (e - s) / 2;

        if (isPossible(arr, n, m, mid))
        {
            ans = mid;      // Store the answer
            e = mid - 1;    // Try to find smaller max
        }
        else
        {
            s = mid + 1;    // Try to find larger max
        }
    }

    return ans;
};

int main()
{
    vector<int> arr = {10, 20, 30, 40};
    int n = arr.size();
    int m = 2;

    int result = allocateBooks(arr, n, m);
    cout << "Minimum number of pages: " << result << endl;

    return 0;
}
