#ifndef STUDENTNODE_H
#define STUDENTNODE_H

#include <string>
using namespace std;

struct StudentNode
{
    string name;
    double average;
    StudentNode *link;
};

typedef StudentNode* NodePtr;

#endif // STUDENTNODE_H
