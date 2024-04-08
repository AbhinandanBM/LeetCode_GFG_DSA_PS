class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches) {
        queue<int> student,sandwich;
        
        for(int i=0;i<sandwiches.size();i++){
            sandwich.push(sandwiches[i]);
        }
        
        for(int i=0;i<students.size();i++){
            student.push(students[i]);
        }
        
        int isLoop=0;
        while(true){
            if(isLoop==student.size())
                break;
            
            if(student.front()!=sandwich.front()){
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