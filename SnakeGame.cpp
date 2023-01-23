#include<iostream>
#include<conio.h>
using namespace std;


int snakegame(char you,char system);

int main(){
    char system,you;

    /*s=snake g=gun w=water
    //ss ,sw,sg
    //ws,ww,wg
    //gs,gg,gw
    ww,gg,ss = draw conditons (0)
    sw,,wg,gs=win(1)
    others=loss(-1)
    */
    
    
    int n = rand()%100 +1;
    if (n<33)
    {
        system ='s';
    }
    else if (n>33 && n<66)
    {
        system ='w';
    }
    else
    {
        system ='g';
    }

    cout<<"enter the 's'for snake,'w' for water and 'g' for gun : "<< endl ;
    cin>>you;

    int result = snakegame(you,system);
    if(result==1){
        cout<<"you have won this game"<<endl;
    }
    else if (result==0)
    {
        cout<<"you draw the game"<<endl;
        /* code */
    }
    else{
        cout<<"you loss the game"<<endl;
    }

    cout<<"you choose "<< you<<" and computer choose "<<system<<endl;
    return 0;
}

int snakegame(char you,char system){

    if (you=='w' && system =='g')
    {
        return 1;
    }
    else if (you=='g' && system=='w')
    {
        return -1;
    }

    if (you=='s' && system=='w')
    {
        return 1;
    }
    else if (you=='w' && system=='s')
    {
        return -1;
    }

    if (you=='g' && system=='s')
    {
        return 1;
    }
    else if (you=='s' && system=='g')
    {
        return -1;
    }

    if (you == system)
    {
        return 0;
    }
}
