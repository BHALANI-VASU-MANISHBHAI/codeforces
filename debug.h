#ifndef DEBUG_H
#define DEBUG_H

#include <bits/stdc++.h>
using namespace std;

void _print(int t) { cerr << t; }
void _print(long long t) { cerr << t; }
void _print(unsigned int t) { cerr << t; }
void _print(unsigned long long t) { cerr << t; }
void _print(float t) { cerr << t; }
void _print(double t) { cerr << t; }
void _print(long double t) { cerr << t; }
void _print(char t) { cerr << '\'' << t << '\''; }
void _print(const string &t) { cerr << '"' << t << '"'; }
void _print(bool t) { cerr << (t ? "true" : "false"); }

// Printing pair
template <class T, class V>
void _print(const pair<T, V> &p)
{
    cerr << "{";
    _print(p.first);
    cerr << ", ";
    _print(p.second);
    cerr << "}";
}

// Printing vector
template <class T>
void _print(const vector<T> &v)
{
    cerr << "[ ";
    for (auto &i : v)
    {
        _print(i);
        cerr << " ";
    }
    cerr << "]";
}

// Printing set
template <class T>
void _print(const set<T> &s)
{
    cerr << "{ ";
    for (auto &i : s)
    {
        _print(i);
        cerr << " ";
    }
    cerr << "}";
}

// Printing unordered_set
template <class T>
void _print(const unordered_set<T> &s)
{
    cerr << "{ ";
    for (auto &i : s)
    {
        _print(i);
        cerr << " ";
    }
    cerr << "}";
}

// Printing map
template <class T, class V>
void _print(const map<T, V> &m)
{
    cerr << "{ ";
    for (auto &i : m)
    {
        _print(i);
        cerr << " ";
    }
    cerr << "}";
}

// Printing unordered_map
template <class T, class V>
void _print(const unordered_map<T, V> &m)
{
    cerr << "{ ";
    for (auto &i : m)
    {
        _print(i);
        cerr << " ";
    }
    cerr << "}";
}

// Printing stack
template <class T>
void _print(stack<T> s)
{
    vector<T> temp;
    while (!s.empty())
    {
        temp.push_back(s.top());
        s.pop();
    }
    reverse(temp.begin(), temp.end());
    _print(temp);
}

// Printing queue
template <class T>
void _print(queue<T> q)
{
    vector<T> temp;
    while (!q.empty())
    {
        temp.push_back(q.front());
        q.pop();
    }
    _print(temp);
}

// Printing priority queue (max heap)
template <class T>
void _print(priority_queue<T> pq)
{
    vector<T> temp;
    while (!pq.empty())
    {
        temp.push_back(pq.top());
        pq.pop();
    }
    _print(temp);
}

// Printing priority queue (min heap)
template <class T>
void _print(priority_queue<T, vector<T>, greater<T>> pq)
{
    vector<T> temp;
    while (!pq.empty())
    {
        temp.push_back(pq.top());
        pq.pop();
    }
    _print(temp);
}

// Debug function to print multiple values
template <class T, class... V>
void _print(T t, V... v)
{
    _print(t);
    if (sizeof...(v))
        cerr << ", ";
    _print(v...);
}

#endif // DEBUG_H
