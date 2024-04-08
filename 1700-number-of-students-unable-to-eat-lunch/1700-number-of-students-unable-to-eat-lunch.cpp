class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches) {
        queue<int> student;
        stack<int> sandwich;
        
        for(int i=sandwiches.size()-1;i>=0;i--){
            sandwich.push(sandwiches[i]);
        }
        
        for(int i=0;i<students.size();i++){
            student.push(students[i]);
        }
        
        int isLoop=0;
        while(true){
            if(isLoop==student.size())
                break;
            
            if(student.front()!=sandwich.top()){
                student.push(student.front());
                student.pop();
                isLoop++;
            }
            else{
                isLoop=0;
                student.pop();
                sandwich.pop();
            }
        }
        
        return student.size();
    }
};