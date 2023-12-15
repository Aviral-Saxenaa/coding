#include <bits/stdc++.h>
using namespace std;

int arr1[100], arr2[100];

int topone, toptwo = -1;

vector<int> v;

void pushinone(int val)
{
        topone++;
        arr1[topone] = val;
}

void pushintwo(int val)
{
        toptwo++;
        arr2[toptwo] = val;
}

void popinone()
{
        if (topone == -1)
        {
                v.push_back(-1);
        }
        else
        {
                v.push_back(arr1[topone]);
                topone--;
        }
}

void popintwo()
{
        if (toptwo == -1)
        {
                v.push_back(-1);
        }
        else
        {
                v.push_back(arr2[toptwo]);
                topone--;
        }
}

int main()
{

        cout << "1) Push in 1st stack";
        cout << "2) Push in 2nd stack";
        cout << "3) pop in 1st stack";
        cout << "4) pop in 2nd stack";
        cout << "5) exit";

        int n;

        int val;
        do
        {
                cout << "\n enter choice \n";
                cin >> n;
                switch (n)
                {
                case 1:
                        cout << "enter valur \n";
                        cin >> val;
                        pushinone(val);
                        break;

                case 2:
                        cout << "enter valur \n";
                        cin >> val;
                        pushintwo(val);
                        break;

                case 3:
                        popinone();
                        break;

                case 4:

                        popintwo();
                        break;

                case 5:
                        break;
                }

        } while (n != 5);

        for (int i = 0; i < v.size(); i++)
        {
                cout << v[i] << ' ';
        }
}