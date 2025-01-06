class Solution {
public:
    vector<int> minOperations(string boxes) {
        int n = boxes.size();
        vector<int> operations(n, 0);
        
        int count = 0, steps = 0;
        for (int i = 0; i < n; i++) {
            operations[i] += steps;
            count += (boxes[i] == '1');
            steps += count;
        }
        
        count = 0; steps = 0;
        for (int i = n - 1; i >= 0; i--) {
            operations[i] += steps;
            count += (boxes[i] == '1');
            steps += count;
        }
        
        return operations;
    }
};