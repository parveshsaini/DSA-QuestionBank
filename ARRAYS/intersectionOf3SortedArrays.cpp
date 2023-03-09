/*
Given three integer arrays arr1, arr2 and arr3 sorted in strictly increasing order,
return a sorted array of only the integers that appeared in all three arrays.

*/

vector <int> commonElements (int A[], int B[], int C[], int n1, int n2, int n3)
        {
            int i,j,k;
            i=j=k=0;
            
            set<int> s;
            vector<int> ans;
            
            while(i<n1 && j<n2 && k<n3){
                if(A[i]==B[j] && B[j]==C[k]){
                    s.insert(A[i]);
                    i++,j++,k++;
                }
                
                else if(A[i]<B[j]){
                    i++;
                }
                
                else if(B[j]<C[k]){
                    j++;
                }
                
                else{
                    k++;
                }
            }
            
            for(auto val: s){
                ans.push_back(val);
            }
            
            return ans;
        }
