#include <bits/stdc++.h>

using namespace std;

struct Student {
    public:
    string name;
    int cls;
    char section;
    long long id;  
    int math_marks;
    int eng_marks;
    
};
bool cmp(Student a,Student b)
{
    if (a.eng_marks != b.eng_marks) {
        return a.eng_marks > b.eng_marks;
    }
    if (a.math_marks != b.math_marks) {
        return a.math_marks > b.math_marks;
    }
    return a.id < b.id;
}


int main() {
    int N;
    cin >> N;
   Student students[1000];

    for (int i = 0; i < N; ++i) {
        cin >> students[i].name >> students[i].cls >> students[i].section >> students[i].id >> students[i].math_marks >> students[i].eng_marks;
    }
    sort(students, students+N, cmp);

    for (int i = 0; i < N; ++i) {
        cout << students[i].name << " " << students[i].cls << " " << students[i].section << " " << students[i].id << " " << students[i].math_marks << " " << students[i].eng_marks << endl;
    }

    return 0;
}
