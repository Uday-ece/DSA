class Solution {
public:
    int maxArea(vector<int>& height) {
      int i=0;
      int j = height.size()-1;
      int maxi = 0;
      while(i<j){
       int min_hieght = min(height[i],height[j]);
        maxi = max(maxi,min_hieght*(j-i));
        if(height[i]>height[j])
               j--;
               else i++;
      }return maxi;

    }
};