#include <iostream>
#include "IllegalCoordinateException.hpp"
#include "IllegalCharException.hpp"

using namespace std;

class Node{

        public:
        char ch;
        Node();
        Node(char c);
        void setch(char c);
        Node& operator=(char c);
        operator char()const{
                return ch;
        }
};

class Board{
 
   public:
        int size;
        Node *board;
        Board();
        Board(int inputsize);
        char getValue(int M, int N);   
        char& operator[](Point po);
        void operator=(char c);
        void operator=(Board& b);
        friend ostream& operator<<(ostream& out, Board &b); 
        ~Board();  

};


