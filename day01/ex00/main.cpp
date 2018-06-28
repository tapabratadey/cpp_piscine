#include "Pony.Class.hpp"

Pony  *ponyOnTheHeap(std::string string) { return new Pony(string); }
Pony  ponyOntheStack(std::string string) { return Pony(string); }

int main()
{
    Pony pony = ponyOntheStack("Eee-haa I am on the stack.");
    Pony *ponyHeap = ponyOnTheHeap("Eee-haa I am on the heap.");
    delete ponyHeap; //heap obj is destroyed.
    return (0);
}