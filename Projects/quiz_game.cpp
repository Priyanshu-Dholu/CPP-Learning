/*
I am trying to make a quiz game.

You will be given 5 questions and
if you answer them correctly you won.
*/

class Game{
    private:
        int option;
        int answer;
    public:
        
}

#include <iostream>
using namespace std;

int main()
{
    printf("\n Let's Get Started!\n\n");

    int op;
    printf("You Will Have To Answer 5 Question\n");
    printf("If You Answer Them correctly you win.\n");

    printf("Here Comes Question No :- 1");

    printf("\nWho Is The Current Prime Minister Of India?\n");
    printf("1) Rajnath Goving  2) Pankaj Tripathi\n3) Narendra Modi  4)Doland Trump\n");
    printf("Enter: ");
    scanf("%d", &op);

    return 0;
}