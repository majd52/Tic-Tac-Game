#include <iostream>
#include<windows.h>
#include<time.h>
#include<cstdlib>
using namespace std;
char square[9]={'1','2','3','4','5','6','7','8','9'};
void board(){
    system("cls");
cout <<"    |"<<"    |"<<"    "<<endl;
cout <<" "<<square[0]<<"  |"<<" "<<square[1]<<"  |"<<" "<<square[2]<<"  "<<endl;
cout <<"____|"<<"____|"<<"____"<<endl;
cout <<"    |"<<"    |"<<"    "<<endl;
cout <<" "<<square[3]<<"  |"<<" "<<square[4]<<"  |"<<" "<<square[5]<<"  "<<endl;
cout <<"____|"<<"____|"<<"____"<<endl;
cout <<"    |"<<"    |"<<"    "<<endl;
cout <<" "<<square[6]<<"  |"<<" "<<square[7]<<"  |"<<" "<<square[8]<<"  "<<endl;
cout <<"    |"<<"    |"<<"    "<<endl;


}
bool checkwins(){
if (square[0]==square[1]&&square[1]==square[2])
    return 1;
else if(square[0]==square[3]&&square[3]==square[6])
return 1;
else if(square[0]==square[4]&&square[4]==square[8])
    return 1;
else if(square[1]==square[4]&&square[4]==square[7])
return 1;
else if(square[3]==square[4]&&square[4]==square[5])
    return 1;
else if(square[6]==square[7]&&square[7]==square[8])
    return 1;
else if(square[6]==square[4]&&square[4]==square[2])
    return 1;
else if(square[8]==square[5]&&square[5]==square[2])
    return 1;
else
return 0;


}
bool gamedraw(){
if (square[0]!='1'&&square[1]!='2'&&square[2]!='3'&&square[3]!='4'&&square[4]!='5'&&square[5]!='6'&&square[6]!='7'&&square[7]!='8'&&square[8]!='9')
return 1;
else
    return 0;




}
void choices(int &x,int &player,char &point){
    int choice;
    bool flag=true;
if (x==2&&player==2){
while (flag){
    choice=rand()%10+1;

    if (choice==1&&square[0]=='1'){
    square[0]=point;
    flag=0;}
    else if(choice==2&&square[1]=='2'){
        square[1]=point;
        flag=0;}
    else if(choice==3&&square[2]=='3'){
        square[2]=point;
        flag=0;}
     else if(choice==4&&square[3]=='4'){
        square[3]=point;
        flag=0;}
 else if(choice==5&&square[4]=='5'){
        square[4]=point;
        flag=0;}
 else if(choice==6&&square[5]=='6'){
        square[5]=point;
        flag=0;}
 else if(choice==7&&square[6]=='7'){
        square[6]=point;
        flag=0;}
 else if(choice==8&&square[7]=='8'){
        square[7]=point;
        flag=0;}
 else if(choice==9&&square[8]=='9'){
        square[8]=point;
        flag=0;}



}}
else{
cin>>choice;


    if (choice==1&&square[0]=='1')
    square[0]=point;
    else if(choice==2&&square[1]=='2')
        square[1]=point;
    else if(choice==3&&square[2]=='3')
        square[2]=point;
     else if(choice==4&&square[3]=='4')
        square[3]=point;
 else if(choice==5&&square[4]=='5')
        square[4]=point;
 else if(choice==6&&square[5]=='6')
        square[5]=point;
 else if(choice==7&&square[6]=='7')
        square[6]=point;
 else if(choice==8&&square[7]=='8')
        square[7]=point;
 else if(choice==9&&square[8]=='9')
        square[8]=point;

else {
     cout<<endl <<"you enter a wrong number !"<<endl;
   player++;
   cin.ignore();
   cin.get();






}




}
}


int main(){
    int x,choice;
    int player=1;
cout <<"1- 1 against 1"<<endl;
cout<<"2- 1 against computer"<<endl;
cin>>x;


while (1){
    player=(player%2)?1:2;
   char point =(player==1)?'x':'o';
board();
cout <<endl<<"Player "<<player<<" your Choice : ";
//////////////////
choices(x,player,point);
/////////

board();
if (checkwins()){
        cout<<"\tplayer "<<player<<" is wins !"<<endl;

    break;

}
if (gamedraw()){
    cout<<endl <<"\t Game Draw";

    break;

}
++player;



}
};
