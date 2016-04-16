#ifndef PAIR_H
#define PAIR_H

#include <string>
using namespace std;

class Pair
{
    public:
        Pair(string first, int second, Pair* aLink) : first(first), second(second), link(aLink) {}
        string getFirst() const { return first; };
        int getSecond() const { return second; };
        Pair* getLink() const { return link; };
        void setLink(Pair* aLink) { link = aLink; };
    private:
        string first;
        int second;
        Pair* link;
};
typedef Pair* NodePtr;

#endif // PAIR_H
