class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches) {
        while (!students.empty()) {
            int fStud = students.front();

            int count = 0;
            for (int x:students) {
                if (x != sandwiches[0]) {
                    count++;
                }
            }
            if (count == students.size()) {
                return students.size();
            }
            if (fStud == sandwiches.front()) {
                students.erase(students.begin());
                sandwiches.erase(sandwiches.begin());
            }else {
                students.erase(students.begin());
                students.push_back(fStud);
            }
        }
        return 0;
    }
};