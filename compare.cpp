/*input

*/
#include<bits/stdc++.h>
using namespace std;
 void swapp(int *x, int *y){
 	int temp=*x;
 	*x=*y;
 	*y=temp;
 }
void reversse(vector<int> v, int start) {
        int i = start, j = v.size()- 1;
        while (i < j) {
            swapp(&A[i],&A[j]);
            i++;
            j--;
        }
    }
 vector<int> nextPermution(vector<int> A){

    public void nextPermutation(vector<int> A) {
        int i = A.size() - 2;
        while (i >= 0 && A[i + 1] <= A[i]) {
            i--;
        }
        if (i >= 0) {
            int j = A.size() - 1;
            while (j >= 0 && A[j] <= A[i]) {
                j--;
            }
            swapp(&A[i],&A[j]);
        }
        reversse(&v,i+1);
    }

    void reversse(vector<int> v, int start) {
        int i = start, j = v.size()- 1;
        while (i < j) {
            swapp(&A[i],&A[j]);
            i++;
            j--;
        }
    }

    private void swap(int[] nums, int i, int j) {
        int temp = nums[i];
        nums[i] = nums[j];
        nums[j] = temp;
    }
}
 
 }
int main(){
	
	return 0;
}
