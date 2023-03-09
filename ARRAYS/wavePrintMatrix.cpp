// Given an m x n matrix, return all elements of the matrix in wave order.

vector<int> ans;
    int i=0, j=0;

    while(j<mCols){

        //IF COL NUMBER IS EVEN, ROW INCREASES FROM 0
        if(j%2==0){
            for(i=0; i<nRows; i++){               
                ans.push_back(arr[i][j]);          
            }
            j++;
        }

        //IF COL NUMBER IS ODD, ROW DECREASES FROM LAST INDEX
        else{
            for(i=nRows-1; i>=0; i--){              
                ans.push_back(arr[i][j]);           
            }
            j++;
        }

    }
    return ans;
