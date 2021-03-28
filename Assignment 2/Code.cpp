#include <bits/stdc++.h>
using namespace std;

int findStain(vector<vector<int>> arr, int m, int n)
{
    
    int pixel = INT_MAX;
    
    for(int row = 0; row < m; row++)
    {
        int lo = 0, hi = n - 1;
        
        while(lo <= hi)
        {
            int mid = (lo + hi)/2;
            
            if(mid == 0){
            
                if(arr[row][mid] < arr[row][mid+1])
                {
                    pixel = min(pixel,arr[row][mid]);
                    break;
                }
                else
                {
                    lo = mid + 1;
                }
            }
            else if(mid == n - 1){
            
                if(arr[row][mid] < arr[row][mid-1])
                {
                    pixel = min(pixel,arr[row][mid]);
                    break;
                }
                else
                {
                    hi = mid - 1;
                }
            }
            else if(arr[row][mid] < arr[row][mid-1] && arr[row][mid] < arr[row][mid+1])
            {
                pixel = min(pixel,arr[row][mid]);
                break;
            }
            else if(arr[row][mid] < arr[row][mid-1])
            {
                lo = mid + 1;
            }
            else
            {
                hi = mid - 1;
            }
        }
    }
    return pixel;
}

int main()
{
    int m, n;
    cin >> m >> n;
    
    vector<vector<int>> arr(m,vector<int>(n));
    int x;
    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            cin >> x;
            arr[i][j] = x;
        }
    }
    
    cout << findStain(arr,m,n) << endl;
    return 0;
}