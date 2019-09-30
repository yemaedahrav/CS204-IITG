#include <iostream>
#include<bits/stdc++.h>
#include <cmath>
#include<vector>


using namespace std;

int select(long long [], int, int , int);
int partition(long long [], int, int, int, int);
int pivot(long long [], int, int);
int medianof5elements(long long [], int, int);

int main()
{
    int test_cases, n, x, y;
    cin >> test_cases;


    while(test_cases--)
    {
        cin >> n;
        long long d[n];
        for(int i = 0; i < n; i++)
        {
            cin >> x >> y;
            d[i] = x * x + y * y;
        }
        int pos = select(d, 0, n - 1, floor((n - 1) / 2));
        cout << sqrt(d[pos]) << '\n';

    }
    return 0;
}



int select(long long d[], int l, int r, int pos)
{
    int medianofmediansindex;
    while(1)
    {
        if(l == r)
            return l;
        medianofmediansindex = pivot(d, l, r);
        medianofmediansindex = partition(d, l, r, medianofmediansindex, pos);
        if(pos == medianofmediansindex)
            return pos;
        else if(pos > medianofmediansindex)
        {
            l = medianofmediansindex + 1;
        }
        else
        {
            r = medianofmediansindex - 1;
        }
    }   
}

int partition(long long d[], int l, int r, int medianofmediansindex, int pos)
{
    int pivotvalue = d[medianofmediansindex];
    swap(d[medianofmediansindex], d[r]);
    int i = l - 1;
    for(int j = l; j < r; j++)
    {
        if(d[j] <= pivotvalue)
        {
            i++;
            swap(d[i], d[j]);
        }
    }
    swap(d[i+1], d[r]);
    return i+1;
    
}

int pivot(long long d[], int l, int r)
{
    if(r - l < 5)
        return medianof5elements(d, l, r);
    int median5, medianofmedians, sr;
    for(int i = l; i <= r; i += 5)
    {
        sr = i + 4;
        if(sr > r)
            sr = r;
        median5 = medianof5elements(d, i, sr);
        swap(d[median5], d[l + (int)floor((i - l) / 5)]);
    }
    medianofmedians = (r - l) / 10 + l + 1;
    return select(d, l, l + floor((r - l) / 5), medianofmedians);
}

int medianof5elements(long long d[], int l, int r)
{
    for(int i = l + 1; i <= r; i++)
    {
        int temp = d[i];
        int j = i - 1;
        while(j >= l && d[j] > temp)
        {
            d[j+1] = d[j];
            j--;
        }
        d[j+1] = temp;
    }
    return floor((l + r) / 2);
}
