#include "BB.cpp"
TEST(checkBB, test_BB1) {
    // arrange
    //cout <<"Test 1 calling ..... ";
    //the first and second bounding box
    int BB1[4] = { 1, 1, 3, 3 };
    int BB2[4] = { 2, 2, 4, 4 };

    BB BB_class(BB1);
    float result = 0.14285715;
    EXPECT_FLOAT_EQ(result, BB_class.IoU(BB2));
}
