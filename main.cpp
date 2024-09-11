#include <iostream>

using namespace std;

int main()
{
    int p;
    printf("What is the initial price of plot?\n");
    scanf("%d",&p);
    printf("Price quoted by player 1:\n");
    int p1;
    scanf("%d",&p1);
    printf("Price quoted by player 2:\n");
    int p2;
    scanf("%d",&p2);
    if(p1>p2) {
            printf("Player 2 got the deal.\n");
            printf("Best response here would be both the players quoting it for %d\n",p);
    }
    if(p1<p2){
            printf("Player 1 got the deal.\n");
            printf("Best response here would be both the players quoting it for %d\n",p);
    }
    if(p1==p2 && p1!=p) {
            printf("Both the players will get the deal, but one of them may reduce the price to get all the orders.\n");
            printf("Best response here would be both the players quoting it for %d\n",p);
    }
    if(p==p1 && p==p2){
            printf("Both the players will get half of the deal, since they have played optimally.\n");
            printf("Mutual best response is achieved here!");
    }
    return 0;
}
