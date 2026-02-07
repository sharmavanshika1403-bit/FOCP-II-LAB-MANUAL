#include<iostream>
int main(){
    int score1,score2,score3;
    std::cout<<"enter scores of player-score1,score2 and score3 respectively:";
    std::cin>>score1>>score2>>score3;
    if(score1>score2 && score1>score3){
        std::cout<<"player 1 is winner";
    }else if(score2>score1 && score2>score3){
        std::cout<<"player 2 is winner";
    }else if(score3>score1&& score3>score2){
        std::cout<<"player 3 is winner";
    }else{
        std::cout<<"its a tie";
    }
    return 0;
    

}