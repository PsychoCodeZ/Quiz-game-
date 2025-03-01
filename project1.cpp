//Quiz for you
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){

    int a,b,score,c;
    score = 0;
    cout<<"In Which Segment YOU are interested to play QUIZ: "<<"\n";
    cout<<"1 -> Sports"<<"\n";
    cout<<"2 -> Entertainment"<<"\n";
    cout<<"3 -> General Knowledge"<<"\n";
    cout<<"4 -> Mathematics"<<"\n";
    cout<<"Enter your favourite segment: ";
    cin>>a;
    cout<<"\n";

    // Sports section 

    if(a==1){

        cout<<"YOU OPT FOR SPORTS"<<"\n";
        cout<<"SO LET'S START THE QUIZ "<<"\n";

        cout<<"\n";
        cout<<"Q1 -> Lionel Messie is a player of which game "<<"\n";
        cout<<"1 -> Cricket"<<"\n";
        cout<<"2 -> VolleyBall"<<"\n";
        cout<<"3 -> BasketBall"<<"\n";
        cout<<"4 -> Football"<<"\n";
        cout<<"Enter Option: ";
        cin>>b;
        if(b==4){
            cout<<"'Congratulations' You are Right"<<"\n";
            score = score+100;
        }
        else{
             cout<<"'OOPs' You are Wrong"<<"\n";
            score = score-50;
        }
         cout<<"\n";
        cout<<"Q2 -> In tennis, what is the name of the annual tournament held on clay courts in Paris 2023 "<<"\n";
        cout<<"1 -> German Open"<<"\n";
        cout<<"2 -> French Open"<<"\n";
        cout<<"3 -> Rio Olympics"<<"\n";
        cout<<"4 -> Common Wealth Games"<<"\n";
        cout<<"Enter Option: ";
        cin>>b;
        if(b==2){
            cout<<"'Congratulations' You are Right"<<"\n";
            score = score+100;
        }
        else{
            cout<<"'OOPs' You are Wrong"<<"\n";
            score = score-50;
        }
        cout<<"\n";
        cout<<"Q3 -> NBA Championship is related to which game "<<"\n";
        cout<<"1 -> Chess"<<"\n";
        cout<<"2 -> VolleyBall"<<"\n";
        cout<<"3 -> BasketBall"<<"\n";
        cout<<"4 -> Hockey"<<"\n";
        cout<<"Enter Option: ";
        cin>>b;
        if(b==3){
            cout<<"'Congratulations' You are Right"<<"\n";
            score = score+100;
        }
        else{
             cout<<"'OOPs' You are Wrong"<<"\n";
            score = score-50;
        }
        cout<<"\n";
        cout<<"Q4 -> Which team won the NBA championship in the 2022-2023 season "<<"\n";
        cout<<"1 -> Denver Nuggets"<<"\n";
        cout<<"2 -> Chicago Bulls"<<"\n";
        cout<<"3 -> Detrioit Pistons"<<"\n";
        cout<<"4 -> Boston Celtics"<<"\n";
        cout<<"Enter Option: ";
        cin>>b;
        if(b==1){
            cout<<"'Congratulations' You are Right"<<"\n";
            score = score+100;
        }
        else{
             cout<<"'OOPs' You are Wrong"<<"\n";
            score = score-50;
        }
        cout<<"\n";
        cout<<"Q5 -> In soccer, which country won the 2023 FIFA Women's World Cup "<<"\n";
        cout<<"1 -> Brazil"<<"\n";
        cout<<"2 -> Argentina"<<"\n";
        cout<<"3 -> Spain"<<"\n";
        cout<<"4 -> Germany"<<"\n";
        cout<<"Enter Option: ";
        cin>>b;
        if(b==3){
            cout<<"'Congratulations' You are Right"<<"\n";
            score = score+100;
        }
        else{
             cout<<"'OOPs' You are Wrong"<<"\n";
            score = score-50;
        }
        cout<<"\n";
        cout<<"Q6 -> What is the maximum number of players allowed on the field for one team in a soccer match "<<"\n";
        cout<<"1 -> 11"<<"\n";
        cout<<"2 -> 10"<<"\n";
        cout<<"3 -> 7"<<"\n";
        cout<<"4 -> 12"<<"\n";
        cout<<"Enter Option: ";
        cin>>b;
        if(b==1){
            cout<<"'Congratulations' You are Right"<<"\n";
            score = score+100;
        }
        else{
             cout<<"'OOPs' You are Wrong"<<"\n";
            score = score-50;
        }
        cout<<"\n";
        cout<<"Q7 -> In what sport would you perform a 'slam dunk' "<<"\n";
        cout<<"1 -> Football"<<"\n";
        cout<<"2 -> Rugby"<<"\n";
        cout<<"3 -> BasketBall"<<"\n";
        cout<<"4 -> Rafting"<<"\n";
        cout<<"Enter Option: ";
        cin>>b;
        if(b==3){
            cout<<"'Congratulations' You are Right"<<"\n";
            score = score+100;
        }
        else{
             cout<<"'OOPs' You are Wrong"<<"\n";
            score = score-50;
        }
         cout<<"\n";
        cout<<"Q8 -> Which sport is known as the 'king of sports' "<<"\n";
        cout<<"1 -> Football"<<"\n";
        cout<<"2 -> Rugby"<<"\n";
        cout<<"3 -> Golf"<<"\n";
        cout<<"4 -> Cricket"<<"\n";
        cout<<"Enter Option: ";
        cin>>b;
        if(b==1){
            cout<<"'Congratulations' You are Right"<<"\n";
            score = score+100;
        }
        else{
             cout<<"'OOPs' You are Wrong"<<"\n";
            score = score-50;
        }
          cout<<"\n";
        cout<<"Q9 -> Which country has won the most Olympic gold medals in the Summer Olympics "<<"\n";
        cout<<"1 -> Canada"<<"\n";
        cout<<"2 -> China"<<"\n";
        cout<<"3 -> India"<<"\n";
        cout<<"4 -> United states"<<"\n";
        cout<<"Enter Option: ";
        cin>>b;
        if(b==4){
            cout<<"'Congratulations' You are Right"<<"\n";
            score = score+100;
        }
        else{
             cout<<"'OOPs' You are Wrong"<<"\n";
            score = score-50;
        }
          cout<<"\n";
        cout<<"Q10 -> How many points is a touchdown worth in American football "<<"\n";
        cout<<"1 -> 2"<<"\n";
        cout<<"2 -> 3"<<"\n";
        cout<<"3 -> 6"<<"\n";
        cout<<"4 -> 8"<<"\n";
        cout<<"Enter Option: ";
        cin>>b;
        if(b==3){
            cout<<"'Congratulations' You are Right"<<"\n";
            score = score+100;
        }
        else{
             cout<<"'OOPs' You are Wrong"<<"\n";
            score = score-50;
        }

         cout<<"\n";
        cout<<"THANX FOR PLAYING "<<"\n";
        cout<<"\n";
        cout<<"HERE's YOUR SCORE -> "<<score<<"\n";
        cout<<"For exit press 1 ";
        cin>>c;
       
        }

        // Entertainment Section
       
        cout<<"\n";
        if(a==2){

        cout<<"YOU OPT FOR ENTERTAINMENT"<<"\n";
        cout<<"SO LET'S START THE QUIZ "<<"\n";

        cout<<"\n";
        cout<<"Q1 -> Which Indian song got Oscar in 2023 "<<"\n";
        cout<<"1 -> 'Nato Nato' from RRR "<<"\n";
        cout<<"2 -> 'Jhume jo Pathan' from Pathan "<<"\n";
        cout<<"3 -> 'Rabta' from Rabta "<<"\n";
        cout<<"4 -> 'OO Maai' from Kesari"<<"\n";
        cout<<"Enter Option: ";
        cin>>b;
        if(b==1){
            cout<<"'Congratulations' You are Right"<<"\n";
            score = score+100;
        }
        else{
             cout<<"'OOPs' You are Wrong"<<"\n";
            score = score-50;
        }
        cout<<"\n";
        cout<<"Q2 -> who is often referred to as the 'shahenshah of Bollywood' "<<"\n";
        cout<<"1 -> Sharukh Khan "<<"\n";
        cout<<"2 -> Amitabh Bacchan "<<"\n";
        cout<<"3 -> Salman khan "<<"\n";
        cout<<"4 -> Akshay Kumar "<<"\n";
        cout<<"Enter Option: ";
        cin>>b;
        if(b==2){
            cout<<"'Congratulations' You are Right"<<"\n";
            score = score+100;
        }
        else{
             cout<<"'OOPs' You are Wrong"<<"\n";
            score = score-50;
        }
        cout<<"\n";
        cout<<"Q3 -> Which Bollywood actor starred in thr movie 'Dangal' based on the life of wrestler Mahavir Singh Phogat "<<"\n";
        cout<<"1 -> Aamir Khan "<<"\n";
        cout<<"2 -> Salman Khan  "<<"\n";
        cout<<"3 -> Sharukh Khan "<<"\n";
        cout<<"4 -> Vicky Kaushal"<<"\n";
        cout<<"Enter Option: ";
        cin>>b;
        if(b==1){
            cout<<"'Congratulations' You are Right"<<"\n";
            score = score+100;
        }
        else{
             cout<<"'OOPs' You are Wrong"<<"\n";
            score = score-50;
        }
         cout<<"\n";
        cout<<"Q4 -> Which actress is known as the ;Queen of Bollywood' "<<"\n";
        cout<<"1 -> Alia Bhatt "<<"\n";
        cout<<"2 -> Shilpa Shetty "<<"\n";
        cout<<"3 -> Kangana Raunaut "<<"\n";
        cout<<"4 -> Deeptika Padukone "<<"\n";
        cout<<"Enter Option: ";
        cin>>b;
        if(b==3){
            cout<<"'Congratulations' You are Right"<<"\n";
            score = score+100;
        }
        else{
             cout<<"'OOPs' You are Wrong"<<"\n";
            score = score-50;
        }
        cout<<"\n";
        cout<<"Q5 ->  Name the movie that marked the debut of Shah Rukh Khan in Bollywood "<<"\n";
        cout<<"1 -> DDLJ "<<"\n";
        cout<<"2 -> Deewana "<<"\n";
        cout<<"3 -> Mohabaatein "<<"\n";
        cout<<"4 -> Karan Arjun "<<"\n";
        cout<<"Enter Option: ";
        cin>>b;
        if(b==2){
            cout<<"'Congratulations' You are Right"<<"\n";
            score = score+100;
        }
        else{
             cout<<"'OOPs' You are Wrong"<<"\n";
            score = score-50;
        }
        cout<<"\n";
        cout<<"Q6 -> Which movie is based on life of martyr Captain Vikram Batra "<<"\n";
        cout<<"1 -> Sheershah "<<"\n";
        cout<<"2 -> Fighter "<<"\n";
        cout<<"3 -> Jawaan "<<"\n";
        cout<<"4 -> Kesari "<<"\n";
        cout<<"Enter Option: ";
        cin>>b;
        if(b==1){
            cout<<"'Congratulations' You are Right"<<"\n";
            score = score+100;
        }
        else{
             cout<<"'OOPs' You are Wrong"<<"\n";
            score = score-50;
        }
        cout<<"\n";
        cout<<"Q7 -> Which Bollywood Actor Owns 'Kolkata Knight Riders' "<<"\n";
        cout<<"1 -> Amitabh Bacchan "<<"\n";
        cout<<"2 -> Salman Khan "<<"\n";
        cout<<"3 -> Abhishek Bacchan "<<"\n";
        cout<<"4 -> Sharukh Khan "<<"\n";
        cout<<"Enter Option: ";
        cin>>b;
        if(b==4){
        cout<<"'Congratulations' You are Right"<<"\n";
         score = score+100;
        }
        else{
             cout<<"'OOPs' You are Wrong"<<"\n";
            score = score-50;
        }
        cout<<"\n";
        cout<<"Q8 -> Who is the director of Bahubali "<<"\n";
        cout<<"1 -> David Dhawan "<<"\n";
        cout<<"2 -> Sanjay Leela Bansali "<<"\n";
        cout<<"3 -> S.S.Rajamoul "<<"\n";
        cout<<"4 -> Bonnie Kapoor "<<"\n";
        cout<<"Enter Option: ";
        cin>>b;
        if(b==3){
            cout<<"'Congratulations' You are Right"<<"\n";
            score = score+100;
        }
        else{
             cout<<"'OOPs' You are Wrong"<<"\n";
            score = score-50;
        }
        cout<<"\n";
        cout<<"Q9 -> Who is the Lead actor of movie 'URI-The Surgical Strike' "<<"\n";
        cout<<"1 -> Salman Khan "<<"\n";
        cout<<"2 -> Vicky Kaushal "<<"\n";
        cout<<"3 -> Sanjay Dutt "<<"\n";
        cout<<"4 -> Ranbir Kapoor "<<"\n";
        cout<<"Enter Option: ";
        cin>>b;
        if(b==2){
            cout<<"'Congratulations' You are Right"<<"\n";
            score = score+100;
        }
        else{
             cout<<"'OOPs' You are Wrong"<<"\n";
            score = score-50;
        }
        cout<<"\n";
        cout<<"Q10 -> Salman Khan going to marry in which year "<<"\n";
        cout<<"1 -> 2027 "<<"\n";
        cout<<"2 -> 2047 "<<"\n";
        cout<<"3 -> 2039 "<<"\n";
        cout<<"4 -> Not Possible In This Century "<<"\n";
        cout<<"Enter Option: ";
        cin>>b;
        if(b==4){
            cout<<"'Congratulations' You are Right"<<"\n";
            score = score+100;
        }
        else{
             cout<<"'OOPs' You are Wrong"<<"\n";
            score = score-50;
        }
          cout<<"\n";
        cout<<"THANX FOR PLAYING "<<"\n";
        cout<<"\n";
        cout<<"HERE's YOUR SCORE -> "<<score<<"\n";
        cout<<"For exit press 1 ";
        cin>>c;
        
        }

        // General Knowledge Section

        cout<<"\n";   
        if(a==3){ 

        cout<<"YOU OPT FOR GENERAL KNOWLEDGE "<<"\n";
        cout<<"SO LET'S START THE QUIZ "<<"\n";

        cout<<"\n";
        cout<<"Q1 -> Who was the first President of the United States? "<<"\n";
        cout<<"1 -> George Washington "<<"\n";
        cout<<"2 -> Thomas Jefferson "<<"\n";
        cout<<"3 -> John Adamas "<<"\n";
        cout<<"4 -> Abraham Lincoln "<<"\n";
        cout<<"Enter Option: ";
        cin>>b;
        if(b==1){
            cout<<"'Congratulations' You are Right"<<"\n";
            score = score+100;
        }
        else{
             cout<<"'OOPs' You are Wrong"<<"\n";
            score = score-50;
        }
        cout<<"\n";
        cout<<"Q2 -> In which year did the Titanic sink "<<"\n";
        cout<<"1 -> 1905 "<<"\n";
        cout<<"2 -> 1912 "<<"\n";
        cout<<"3 -> 1920 "<<"\n";
        cout<<"4 -> 1935 "<<"\n";
        cout<<"Enter Option: ";
        cin>>b;
        if(b==2){
            cout<<"'Congratulations' You are Right"<<"\n";
            score = score+100;
        }
        else{
             cout<<"'OOPs' You are Wrong"<<"\n";
            score = score-50;
        }
         cout<<"\n";
        cout<<"Q3 -> What is the chemical symbol for gold "<<"\n";
        cout<<"1 -> Sb "<<"\n";
        cout<<"2 -> Ag "<<"\n";
        cout<<"3 -> Au "<<"\n";
        cout<<"4 -> K "<<"\n";
        cout<<"Enter Option: ";
        cin>>b;
        if(b==3){
            cout<<"'Congratulations' You are Right"<<"\n";
            score = score+100;
        }
        else{
             cout<<"'OOPs' You are Wrong"<<"\n";
            score = score-50;
        }
         cout<<"\n";
        cout<<"Q4 -> Which planet is known as the Red Planet "<<"\n";
        cout<<"1 -> Mercury "<<"\n";
        cout<<"2 -> Mars "<<"\n";
        cout<<"3 -> Venus "<<"\n";
        cout<<"4 -> Jupiter "<<"\n";
        cout<<"Enter Option: ";
        cin>>b;
        if(b==2){
            cout<<"'Congratulations' You are Right"<<"\n";
            score = score+100;
        }
        else{
             cout<<"'OOPs' You are Wrong"<<"\n";
            score = score-50;
        }
        cout<<"\n";
        cout<<"Q5 -> Which country has the largest population in the world "<<"\n";
        cout<<"1 -> America "<<"\n";
        cout<<"2 -> China "<<"\n";
        cout<<"3 -> India "<<"\n";
        cout<<"4 -> Pakistan "<<"\n";
        cout<<"Enter Option: ";
        cin>>b;
        if(b==2){
            cout<<"'Congratulations' You are Right"<<"\n";
            score = score+100;
        }
        else{
             cout<<"'OOPs' You are Wrong"<<"\n";
            score = score-50;
        }
         cout<<"\n";
        cout<<"Q6 -> Who painted the Mona Lisa "<<"\n";
        cout<<"1 -> Vincent Van Gogh "<<"\n";
        cout<<"2 -> Pablo Picasso "<<"\n";
        cout<<"3 -> Leonardo da Vincci "<<"\n";
        cout<<"4 -> Claude Monet "<<"\n";
        cout<<"Enter Option: ";
        cin>>b;
        if(b==3){
            cout<<"'Congratulations' You are Right"<<"\n";
            score = score+100;
        }
        else{
             cout<<"'OOPs' You are Wrong"<<"\n";
            score = score-50;
        }
        cout<<"\n";
        cout<<"Q7 -> The Taj Mahal is located in which Indian city "<<"\n";
        cout<<"1 -> Agra "<<"\n";
        cout<<"2 -> Delhi "<<"\n";
        cout<<"3 -> Mumbai "<<"\n";
        cout<<"4 -> Chennai "<<"\n";
        cout<<"Enter Option: ";
        cin>>b;
        if(b==1){
            cout<<"'Congratulations' You are Right"<<"\n";
            score = score+100;
        }
        else{
             cout<<"'OOPs' You are Wrong"<<"\n";
            score = score-50;
        }
        cout<<"\n";
        cout<<"Q8 -> What does 'CPU' stand for in computing "<<"\n";
        cout<<"1 -> Computer Personal Unit "<<"\n";
        cout<<"2 -> Computing Power Unit "<<"\n";
        cout<<"3 -> Control Processing Unit "<<"\n";
        cout<<"4 -> Central Processing Unit "<<"\n";
        cout<<"Enter Option: ";
        cin>>b;
        if(b==4){
            cout<<"'Congratulations' You are Right"<<"\n";
            score = score+100;
        }
        else{
             cout<<"'OOPs' You are Wrong"<<"\n";
            score = score-50;
        }
        cout<<"\n";
        cout<<"Q9 -> What is the name of the tallest building in the world as of 2024 "<<"\n";
        cout<<"1 -> Burj Khalifa "<<"\n";
        cout<<"2 -> Shanghai Tower "<<"\n";
        cout<<"3 -> One World Trade "<<"\n";
        cout<<"4 -> Abraj Al - Bait Clock Tower "<<"\n";
        cout<<"Enter Option: ";
        cin>>b;
        if(b==1){
            cout<<"'Congratulations' You are Right"<<"\n";
            score = score+100;
        }
        else{
             cout<<"'OOPs' You are Wrong"<<"\n";
            score = score-50;
        }
          cout<<"\n";
        cout<<"Q10 -> Which day is celebrated as Earth Day each year "<<"\n";
        cout<<"1 -> August 16 "<<"\n";
        cout<<"2 -> December 14 "<<"\n";
        cout<<"3 -> April 22 "<<"\n";
        cout<<"4 -> 26 june "<<"\n";
        cout<<"Enter Option: ";
        cin>>b;
        if(b==3){
            cout<<"'Congratulations' You are Right"<<"\n";
            score = score+100;
        }
        else{
             cout<<"'OOPs' You are Wrong"<<"\n";
            score = score-50;
        }
        cout<<"\n";
        cout<<"THANX FOR PLAYING "<<"\n";
        cout<<"\n";
        cout<<"HERE's YOUR SCORE -> "<<score<<"\n";
        cout<<"For exit press 1 ";
        cin>>c;
       
        }
           //MATHEMATICS QUESTON 

        if(a==4){
           
        cout<<"YOU OPT FOR MATHEMATICS"<<"\n";
        cout<<"SO LET'S START THE QUIZ "<<"\n";

        cout<<"\n"; 
        cout<<"Q1 -> Calculate  5 x (8-3) "<<"\n";
        cout<<"1 -> 15 "<<"\n";
        cout<<"2 -> 20 "<<"\n";
        cout<<"3 -> 25 "<<"\n";
        cout<<"4 -> 30 "<<"\n";
        cout<<"Enter Option: ";
        cin>>b;
        if(b==3){
            cout<<"'Congratulations' You are Right"<<"\n";
            score = score+100;
        }
        else{
             cout<<"'OOPs' You are Wrong"<<"\n";
            score = score-50;
        }
        cout<<"\n"; 
        cout<<"Q2 -> Calculate 12/3 + 6/2 "<<"\n";
        cout<<"1 -> 18 "<<"\n";
        cout<<"2 -> 13 "<<"\n";
        cout<<"3 -> 9 "<<"\n";
        cout<<"4 -> 7 "<<"\n";
        cout<<"Enter Option: ";
        cin>>b;
        if(b==4){
            cout<<"'Congratulations' You are Right"<<"\n";
            score = score+100;
        }
        else{
             cout<<"'OOPs' You are Wrong"<<"\n";
            score = score-50;
        }
        cout<<"\n"; 
        cout<<"Q3 -> Find the value of X int the equation 2X + 5 = 13 "<<"\n";
        cout<<"1 -> 4 "<<"\n";
        cout<<"2 -> 2 "<<"\n";
        cout<<"3 -> 1 "<<"\n";
        cout<<"4 -> 3 "<<"\n";
        cout<<"Enter Option: ";
        cin>>b;
        if(b==1){
            cout<<"'Congratulations' You are Right"<<"\n";
            score = score+100;
        }
        else{
             cout<<"'OOPs' You are Wrong"<<"\n";
            score = score-50;
        }
        cout<<"\n"; 
        cout<<"Q4 -> what is the area of the rectangle with length 6 units and width 4 units "<<"\n";
        cout<<"1 -> 16 "<<"\n";
        cout<<"2 -> 24 "<<"\n";
        cout<<"3 -> 28 "<<"\n";
        cout<<"4 -> 34 "<<"\n";
        cout<<"Enter Option: ";
        cin>>b;
        if(b==2){
            cout<<"'Congratulations' You are Right"<<"\n";
            score = score+100;
        }
        else{
             cout<<"'OOPs' You are Wrong"<<"\n";
            score = score-50;
        }
        cout<<"\n"; 
        cout<<"Q5 -> Evalulate  3^2 + 4 "<<"\n";
        cout<<"1 -> 63 "<<"\n";
        cout<<"2 -> 13 "<<"\n";
        cout<<"3 -> 18 "<<"\n";
        cout<<"4 -> 16 "<<"\n";
        cout<<"Enter Option: ";
        cin>>b;
        if(b==2){
            cout<<"'Congratulations' You are Right"<<"\n";
            score = score+100;
        }
        else{
             cout<<"'OOPs' You are Wrong"<<"\n";
            score = score-50;
        }
        cout<<"\n"; 
        cout<<"Q6 -> Solve for x in the equation 2(x+3) = 16 "<<"\n";
        cout<<"1 -> 10 "<<"\n";
        cout<<"2 -> 3 "<<"\n";
        cout<<"3 -> 5 "<<"\n";
        cout<<"4 -> 4 "<<"\n";
        cout<<"Enter Option: ";
        cin>>b;
        if(b==3){
            cout<<"'Congratulations' You are Right"<<"\n";
            score = score+100;
        }
        else{
             cout<<"'OOPs' You are Wrong"<<"\n";
            score = score-50;
        }cout<<"\n"; 
        cout<<"Q7 -> Find the perimeter of a square with side length 7 units"<<"\n";
        cout<<"1 -> 28 "<<"\n";
        cout<<"2 -> 29 "<<"\n";
        cout<<"3 -> 14 "<<"\n";
        cout<<"4 -> 21 "<<"\n";
        cout<<"Enter Option: ";
        cin>>b;
        if(b==1){
            cout<<"'Congratulations' You are Right"<<"\n";
            score = score+100;
        }
        else{
             cout<<"'OOPs' You are Wrong"<<"\n";
            score = score-50;
        }cout<<"\n"; 
        cout<<"Q8 -> Simplify 3 x (4+2).  "<<"\n";
        cout<<"1 -> 12 "<<"\n";
        cout<<"2 -> 15 "<<"\n";
        cout<<"3 -> 18 "<<"\n";
        cout<<"4 -> 20 "<<"\n";
        cout<<"Enter Option: ";
        cin>>b;
        if(b==3){
            cout<<"'Congratulations' You are Right"<<"\n";
            score = score+100;
        }
        else{
             cout<<"'OOPs' You are Wrong"<<"\n";
            score = score-50;
        }
        cout<<"\n"; 
        cout<<"Q9 -> Evaluate 7 x (3x2) "<<"\n";
        cout<<"1 -> 46 "<<"\n";
        cout<<"2 -> 28 "<<"\n";
        cout<<"3 -> 56 "<<"\n";
        cout<<"4 -> 42 "<<"\n";
        cout<<"Enter Option: ";
        cin>>b;
        if(b==4){
            cout<<"'Congratulations' You are Right"<<"\n";
            score = score+100;
        }
        else{
             cout<<"'OOPs' You are Wrong"<<"\n";
            score = score-50;
        }
        cout<<"\n"; 
        cout<<"Q10 ->  Find the perimeter of a rectangle with length 7 units and width 3 units.   "<<"\n";
        cout<<"1 -> 21 "<<"\n";
        cout<<"2 -> 20 "<<"\n";
        cout<<"3 -> 36 "<<"\n";
        cout<<"4 -> 16 "<<"\n";
        cout<<"Enter Option: ";
        cin>>b;
        if(b==2){
            cout<<"'Congratulations' You are Right"<<"\n";
            score = score+100;
        }
        else{
             cout<<"'OOPs' You are Wrong"<<"\n";
            score = score-50;
        }
           cout<<"\n";
        cout<<"THANX FOR PLAYING "<<"\n";
        cout<<"\n";
        cout<<"HERE's YOUR SCORE -> "<<score<<"\n";
        cout<<"For exit press 1 ";
        cin>>c;

        }
        
        
        
         }

    

