#include <bits/stdc++.h>

using namespace std;

struct Student {
    public:
    string name;
    int cls;
    char section;
    int id;
    int math_marks;
    int eng_marks;
    
    int total_marks() const {
        return math_marks + eng_marks;
    }
};
bool cmp(Student a,Student b)
{
    if (a.total_marks() == b.total_marks()) {
        return a.id < b.id ;
    } else {
        return a.total_marks() > b.total_marks();
    }
}


int main() {
    int N;
    cin >> N;
    cin.ignore();
   Student students[100];

   
    for (int i = 0; i < N; ++i) {
        cin >> students[i].name >> students[i].cls >> students[i].section >> students[i].id >> students[i].math_marks >> students[i].eng_marks;
    }
    sort(students, students+N, cmp);

    for (int i = 0; i < N; ++i) {
        cout << students[i].name << " " << students[i].cls << " " << students[i].section << " " << students[i].id << " " << students[i].math_marks << " " << students[i].eng_marks << endl;
    }

    return 0;
}
