#include "gtest/gtest.h"
#include "gmock/gmock.h"
#include <limits.h>
#include <iostream>//cout
#include <iomanip>//stod string to double
#include <vector>//vector
#include <memory>//shared_ptr
#include <cmath>//pow
#include "hw1.h"
/*
TEST(APHW1TEST,ReadData)
    {
        auto table = read_csv("data.csv");
        EXPECT_EQ(10, table.size());
        EXPECT_EQ(2.7810836, table[0]->at(0));
        EXPECT_EQ(0, table[0]->at(2));
        EXPECT_EQ(2.759262235, table[5]->at(1));
        
    }
    TEST(APHW1TEST,Predict)
    {
        auto table = read_csv("data.csv");
        std::vector<double> weights{-0.1,0.20653640140000007, -0.23418117710000003};
        EXPECT_EQ(0,predict(*table[0],weights));
        EXPECT_EQ(1,predict(*table[5],weights)); 
    }
    TEST(APHW1TEST,TrainTest)
    {
        auto table = read_csv("data.csv");
        std::vector<double> weights=train(table,0.1,5);
        EXPECT_EQ(-0.1,weights[0]);
        ASSERT_NEAR(0.206536,weights[1],0.0001); 
        ASSERT_NEAR(-0.23418,weights[2],0.0001);
    }
    
*/