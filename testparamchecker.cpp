#include "paramchecker.h"
#include <gtest/gtest.h>
 
TEST(VitalsTest, BPM) { 
    ASSERT_EQ(true, vitalsAreOk(100, 100, 50));
}
 
TEST(VitalsTest, SPO2) {
    ASSERT_EQ(false, vitalsAreOk(100, 40, 50));
}

TEST(VitalsTest, BPM) {
    ASSERT_EQ(false, vitalsAreOk(90, 70, 50, 100));
}
 
int main(int argc, char **argv) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
