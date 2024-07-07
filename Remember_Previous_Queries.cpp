#include <bits/stdc++.h>
using namespace std;

int main() {
    int Q;
    cin >> Q;

    list<int>mylist;
    while (Q--) {
        int X, V;
        cin >> X >> V;
        if (X == 0) {
            mylist.push_front(V);
        } 
        else if (X == 1) {
            mylist.push_back(V);
        } 
        else if (X == 2) {
         int sz=mylist.size();
            if (V < 0 || V >= sz) 
            {
                cout << "L -> ";
                for (int val : mylist) {
                     cout << val << " ";
                    }
                 cout << endl;
        
                  mylist.reverse();
                 cout << "R -> ";
                 for (int num: mylist) {
                    cout << num << " ";
                  }
                    cout << endl;
                  mylist.reverse();
                continue;
              } 
            else {
                auto it = mylist.begin();
                for (int i = 0; i < V; i++) {
                    it++;
                }
                mylist.erase(it);
            }
        }

        cout << "L -> ";
        for (int val : mylist) {
            cout << val << " ";
        }
        cout << endl;
        
        mylist.reverse();
        cout << "R -> ";
        for (int num: mylist) {
            cout << num << " ";
        }
        cout << endl;
        mylist.reverse();
    }
    

    return 0;
}
