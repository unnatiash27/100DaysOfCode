//Generate an m x n matrix that contains the integers in the linked list presented in spiral order (clockwise), starting from the top-left of the matrix. If there are remaining empty spaces, fill them with -1.
//Return the generated matrix.


class Solution {
public:
    vector<vector<int>> spiralMatrix(int m, int n, ListNode* head) {
        vector<vector<int>> matrix(m, vector<int> (n, -1));
        int left = 0, right = n-1, top = 0, bottom = m-1;
        while(left<=right and top<=bottom){
            for(int i = left; i<=right; i++){
                if(head){
                    matrix[top][i] = head->val;
                    head = head->next;
                }
            }
            top++;
            for(int i = top; i<=bottom; i++){
                if(head){
                    matrix[i][right] = head->val;
                    head = head->next;
                }
            }
            right--;
            for(int i = right; top<=bottom && i>=left; i--){ 
                if(head){
                    matrix[bottom][i] = head->val;
                    head = head->next;
                }
            }   
            bottom--;
            for(int i = bottom; left<=right && i>=top; i--){
                if(head){
                    matrix[i][left] = head->val;
                    head = head->next;
                }
            }
            left++;
        }
        return matrix;
    }
};
