//Given an array of integers arr, and three integers a, b and c. You need to find the number of good triplets.

class Solution {
public:
    int countGoodTriplets(vector<int>& arr, int a, int b, int c) {
     int x=0;
     for(int i=0;i<arr.size()-2;i++)
     {
         
         for(int j=i+1;j<arr.size()-1;j++)
         {
             if( (abs(arr[i]-arr[j])<=a) ){
             for(int k=j+1;k<arr.size();k++)
             {
                  if(  abs(arr[j] - arr[k]) <= b && abs(arr[i] - arr[k]) <= c)
                 x++;
             }
         }
     }   }
     return x ;
    }
};
