#ifndef LIST_LIB
#define LIST_LIB

#include <string>
#include <list>

#include "functions.hpp"

namespace LIST_LIB
{
    const int BUFFER_SIZE = 255;
} // namespace LIST_LIB

struct IntList1D_element
{
    int data;
    IntList1D_element *next = nullptr;

    IntList1D_element(){};

    IntList1D_element(int data, IntList1D_element *next = nullptr)
    {
        this->data = data;
        this->next = next;
    }
};

struct IntList2D_element
{
    IntList2D_element *previous = nullptr;
    int data;
    IntList2D_element *next = nullptr;

    IntList2D_element(IntList2D_element *previous = nullptr, int data = 0, IntList2D_element *next = nullptr)
    {
        this->previous = previous;
        this->data = data;
        this->next = next;
    }
};

typedef IntList1D_element **intList1D;
typedef IntList2D_element **intList2D;

enum MODE_STOP
{
    ZERO,
    IO_EOF,
    NEWLINE,
    CHAR,
};
enum FLAGS
{
    USE_CYCLE,
    USE_RECURSION,
};
enum CUT_MODE
{
    CUT_BEFORE,
    CUT_AFTER,
};
enum RETURN_TYPE1D
{
    LIST1D
};
enum RETURN_TYPE2D
{
    LIST2D
};

bool init(intList1D &list, int number);
bool is_inited(const intList1D list);

int maxElementData(const intList2D list);
int greaterThenIndex(const intList2D list, int index);
int sumChain(const intList2D list);
int findFirstOf(const intList1D list, int number);

void deleteList(intList1D list);
void deleteList(intList2D list);

void printBegin(const intList1D list);
void printBegin(const intList2D list);
void printEnd(const intList2D list);

void pushBack(intList1D &list, int number);
void pushBack(intList1D &list, IntList1D_element *element);
void pushFront(intList1D &list, int number);

IntList1D_element *popBack(intList1D &list);
IntList1D_element *popFront(intList1D &list);
intList1D popByIndexes(intList1D list, const intList1D indexes);

void appendFront(intList1D list, intList1D appendList);
void appendBack(intList1D list, intList1D appendList);

bool insertUpperSorted(intList1D &begin, int number, FLAGS mode = USE_CYCLE);

intList1D cutByIndexRange(intList1D &list, int from, int to);

intList1D readArrayKeyboard(MODE_STOP mode = IO_EOF, uint buffer_size = UINT8_MAX, bool printInfo = false);
std::list<intList1D> fileToLists(const std::string filename, const char delimiter = '\n');
intList1D mergeUpperSorted(intList1D sortedListA, intList1D sortedListB);
intList1D mergeByAction(const intList1D listA, const intList1D listB, int action(int fromA, int fromB));
intList1D reverse(const intList1D source);
intList1D getIndexesByData(const intList1D list, int data);

namespace comparator
{
    bool positive(int number);
    bool negative(int number);
    bool greaterThanData(int number, int data);
    bool lesserThanData(int number, int data);
}

namespace merge_actions
{
    int sum(int a, int b);
} // namespace merge_actions

namespace index_actions
{
    void pushBefore(IntList1D_element **prev, IntList1D_element **current, int data);
} // namespace index_actions

intList1D filter(const intList1D source, bool comparator(int));
intList1D filter(const intList1D source, bool comparator(int, int), int comparator_data);

void doActionOnIndexes(intList1D list, const intList1D indexes, void index_action(IntList1D_element *prev, IntList1D_element *current));
void doActionOnIndexes(intList1D list, const intList1D indexes, void index_action(IntList1D_element **prev, IntList1D_element **current, int data), int index_action_data);

#endif //LIST_LIB