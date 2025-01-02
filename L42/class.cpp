#include<bits/stdc++.h>
//#include"hero.cpp"

using namespace std;


class hero{
    

    //properties
    //char name[100];

    private:
    int health;

    //
    public:
    char level;

    void print(){
        cout<<level<<endl;
    }

    int getHealth(){
        return health;
    }
    char getLevel(){
        return level;
    }
    void setHealth(int h){
        health = h;
    }
    void setLevel(char ch){
        level = ch;
    }


};
 
int main() {

    //creation of object
    hero ramesh; 

    //use getter to access private data members
    cout<<" ramesh health is "<<ramesh.getHealth()<<endl;
    //use setter to modify private data members
    ramesh.setHealth(70);
    //ramesh.health=70;
    ramesh.level='A';
    

    //cout<<"size "<<sizeof(h1);

    //cout<<"health is "<<ramesh.health<<endl;
    cout<<" ramesh health is "<<ramesh.getHealth()<<endl;
    cout<<"level is "<<ramesh.level<<endl;



    
    return 0;
}