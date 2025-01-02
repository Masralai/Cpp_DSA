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

    hero(){
        cout<<"simple constructor called"<<endl;
    }


    //parameterised constructor
    hero(int health){
        //cout<<"this "<<this <<endl;
        this -> health= health;
    }
    hero(int health,char level){
        //cout<<"this "<<this <<endl;
        this -> level= level;
        this -> health= health;
    }

    //copy constructor
    hero(hero& temp){

        cout<<"copy constructor called "<<endl;
        this -> level= temp.level;
        this -> health= temp.health;  
    }


    void print(){
        cout<<"health is "<<this->health<<endl;
        cout<<"level is "<<this->level<<endl;
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

    hero S(70,'C');
    S.print();


    //copy constructor
    hero R(S);
    //R.health=suresh.health;
    //R.level = suresh.level;
    R.print();




















/*
    //hero tt;

    //object created statically
    hero ramesh(10);
    //cout<<"address of ramesh "<<&ramesh<<endl;
    ramesh.print();


    //dynamically
    hero *h = new hero(11);
    h->print();


    hero temp(22,'B');
    temp.print();

*/


    /*
    //static allocation
    hero a;
    a.setLevel('B');
    a.setHealth(90);
    cout<<" level is "<<a.level<<endl;
    cout<<" health is "<<a.getHealth()<<endl;

    //dynamically
    hero *b  = new hero;
    b->setLevel('A');
    b->setHealth(80);
    cout<<" level is "<<b->level<<endl;
    cout<<" health is "<<(*b).getHealth()<<endl;
*/
     



    // //creation of object
    // hero ramesh; 

    // //use getter to access private data members
    // cout<<" ramesh health is "<<ramesh.getHealth()<<endl;
    // //use setter to modify private data members
    // ramesh.setHealth(70);
    // //ramesh.health=70;
    // ramesh.level='A';
    

    // //cout<<"size "<<sizeof(h1);

    // //cout<<"health is "<<ramesh.health<<endl;
    // cout<<" ramesh health is "<<ramesh.getHealth()<<endl;
    // cout<<"level is "<<ramesh.level<<endl;

    // cout<<sizeof(ramesh);



    
    return 0;
}