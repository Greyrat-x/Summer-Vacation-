/*
二分查找：查找一个数字是否存在并输出该数字在序列的第一次出现的编号，若不存在则输出-1
第一行输入两个数m，n，表示数字个数和查询次数
第二行 m个数字为原数组
第三行 n个要查询的数字
*/

#include <bits/stdc++.h>
using namespace std;

int main(){
    int m,n;
    cin >> m >> n;
    int a[m];
    for(int i=0;i<m;i++) cin >> a[i];
    for(int i=0;i<n;i++){
        int x;
        cin >> x;
        int left=0,right=m-1,ans=-1;
        while(left <= right){
            int mid = (left+right)/2;
            if(a[mid] < x){
                left=mid+1;
            }
            else if(a[mid] > x){
                right=mid-1;
            }
            else{
                ans=mid+1;
                right=mid-1;
            }
        }
        cout << ans << ' ';
    }    
}