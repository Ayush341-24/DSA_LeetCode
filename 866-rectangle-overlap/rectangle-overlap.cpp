class Solution {
public:
    bool isRectangleOverlap(vector<int>& rec1, vector<int>& rec2) {
        int x1 = rec1[0] , x2 = rec1[2];
        int y1 = rec1[1] , y2 = rec1[3];
        int x1_ = rec2[0] , x2_ = rec2[2];
        int y1_ = rec2[1] , y2_ = rec2[3];
        return (min(x2 , x2_) > max(x1 , x1_)) && ((min(y2 , y2_) > max(y1 , y1_)));
    }
};