#include <stdio.h>
#include <string.h>
#include <time.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/time.h>

void MainMenu(){
    printf("\n");
    printf("\n");
    printf("\n");
    printf("\n");
    printf("\n");
    printf("\n");
    printf("    Mini Game                      \n");
    printf("\n");
    printf("         Select these modes.       \n");
    printf("\n");
    printf("             -----------------------------------\n");
    printf("            |                                   |\n");
    printf("            |   $ Attention $                   |\n");
    printf("            |       Please follow a rule        |\n");
    printf("            |         Input the type in ()      |\n");
    printf("            |                                   |\n");
    printf("            |    If There's something wrong     |\n");
    printf("            |                  with the system. |\n");
    printf("            |       Please press [Ctrl] + [c]   |\n");
    printf("            |                                   |\n");
    printf("             -----------------------------------\n");
    printf("\n");
    printf("\n");
    printf("        1: Choose Best Answer               press '1' \n");
    printf("        2: Memory Test                      press '2' \n");
    printf("        3: Instantaneous                    press '3' \n");
    printf("        4: 21 Game                          press '4' \n");
    printf("        5: University of Tokyo              press '5' \n");
    printf("                        -- Ranking          press '55' \n");
    printf("        6: Survival                         press '6' \n");
    printf("\n");
    printf("                    You can finish this program by another integer key \n");
    printf("\n");
    printf("\n");
    printf("Choose a Game Mode (int) :");

  return ;
}

void loading(int a){
    printf("\n");
    printf("\n");
    printf("\n");
    printf("        ------------------ Now Loading ------------------\n");
    printf("\n");
    printf("\n");
    printf("\n");
    sleep(a);
    return ;
}

void gomm(){
    int n;
    printf("\n");
    printf("\n");
    printf("\n");
    printf("                    Press any integer to go main menu (int) :");
    scanf("%d",&n);
    printf("\n");
    printf("\n");
    printf("\n");
    return ;
}

struct ranking{
    char name[16];
    double score;
    int times;
};

int main(void){
    while(1){   /*MainMenu*/
    
        int s,n;
        
        struct ranking rank11,rank12,rank13,rank14,rank15;
        struct ranking rank21,rank22,rank23,rank24,rank25;
        struct ranking rank31,rank32,rank33,rank34,rank35;
        
        char Rname[16];
        double Rscore;
        int Rtimes;
        int i;
        
        /*ranking_uts1*/
        FILE *file=fopen("ranking_uts1","r");
        if(file==NULL){
            fprintf(stderr,"cannot open file 'ranking_uts1'");
            exit(1);
        }
        for(i=1;i<=5;i++){
            
            fscanf(file,"%s",&Rname[16]);
            fscanf(file,"%lf",&Rscore);
            fscanf(file,"%d",&Rtimes);
            
            if(i==1){
                strcpy(rank11.name,&Rname[16]);
                rank11.score=Rscore;
                rank11.times=Rtimes;
            }else if(i==2){
                strcpy(rank12.name,&Rname[16]);
                rank12.score=Rscore;
                rank12.times=Rtimes;
            }else if(i==3){
                strcpy(rank13.name,&Rname[16]);
                rank13.score=Rscore;
                rank13.times=Rtimes;
            }else if(i==4){
                strcpy(rank14.name,&Rname[16]);
                rank14.score=Rscore;
                rank14.times=Rtimes;
            }else if(i==5){
                strcpy(rank15.name,&Rname[16]);
                rank15.score=Rscore;
                rank15.times=Rtimes;
            }
        }
        fclose(file);
        
        /*ranking_uts2*/
        FILE *file2=fopen("ranking_uts2","r");
        if(file2==NULL){
            fprintf(stderr,"cannot open file 'ranking_uts2'");
            exit(1);
        }
        for(i=1;i<=5;i++){
            
            fscanf(file2,"%s",&Rname[16]);
            fscanf(file2,"%lf",&Rscore);
            fscanf(file2,"%d",&Rtimes);
            
            if(i==1){
                strcpy(rank21.name,&Rname[16]);
                rank21.score=Rscore;
                rank21.times=Rtimes;
            }else if(i==2){
                strcpy(rank22.name,&Rname[16]);
                rank22.score=Rscore;
                rank22.times=Rtimes;
            }else if(i==3){
                strcpy(rank23.name,&Rname[16]);
                rank23.score=Rscore;
                rank23.times=Rtimes;
            }else if(i==4){
                strcpy(rank24.name,&Rname[16]);
                rank24.score=Rscore;
                rank24.times=Rtimes;
            }else if(i==5){
                strcpy(rank25.name,&Rname[16]);
                rank25.score=Rscore;
                rank25.times=Rtimes;
            }
        }
        fclose(file2);
        
        /*ranking_uts3*/
        FILE *file3=fopen("ranking_uts3","r");
        if(file3==NULL){
            fprintf(stderr,"cannot open file 'ranking_uts3'");
            exit(1);
        }
        for(i=1;i<=5;i++){
            
            fscanf(file3,"%s",&Rname[16]);
            fscanf(file3,"%lf",&Rscore);
            fscanf(file3,"%d",&Rtimes);
            
            if(i==1){
                strcpy(rank31.name,&Rname[16]);
                rank31.score=Rscore;
                rank31.times=Rtimes;
            }else if(i==2){
                strcpy(rank32.name,&Rname[16]);
                rank32.score=Rscore;
                rank32.times=Rtimes;
            }else if(i==3){
                strcpy(rank33.name,&Rname[16]);
                rank33.score=Rscore;
                rank33.times=Rtimes;
            }else if(i==4){
                strcpy(rank34.name,&Rname[16]);
                rank34.score=Rscore;
                rank34.times=Rtimes;
            }else if(i==5){
                strcpy(rank35.name,&Rname[16]);
                rank35.score=Rscore;
                rank35.times=Rtimes;
            }
        }
        fclose(file3);
        
        MainMenu();
        scanf("%d",&s);

        if(s==1){  /*mode1*/
        
            
            char result[20][32];
            char ans[20][32]={"Swift","Ruby","SQL","C++","C#","Python","PHP","C","Java"};
            int o,p,Bcount=0;
            double Bpercent;
            
            loading(1);
            
            printf("\n");
            printf("    2: Choose Best Answer\n");
            printf("        Please put the words in the box.\n");
            printf(" \n");
            printf("             --------------------------\n");
            printf("            |  Java Ruby Swift Python  |\n");
            printf("            |      C PHP SQL C++ C#    | \n");
            printf("             --------------------------\n");
            printf("\n");
            printf("    Q1:What is the programming language that is used for making iOS or OS X app ?\n");
            printf("        Your Answer :");
            scanf("%s",result[0]);
            printf("    Q2:What is the programming language that is created by Japanese ?\n");
            printf("        Your Answer :");
            scanf("%s",result[1]);
            printf("    Q3:What is the programming language that is one of the most popular database language ?\n");
            printf("        Your Answer :");
            scanf("%s",result[2]);
            printf("    Q4:What is the programming language that you can use DxLib ?\n");
            printf("        Your Answer :");
            scanf("%s",result[3]);
            printf("    Q5:What is the programming language that is created from C++ and Java ?\n");
            printf("        Your Answer :");
            scanf("%s",result[4]);
            printf("    Q6:What is the programming language that is strong in AI ?\n");
            printf("        Your Answer :");
            scanf("%s",result[5]);
            printf("    Q7:What is the programming language that you can use in WordPress ?\n");
            printf("        Your Answer :");
            scanf("%s",result[6]);
            printf("    Q8:What is the programming language that is used in this programming ?\n");
            printf("        Your Answer :");
            scanf("%s",result[7]);
            printf("    Q9:What is the programming language that is used in Minecraft ?\n");
            printf("        Your Answer :");
            scanf("%s",result[8]);
            printf("\n");
            printf("\n");
            
            loading(2);
            
            printf("    Your Score\n");
            for(o=0;o<9;o++){
                if(strcmp(result[o],ans[o])==0){
                    Bcount+=1;
                }else{
                printf("            You answered '%s'. But answer is '%s'.\n",result[o],ans[o]);
                }
            }
            
            Bpercent=(double) Bcount/9.0*100.0;
            printf("\n");
            printf("        You can answer correcyly %d/9\n",Bcount);
            printf("        The percentage of questions answered correctly is %.1f %%.\n",Bpercent);
            printf("\n");
            gomm();
            
            loading(1);
            
        }else if(s==2){     /*mode 2*/
        
            int Anext , Acount=0;
            double Apercent;
            int i,j,k,l,m;
            char result[8][8][64];
            char ans[8][8][64]={
              {"apple","dog","rice","python"},
              {"cat","waseda","mail","lemon"},
              {"game","phone","japan","pen"},
              {"love","text","air","nice"}
            };
            
            loading(1);
            
            printf("\n");
            printf("\n");
            printf("    1: Memory Test\n");
            printf("        Please memorize these words\n");
            printf("\n");
            printf("\n");
            printf("              1       2        3        4    (row) \n");
            printf("   1        apple   dog      rice    python\n");
            printf("   2        cat     waseda   mail    lemon\n");
            printf("   3        game    phone    japan   pen\n");
            printf("   4        love    text     air     nice\n");
            printf(" (cols)\n");

            printf("\n");
            printf("    Please press any integer after you can memorize (int) :");
            scanf("%d",&Anext);
            
            loading(1);

            for(i=0;i<=100;i++){
                printf("\n");
            }

            printf("Please answer the words.\n");
            printf("\n");
            printf("Attention:Don't Scroll Up!!!\n");
            printf("\n");
            printf("          We answer the position like'(col)-(row)'\n");
            printf("           ex) 1-3 mean '1 col and 3 row' ");
            printf("\n");
            printf("\n");

            for(j=0;j<4;j++){
                for(k=0;k<4;k++){
                    printf("What is %d-%d ?? (char):",j+1,k+1);
                    scanf("%s",result[j][k]);
                }
            }

            printf("\n");
            printf("\n");
            
            loading(2);
            
            printf("Your Score\n");
            printf("\n");

            for(l=0;l<4;l++){
                for(m=0;m<4;m++){
                    if(strcmp(result[l][m],ans[l][m])==0){
                        Acount+=1;
                    }else{
                    printf("    You answered '%s'. But answer is '%s'.\n",result[l][m],ans[l][m]);
                    }
                }
            }

            Apercent=(double) Acount/16.0*100.0;
            printf("\n");
            printf("        You can answer correcyly %d/16\n",Acount);
            printf("        The percentage of questions answered correctly is %.1f %%.\n",Apercent);
            printf("\n");
            gomm();
            
            loading(1);
            
        }else if(s==3){ /*mode 3*/
            int q,r,s;
            int res;
            double t,t_res;
            struct timeval t1,t2;
            
            loading(1);
            
            printf("\n");
            printf("\n");
            printf("    3:Instantaneous\n");
            printf("\n");
            printf("\n");
            printf("        '!' will appear in some minutes. \n");
            printf("         Please input the number of ! after '!' are appeared \n");
            printf("            ex) ! ! ! : you input '3'\n");
            printf("\n");
            printf("                Attention: Don't input any key before '!' appear\n");
            printf("                            If you input some key you input ' ctrl & c '\n");
            printf("\n");
            printf("                Press any integer to start (int) :");
            scanf("%d",&n);
            
            printf("\n");
            printf("\n");
            
            t=(rand()/(RAND_MAX+1.0)*3.0)+1.0;
            
            sleep(t);
            
            gettimeofday(&t1,NULL);
            
            s=(int) rand()%(4-1+1)+1;
            if(s==1){   
                printf("                      !\n");
            }else if(s==2){
                printf("                    !   !\n");
            }else if(s==3){
                printf("                  !   !   !\n");
            }else{
                printf("                !   !   !   !\n");
            }
            
            printf("\n");
            printf("\n");
            printf("\n");
            printf("\n");
            printf("    How many :");
            scanf("%d",&res);
            
            gettimeofday(&t2,NULL);
            
            t_res=(t2.tv_sec-t1.tv_sec)+(t2.tv_usec-t1.tv_usec)*1.0E-6;
            
            printf("\n");
            printf("\n");
            
            loading(1);
            
            if (s==res){
                printf("        It takes %.3f [s]\n",t_res);
                
                if(t_res<=0.50){
                    printf("        You have marvelous quick response.\n");
                }else if(0.50<t_res && t_res<=1.0){
                    printf("        You have great quick responce.\n");
                }else if(1.0<t_res && t_res<=1.3){
                    printf("        You have quick responce like others.\n ");
                }else if(1.3<t_res && t_res<=2.0){
                    printf("        You have a little terrible quick responce.\n");
                }else{
                    printf("        Keep trying!\n");
                }
            }else{
                printf("        You can't count '!' correctly.\n");
                printf("        It takes %.3f [s]\n",t_res);
            }
            
            gomm();
            
            loading(1);
            
        }else if(s==4){
            
            int st,game1count,game2count,game3count,p1count,c1count,p2count,c2count,p3count,c3count,random;
            
            game1count=0;
            game2count=0;
            game3count=0;
            printf("\n");
            printf("\n");
            printf("    4:21 Game\n");
            printf("\n");
            printf("        You can call 1 or 2 or 3 Number.\n");
            printf("        If the total over 21 , the person who call the number over '21' is lost.\n");
            printf("\n");
            printf("\n");
            
            printf("            Game Mode\n");
            printf("                1:You can't win mode (You play first)        --- '1' key\n");
            printf("                2:You play first.                            --- '2' key\n");
            printf("                3:Computer play first.                       --- '3' key\n");
            printf("\n");
            printf("                    Input any integer to go MainMenu \n");
            printf("\n");
            printf("                    Input Game Mode :");
            scanf("%d",&st);
            
            loading(1);
            
            if(st==1){ /*Game Mode 1*/
            
                printf("\n");
                printf("\n");
                printf("    Let's start the game\n");
                printf("\n");
                printf("\n");
                
                while(1){
                    printf("        -Your turn\n");
                    printf("        ---Input your number (1 or 2 or 3 int) :");
                    scanf("%d",&p1count);
                    printf("\n");
                    
                    if(1<=p1count && p1count<=3){
                        
                        game1count += p1count;
                        printf("\n");
                        printf("            Now the total is %d\n",game1count);
                        printf("\n");
                        printf("\n");
                        if(game1count>=21)   break;
                        
                    }else{
                        printf("\n");
                        printf("            Please input 1 or 2 or 3\n");
                        printf("\n");
                        continue;
                    }
                    
                    printf("        -Computer's turn\n");
                    sleep(1);
                    printf("        ---Computer input '%d'\n",4-p1count);
                    game1count += 4-p1count;
                    printf("\n");
                    printf("\n");
                    printf("            Now the total is %d\n",game1count);
                    printf("\n");
                    printf("\n");
                    
                }
            
                loading(1);    
                printf("                You lose because you say the number over 21.\n");
                
                gomm();
                
            }else if(st==2){
                
                printf("\n");
                printf("\n");
                printf("    Let's start the game\n");
                printf("\n");
                printf("\n");
            
                while(1){
                    
                    printf("        -Your turn\n");
                    printf("        ---Input your number (1 or 2 or 3 int) :");
                    scanf("%d",&p2count);
                    printf("\n");
                    
                    if(1<=p2count && p2count<=3){
                        game2count += p2count;
                        printf("\n");
                        printf("            Now the total is %d\n",game2count);
                        printf("\n");
                        printf("\n");
                        if(game2count>=21){
                            printf("            You lose because you say the number over 21.\n");
                            break;
                        }
                        
                    }else{
                        printf("\n");
                        printf("            Please input 1 or 2 or 3\n");
                        printf("\n");
                        continue;
                    }
                    
                    printf("        -Computer's turn\n");
                    sleep(1);
                    
                    random=(int) rand()%3+1 ;
                    printf("        ---Computer input '%d'\n",random);
                    game2count += random;
                    printf("\n");
                    printf("\n");
                    printf("            Now the total is %d\n",game2count);
                    printf("\n");
                    printf("\n");
                    if(game2count>=21){
                        printf("            You win because the computer say the number over 21.\n");
                        break;
                    }
                    
                }
                
                gomm();
                
            }else if(st==3){
                
                printf("\n");
                printf("\n");
                printf("    Let's start the game\n");
                printf("\n");
                printf("\n");
                
                while(1){
                
                    printf("        -Computer's turn\n");
                    sleep(1);
                        
                    random=(int) rand()%3+1 ;
                    printf("        ---Computer input '%d'\n",random);
                    game3count += random;
                    printf("\n");
                    printf("\n");
                    printf("            Now the total is %d\n",game3count);
                    printf("\n");
                    printf("\n");
                    
                    if(game3count>=21){
                        printf("            You win because the computer say the number over 21.\n");
                        break;
                    }
                        
                    printf("        -Your turn\n");
                    printf("        ---Input your number (1 or 2 or 3 int) :");
                    scanf("%d",&p3count);
                    printf("\n");
                    
                    if(1<=p3count && p3count<=3){
                        game3count += p3count;
                        printf("\n");
                        printf("            Now the total is %d\n",game3count);
                        printf("\n");
                        printf("\n");
                        if(game3count>=21){
                            printf("            You lose because you say the number over 21.\n");
                            break;
                        }
                        
                    }else{
                        printf("\n");
                        printf("            Please input 1 or 2 or 3\n");
                        printf("\n");
                        continue;
                    }
                }
                
                gomm();
                
            }else{ /* go back Mainmenu*/
                continue;
            }
            
        }else if(s==5){
            
            int year,i,ans5,count_5;
            int cent_1,math,jap,eng,phy,che;
            int department;
            int cent_bo;
            int a,b,c;
            int depcount5[64];
            
            double gamescore;
            double total_5;
            double t_5,per5;
            double exam_bo,cent_2;
            
            struct timeval t1_5,t2_5;
    
            char dep[10][15]={{"uts-1"},{"uts-2"},{"uts-3"}};
            char name5[64];
            
            count_5=0;
            year=0;
            total_5=0;
            
            printf("\n");
            printf("    5:University of Tokyo\n");
            printf("\n");
            printf("        This is a simulation game to enter Tokyo University.\n");
            printf("        You are a third-year high school student who wants to enter Tokyo University.\n");
            printf("        How many years do you spend to pass ?\n");
            printf("        If you can't pass examination , you will be easy to get higer score than last year.\n");
            printf("\n");
            printf("        This game has ranking system.\n");
            printf("         Great student can be put on Ranking!\n");
            printf("         You can see Ranking in Mainmenu or the end of this game.\n");
            printf("\n");
            printf("            Player Name :");
            scanf("%s",name5);
            printf("\n");
            
            
            while(1){
                
                department=0;
                count_5=0;
                
                if(year==0){
                printf("\n");
                printf("\n");
                
                while(1){
                    
                    printf("        What department do you want to enter ?\n");
                    printf("            Attention : difficulty of entering each department is different.\n");
                    printf("\n");
                    printf("                        uts-1 : 1 \n");
                    printf("                        uts-2 : 2 \n");
                    printf("                        uts-3 : 3 \n");
                    printf("\n");
                    printf("                            Your wish (int) : ");
                    scanf("%d",&department);
                    
                    if(department==1 || department==2 || department==3){
                        break;
                    }else{
                        printf("\n");
                        printf("\n");
                        printf("            Please input '1' or '2' or '3'\n");
                        printf("\n");
                        printf("\n");
                    }
                }
                
                printf("\n");
                printf("\n");
                printf("        ~~ You submit an application to Tokyo University ~~\n");
                sleep(1);
                printf("\n");
                printf("\n");
                printf("\n");
                printf("\n");
                printf("Then National Center Test & Examination for Tokyo University started ...\n");
                printf("\n");
                
                }else{
                    
                printf("\n");
                printf("\n");
                printf("\n");
                printf("        ~~ %d years after first time of the Examination ~~\n",year);
                sleep(1);
                printf("\n");
                printf("\n");
                
                while(1){
                    printf("        What department do you want to enter ?\n");
                    printf("            Attention : difficulty of entering each department is different.\n");
                    printf("\n");
                    printf("                        uts-1 : 1 \n");
                    printf("                        uts-2 : 2 \n");
                    printf("                        uts-3 : 3 \n");
                    printf("\n");
                    printf("                            Your wish (int) : ");
                    scanf("%d",&department);
                    
                    if(department==1 || department==2 || department==3){
                        break;
                    }else{
                        printf("\n");
                        printf("\n");
                        printf("            Please input '1' or '2' or '3'\n");
                        printf("\n");
                        printf("\n");
                    }
                }
                
                printf("\n");
                printf("\n");
                printf("        ~~ You submit an application to Tokyo University ~~\n");
                sleep(1);
                printf("\n");
                printf("\n");
                printf("\n");
                printf("\n");
                printf("Then National Center Test & Examination for Tokyo University started ...\n");
                printf("\n");
                }
                
                depcount5[year]=department-1;
                
                printf("    Examination\n");
                printf("\n");
                printf("            Content : Easy questions used four arithmetic operations ( + - * %%)\n");
                printf("                 ex) 3+1 = 4 , 4-2 = 2 , 2*3 = 6 , 5%%3 = 2 \n");
                printf("             Rule   : Answer more accurate and faster ! \n");
                printf("\n");
                printf("\n");
                printf("                Are you ready? - start exam after 1 second after inputting any integer :");
                scanf("%d",&n);
                
                loading(1);
                
                gettimeofday(&t1_5,NULL);
                
                srand((unsigned)time(NULL));
                
                for(i=1;i<=15;i++){
                a=(int) rand()%9+1 ;
                b=(int) rand()%9+1 ;
                c=(int) rand()%4+1 ;
                
                if(c==1){
                    printf("\n");
                    printf("                            %d + %d = ",a,b);
                    scanf("%d",&ans5);
                    
                    if(ans5 == a+b) count_5 += 1;
                    
                }else if(c==2){
                    printf("\n");
                    printf("                            %d - %d = ",a,b);
                    scanf("%d",&ans5);
                    
                    if(ans5 == a-b) count_5 += 1;
                    
                }else if(c==3){
                    printf("\n");
                    printf("                            %d * %d = ",a,b);
                    scanf("%d",&ans5);
                    
                    if(ans5 == a*b) count_5 += 1;
                    
                }else if(c==4){
                    printf("\n");
                    printf("                            %d %% %d = ",a,b);
                    scanf("%d",&ans5);
                    
                    if(ans5 == a%b) count_5 += 1;
                }
                }
                
                gettimeofday(&t2_5,NULL);
                t_5=(t2_5.tv_sec-t1_5.tv_sec)+(t2_5.tv_usec-t1_5.tv_usec)*1.0E-6;
                per5 = (double) count_5/15;
                
                loading(2);
                
                printf("    All the tests are finished.\n");
                printf("\n");
                printf("        ~ You try scoring exam myself ~\n");
                printf("          You can score %d questions in 15 questions.\n",count_5);
                printf("          You can answer questions in %.3f [s]\n",t_5);
                printf("\n");
                printf("\n");
                printf("\n");
                sleep(3);
                printf("            ~~ It's been some weeks since Examination ~~\n");
                sleep(3);
                printf("\n");
                printf("\n");
                printf("\n");
                printf("        ~ the day to announce your center examination result ~\n");
                printf("            Open your center examination score sheet to input any integer :");
                scanf("%d",&n);
                
                printf("\n");
                printf("\n");
                printf("                        You open the score sheet ...\n");
                sleep(3);
                printf("\n");
                
                srand((unsigned)time(NULL));
                
                cent_1 = (int) 600+((rand()%80+120)*per5*25)/(t_5) ;
                if(cent_1>900) cent_1=900;
                
                srand((unsigned)time(NULL));
                
                cent_bo = (int) (rand()/(RAND_MAX + 1.0)*100.0)+650.0;
                
                printf("          -----------------------------------------------------------\n");
                printf("\n");
                printf("            Your Name : %s\n",name5);
                printf("\n");
                printf("                Center Examination Score Sheet\n");
                printf("\n");
                printf("                    Your Center score is %d points.\n",cent_1);
                printf("                    Border score of first selection is %d points. \n",cent_bo);
                printf("\n");
                printf("          -----------------------------------------------------------\n");
                
                if(cent_1>=cent_bo){
                    printf("\n");
                    printf("        Congratuation to pass first selection !!\n");
                    printf("\n");
                }else{
                    printf("\n");
                    printf("        Your score don't reach border score...\n");
                    printf("\n");
                    printf("\n");
                    printf("        You can't enter Tokyo University...\n");
                    printf("        You cry in the bed and dicide to enter Tokyo University next year ...\n");
                    printf("\n");
                    printf("            Input any integer to study for next year :");
                    scanf("%d",&n);
                    year += 1 ;
                    continue;
                }
                
                sleep(3);
                printf("\n");
                printf("\n");
                printf("\n");
                printf("            ~~ It's been some weeks since Examination ~~\n");
                sleep(3);
                printf("\n");
                printf("\n");
                printf("\n");
                printf("        ~ the day to announce your entrance examination result ~\n");
                printf("            Open your entrance examination score sheet to input any integer : ");
                scanf("%d",&n);
                printf("\n");
                printf("\n");
                printf("                        You open the score sheet ...\n");
                sleep(3);
                printf("\n");
                printf("\n");
                
                cent_2=(double) (cent_1*110.0)/900.0;
                
                math= (int) ((rand()%140+100)*per5*(10+year))/(t_5) ;
                if(math>120) math=120;
                eng = (int) ((rand()%140+100)*per5*(10+year))/(t_5) ;
                if(eng>120) eng=120;
                jap = (int) ((rand()%100+60)*per5*(10+year))/(t_5) ;
                if(jap>80) jap=80;
                phy = (int) ((rand()%80+40)*per5*(10+year))/(t_5) ;
                if(phy>60) phy=60;
                che = (int) ((rand()%80+40)*per5*(10+year))/(t_5) ;
                if(che>60) che=60;
                
                total_5=cent_2+math+eng+jap+phy+che;
                
                if(department==1 || department==2){
                    exam_bo = (rand()/(RAND_MAX + 1.0)*50.0)+300;
                }else if(department==3){ 
                    exam_bo = (rand()/(RAND_MAX + 1.0)*40.0)+370;
                }
                
                printf("             -------------------------------------------\n");
                printf("                                                        \n");
                printf("               Your Name : %-10s                   \n",name5);
                printf("                                                        \n");
                printf("                Score Sheet ( %5s )                   \n",dep[depcount5[year]]);
                printf("                                                        \n");
                printf("                    Center   : %7.4f  / 110           \n",cent_2);
                printf("                   Japanese  :    %3d   /  80           \n",jap);
                printf("                     Math    :    %3d   / 120           \n",math);
                printf("                    English  :    %3d   / 120           \n",eng);
                printf("                    Physics  :    %3d   /  60           \n",phy);
                printf("                   Chemistry :    %3d   /  60           \n",che);
                printf("                                                        \n");
                printf("                                                        \n");
                printf("                     Total Score  : %.4f / 550      \n",total_5);
                printf("                     Border Score : %.4f / 550      \n",exam_bo);
                printf("                                                        \n");
                printf("             -------------------------------------------\n");
                printf("\n");
                printf("\n");
                
                if(total_5>=exam_bo){
                    printf("        Congratulation !\n");
                    printf("        You can go to %s !\n",dep[depcount5[year]]);
                    
                    /*determine ranking*/
                    if(department==1){
                        
                        do {
                            if (rank15.times >= year && rank14.times < year){
                                if(rank15.score < total_5){
                                    rank15.times = year;
                                    rank15.score = total_5;
                                    strcpy(rank15.name,name5);
                                    break;
                                }else{
                                    break;
                                }
                            }
                            
                            if (rank14.times >= year && rank13.times < year){
                                if(rank14.score < total_5){
                                    rank15=rank14;
                                    
                                    rank14.times = year;
                                    rank14.score = total_5;
                                    strcpy(rank14.name,name5);
                                    break;
                                }else{
                                    if(rank15.score < total_5){
                                        rank15.times = year;
                                        rank15.score = total_5;
                                        strcpy(rank15.name,name5);
                                        break;
                                    }else{
                                        break;
                                    }
                                }
                            }
                            
                            if (rank13.times >= year && rank12.times < year){
                                if(rank13.score < total_5){
                                    rank15=rank14;
                                    rank14=rank13;
                                    
                                    rank13.times = year;
                                    rank13.score = total_5;
                                    strcpy(rank13.name,name5);
                                    break;
                                }else{
                                    if(rank14.score < total_5){
                                        rank15=rank14;
                                        
                                        rank14.times = year;
                                        rank14.score = total_5;
                                        strcpy(rank14.name,name5);
                                        break;
                                    }else{
                                        if(rank15.score < total_5){
                                            rank15.times = year;
                                            rank15.score = total_5;
                                            strcpy(rank15.name,name5);
                                            break;
                                        }else{
                                            break;
                                        }
                                    }
                                }
                            }
                            
                            if (rank12.times >= year && rank11.times < year){
                                if(rank12.score < total_5){
                                    rank15=rank14;
                                    rank14=rank13;
                                    rank13=rank12;
                                    
                                    rank12.times = year;
                                    rank12.score = total_5;
                                    strcpy(rank12.name,name5);
                                    break;
                                }else{
                                    if(rank13.score < total_5){
                                        rank15=rank14;
                                        rank14=rank13;
                                        
                                        rank13.times = year;
                                        rank13.score = total_5;
                                        strcpy(rank13.name,name5);
                                        break;
                                    }else{
                                        if(rank14.score < total_5){
                                            rank15=rank14;
                                            
                                            rank14.times = year;
                                            rank14.score = total_5;
                                            strcpy(rank14.name,name5);
                                            break;
                                        }else{
                                            if(rank15.score < total_5){
                                                rank15.times = year;
                                                rank15.score = total_5;
                                                strcpy(rank15.name,name5);
                                                break;
                                            }else{
                                                break;
                                            }
                                        }
                                    }
                                }
                            }
                            
                            if (rank11.times >= year){
                                if(rank11.score < total_5){
                                    rank15=rank14;
                                    rank14=rank13;
                                    rank13=rank12;
                                    rank12=rank11;
                                    
                                    rank11.times = year;
                                    rank11.score = total_5;
                                    strcpy(rank11.name,name5);
                                    break;
                                }else{
                                    if(rank12.score < total_5){
                                        rank15=rank14;
                                        rank14=rank13;
                                        rank13=rank12;
                                        
                                        rank12.times = year;
                                        rank12.score = total_5;
                                        strcpy(rank12.name,name5);
                                        break;
                                    }else{
                                        if(rank13.score < total_5){
                                            rank15=rank14;
                                            rank14=rank13;
                                            
                                            rank13.times = year;
                                            rank13.score = total_5;
                                            strcpy(rank13.name,name5);
                                            break;
                                        }else{
                                            if(rank14.score < total_5){
                                                rank15=rank14;
                                                
                                                rank14.times = year;
                                                rank14.score = total_5;
                                                strcpy(rank14.name,name5);
                                                break;
                                            }else{
                                                if(rank15.score < total_5){
                                                    rank15.times = year;
                                                    rank15.score = total_5;
                                                    strcpy(rank15.name,name5);
                                                    break;
                                                }else{
                                                    break;
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        } while (1==2);
                        
                        FILE *file=fopen("ranking_uts1","w");
                        fprintf(file,"%s %f %d\n",rank11.name,rank11.score,rank11.times);
                        fprintf(file,"%s %f %d\n",rank12.name,rank12.score,rank12.times);
                        fprintf(file,"%s %f %d\n",rank13.name,rank13.score,rank13.times);
                        fprintf(file,"%s %f %d\n",rank14.name,rank14.score,rank14.times);
                        fprintf(file,"%s %f %d\n",rank15.name,rank15.score,rank15.times);
                        fprintf(file,"\n");
                        fclose(file);
                        
                    }else if(department==2){
                        
                        do {
                            if (rank25.times >= year && rank24.times < year){
                                if(rank25.score < total_5){
                                    rank25.times = year;
                                    rank25.score = total_5;
                                    strcpy(rank25.name,name5);
                                    break;
                                }else{
                                    break;
                                }
                            }
                            
                            if (rank24.times >= year && rank23.times < year){
                                if(rank24.score < total_5){
                                    rank25=rank24;
                                    
                                    rank24.times = year;
                                    rank24.score = total_5;
                                    strcpy(rank24.name,name5);
                                    break;
                                }else{
                                    if(rank25.score < total_5){
                                        rank25.times = year;
                                        rank25.score = total_5;
                                        strcpy(rank25.name,name5);
                                        break;
                                    }else{
                                        break;
                                    }
                                }
                            }
                            
                            if (rank23.times >= year && rank22.times < year){
                                if(rank23.score < total_5){
                                    rank25=rank24;
                                    rank24=rank23;
                                    
                                    rank23.times = year;
                                    rank23.score = total_5;
                                    strcpy(rank23.name,name5);
                                    break;
                                }else{
                                    if(rank24.score < total_5){
                                        rank25=rank24;
                                        
                                        rank24.times = year;
                                        rank24.score = total_5;
                                        strcpy(rank24.name,name5);
                                        break;
                                    }else{
                                        if(rank25.score < total_5){
                                            rank25.times = year;
                                            rank25.score = total_5;
                                            strcpy(rank25.name,name5);
                                            break;
                                        }else{
                                            break;
                                        }
                                    }
                                }
                            }
                            
                            if (rank22.times >= year && rank21.times < year){
                                if(rank22.score < total_5){
                                    rank25=rank24;
                                    rank24=rank23;
                                    rank23=rank22;
                                    
                                    rank22.times = year;
                                    rank22.score = total_5;
                                    strcpy(rank22.name,name5);
                                    break;
                                }else{
                                    if(rank23.score < total_5){
                                        rank25=rank24;
                                        rank24=rank23;
                                        
                                        rank23.times = year;
                                        rank23.score = total_5;
                                        strcpy(rank23.name,name5);
                                        break;
                                    }else{
                                        if(rank24.score < total_5){
                                            rank25=rank24;
                                            
                                            rank24.times = year;
                                            rank24.score = total_5;
                                            strcpy(rank24.name,name5);
                                            break;
                                        }else{
                                            if(rank25.score < total_5){
                                                rank25.times = year;
                                                rank25.score = total_5;
                                                strcpy(rank25.name,name5);
                                                break;
                                            }else{
                                                break;
                                            }
                                        }
                                    }
                                }
                            }
                            
                            if (rank21.times >= year){
                                if(rank21.score < total_5){
                                    rank25=rank24;
                                    rank24=rank23;
                                    rank23=rank22;
                                    rank22=rank21;
                                    
                                    rank21.times = year;
                                    rank21.score = total_5;
                                    strcpy(rank21.name,name5);
                                    break;
                                }else{
                                    if(rank22.score < total_5){
                                        rank25=rank24;
                                        rank24=rank23;
                                        rank23=rank22;
                                        
                                        rank22.times = year;
                                        rank22.score = total_5;
                                        strcpy(rank22.name,name5);
                                        break;
                                    }else{
                                        if(rank23.score < total_5){
                                            rank25=rank24;
                                            rank24=rank23;
                                            
                                            rank23.times = year;
                                            rank23.score = total_5;
                                            strcpy(rank23.name,name5);
                                            break;
                                        }else{
                                            if(rank24.score < total_5){
                                                rank25=rank24;
                                                
                                                rank24.times = year;
                                                rank24.score = total_5;
                                                strcpy(rank24.name,name5);
                                                break;
                                            }else{
                                                if(rank25.score < total_5){
                                                    rank25.times = year;
                                                    rank25.score = total_5;
                                                    strcpy(rank25.name,name5);
                                                    break;
                                                }else{
                                                    break;
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        } while (1==2);
                        
                        FILE *file2=fopen("ranking_uts2","w");
                        fprintf(file2,"%s %f %d\n",rank21.name,rank21.score,rank21.times);
                        fprintf(file2,"%s %f %d\n",rank22.name,rank22.score,rank22.times);
                        fprintf(file2,"%s %f %d\n",rank23.name,rank23.score,rank23.times);
                        fprintf(file2,"%s %f %d\n",rank24.name,rank24.score,rank24.times);
                        fprintf(file2,"%s %f %d\n",rank25.name,rank25.score,rank25.times);
                        fprintf(file2,"\n");
                        fclose(file2);
                        
                    }else if(department==3){
                        
                        do {
                            if (rank35.times >= year && rank34.times < year){
                                if(rank35.score < total_5){
                                    rank35.times = year;
                                    rank35.score = total_5;
                                    strcpy(rank35.name,name5);
                                    break;
                                }else{
                                    break;
                                }
                            }
                            
                            if (rank34.times >= year && rank33.times < year){
                                if(rank34.score < total_5){
                                    rank35=rank34;
                                    
                                    rank34.times = year;
                                    rank34.score = total_5;
                                    strcpy(rank34.name,name5);
                                    break;
                                }else{
                                    if(rank35.score < total_5){
                                        rank35.times = year;
                                        rank35.score = total_5;
                                        strcpy(rank35.name,name5);
                                        break;
                                    }else{
                                        break;
                                    }
                                }
                            }
                            
                            if (rank33.times >= year && rank32.times < year){
                                if(rank33.score < total_5){
                                    rank35=rank34;
                                    rank34=rank33;
                                    
                                    rank33.times = year;
                                    rank33.score = total_5;
                                    strcpy(rank33.name,name5);
                                    break;
                                }else{
                                    if(rank34.score < total_5){
                                        rank35=rank34;
                                        
                                        rank34.times = year;
                                        rank34.score = total_5;
                                        strcpy(rank34.name,name5);
                                        break;
                                    }else{
                                        if(rank35.score < total_5){
                                            rank35.times = year;
                                            rank35.score = total_5;
                                            strcpy(rank35.name,name5);
                                            break;
                                        }else{
                                            break;
                                        }
                                    }
                                }
                            }
                            
                            if (rank32.times >= year && rank31.times < year){
                                if(rank32.score < total_5){
                                    rank35=rank34;
                                    rank34=rank33;
                                    rank33=rank32;
                                    
                                    rank32.times = year;
                                    rank32.score = total_5;
                                    strcpy(rank32.name,name5);
                                    break;
                                }else{
                                    if(rank33.score < total_5){
                                        rank35=rank34;
                                        rank34=rank33;
                                        
                                        rank33.times = year;
                                        rank33.score = total_5;
                                        strcpy(rank33.name,name5);
                                        break;
                                    }else{
                                        if(rank34.score < total_5){
                                            rank35=rank34;
                                            
                                            rank34.times = year;
                                            rank34.score = total_5;
                                            strcpy(rank34.name,name5);
                                            break;
                                        }else{
                                            if(rank35.score < total_5){
                                                rank35.times = year;
                                                rank35.score = total_5;
                                                strcpy(rank35.name,name5);
                                                break;
                                            }else{
                                                break;
                                            }
                                        }
                                    }
                                }
                            }
                            
                            if (rank31.times >= year){
                                if(rank31.score < total_5){
                                    rank35=rank34;
                                    rank34=rank33;
                                    rank33=rank32;
                                    rank32=rank31;
                                    
                                    rank31.times = year;
                                    rank31.score = total_5;
                                    strcpy(rank31.name,name5);
                                    break;
                                }else{
                                    if(rank32.score < total_5){
                                        rank35=rank34;
                                        rank34=rank33;
                                        rank33=rank32;
                                        
                                        rank32.times = year;
                                        rank32.score = total_5;
                                        strcpy(rank32.name,name5);
                                        break;
                                    }else{
                                        if(rank33.score < total_5){
                                            rank35=rank34;
                                            rank34=rank33;
                                            
                                            rank33.times = year;
                                            rank33.score = total_5;
                                            strcpy(rank33.name,name5);
                                            break;
                                        }else{
                                            if(rank34.score < total_5){
                                                rank35=rank34;
                                                
                                                rank34.times = year;
                                                rank34.score = total_5;
                                                strcpy(rank34.name,name5);
                                                break;
                                            }else{
                                                if(rank35.score < total_5){
                                                    rank35.times = year;
                                                    rank35.score = total_5;
                                                    strcpy(rank35.name,name5);
                                                    break;
                                                }else{
                                                    break;
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        } while (1==2);
                        
                        
                        FILE *file3=fopen("ranking_uts3","w");
                        fprintf(file3,"%s %f %d\n",rank31.name,rank31.score,rank31.times);
                        fprintf(file3,"%s %f %d\n",rank32.name,rank32.score,rank32.times);
                        fprintf(file3,"%s %f %d\n",rank33.name,rank33.score,rank33.times);
                        fprintf(file3,"%s %f %d\n",rank34.name,rank34.score,rank34.times);
                        fprintf(file3,"%s %f %d\n",rank35.name,rank35.score,rank35.times);
                        fprintf(file3,"\n");
                        fclose(file3);
                        
                    }
                    
                    loading(3);
                    printf("        Result \n");
                    printf("\n");
                    if(year==0){
                        printf("            You passed first time.\n");
                    }else{
                        printf("            You passed %d years after you graduate highscool.\n",year);
                        printf("\n");
                        printf("                You failed to enter %s first year.\n",dep[depcount5[0]]);
                        
                        for(i=0;i<year-1;i++){
                            printf("                You failed to enter %s at %d year after graduating highscool.\n",dep[depcount5[i]],i);
                        }
                    }
                    printf("\n");
                    printf("\n");
                    break;
                }else{
                    printf("        You can't enter Tokyo University...\n");
                    printf("\n");
                    printf("            You cry in the bed and you dicide to enter Tokyo University next year ...\n");
                    printf("            Input any integer to study for next year :");
                    scanf("%d",&n);
                    year += 1 ;
                    continue;
                }
                
            }
            
            printf("\n");
            printf("   ---------------------------------------------------------------------------------\n");
            printf("    -Ranking-\n");
            printf("\n");
            printf("        uts-1\n");
            printf("                                name                Score        year to pass\n");
            printf("            1st place :     %9s              %.4f            %d\n",rank11.name,rank11.score,rank11.times);
            printf("            2nd place :     %9s              %.4f            %d\n",rank12.name,rank12.score,rank12.times);
            printf("            3rd place :     %9s              %.4f            %d\n",rank13.name,rank13.score,rank13.times);
            printf("            4th place :     %9s              %.4f            %d\n",rank14.name,rank14.score,rank14.times);
            printf("            5th place :     %9s              %.4f            %d\n",rank15.name,rank15.score,rank15.times);
            printf("\n");
            printf("\n");
            printf("        uts-2\n");
            printf("                                name                Score        year to pass\n");
            printf("            1st place :     %9s              %.4f            %d\n",rank21.name,rank21.score,rank21.times);
            printf("            2nd place :     %9s              %.4f            %d\n",rank22.name,rank22.score,rank22.times);
            printf("            3rd place :     %9s              %.4f            %d\n",rank23.name,rank23.score,rank23.times);
            printf("            4th place :     %9s              %.4f            %d\n",rank24.name,rank24.score,rank24.times);
            printf("            5th place :     %9s              %.4f            %d\n",rank25.name,rank25.score,rank25.times);
            printf("\n");
            printf("\n");
            printf("        uts-3\n");
            printf("                                name                Score        year to pass\n");
            printf("            1st place :     %9s              %.4f            %d\n",rank31.name,rank31.score,rank31.times);
            printf("            2nd place :     %9s              %.4f            %d\n",rank32.name,rank32.score,rank32.times);
            printf("            3rd place :     %9s              %.4f            %d\n",rank33.name,rank33.score,rank33.times);
            printf("            4th place :     %9s              %.4f            %d\n",rank34.name,rank34.score,rank34.times);
            printf("            5th place :     %9s              %.4f            %d\n",rank35.name,rank35.score,rank35.times);
            printf("\n");
            printf("   ---------------------------------------------------------------------------------\n");
            
            gomm();
            
        }else if(s==55){
            
            loading(3);
            printf("\n");
            printf("\n");
            printf("   ---------------------------------------------------------------------------------\n");
            printf("    -Ranking-\n");
            printf("\n");
            printf("        uts-1\n");
            printf("                                name                Score        year to pass\n");
            printf("            1st place :     %9s              %.4f            %d\n",rank11.name,rank11.score,rank11.times);
            printf("            2nd place :     %9s              %.4f            %d\n",rank12.name,rank12.score,rank12.times);
            printf("            3rd place :     %9s              %.4f            %d\n",rank13.name,rank13.score,rank13.times);
            printf("            4th place :     %9s              %.4f            %d\n",rank14.name,rank14.score,rank14.times);
            printf("            5th place :     %9s              %.4f            %d\n",rank15.name,rank15.score,rank15.times);
            printf("\n");
            printf("\n");
            printf("        uts-2\n");
            printf("                                name                Score        year to pass\n");
            printf("            1st place :     %9s              %.4f            %d\n",rank21.name,rank21.score,rank21.times);
            printf("            2nd place :     %9s              %.4f            %d\n",rank22.name,rank22.score,rank22.times);
            printf("            3rd place :     %9s              %.4f            %d\n",rank23.name,rank23.score,rank23.times);
            printf("            4th place :     %9s              %.4f            %d\n",rank24.name,rank24.score,rank24.times);
            printf("            5th place :     %9s              %.4f            %d\n",rank25.name,rank25.score,rank25.times);
            printf("\n");
            printf("\n");
            printf("        uts-3\n");
            printf("                                name                Score        year to pass\n");
            printf("            1st place :     %9s              %.4f            %d\n",rank31.name,rank31.score,rank31.times);
            printf("            2nd place :     %9s              %.4f            %d\n",rank32.name,rank32.score,rank32.times);
            printf("            3rd place :     %9s              %.4f            %d\n",rank33.name,rank33.score,rank33.times);
            printf("            4th place :     %9s              %.4f            %d\n",rank34.name,rank34.score,rank34.times);
            printf("            5th place :     %9s              %.4f            %d\n",rank35.name,rank35.score,rank35.times);
            printf("\n");
            printf("   ---------------------------------------------------------------------------------\n");
            printf("\n");
            printf("\n");
            gomm();
            
            
        }else if(s==6){
            
            char fighter[16];
            int mode;
            int flag1,flag2,flag3,flag4;
            int action;
            int myHP,opHP;
            int power,defense;
            int PUturn,Dturn;
            int mydamage,opdamage;
            int oppower;
            
            flag1=0;
            flag2=0;
            flag3=0;
            flag4=0;
            
            printf("\n");
            printf("\n");
            printf("    6:Survival\n");
            printf("\n");
            printf("        This game is an action game to fight with Monsters.\n");
            printf("        Try to knock down !\n");
            printf("\n");
            printf("    ---How to play---\n");
            
            printf("         You 'Attack' to monster and can use 'Magic'\n");
            printf("         You can use each Magic only once.\n");
            printf("         When you Attack , you determine power (0~10) \n");
            printf("         You can decrease the opponent's HP by power\n");
            printf("         If you select power , defense is defined that ( 10 - power )\n");
            printf("         You can decrease the damage to you by defense\n");
            printf("\n");
            printf("            ex) you determine that power is '6' and the opponent's offensive power is 7\n");
            printf("                You inflict 6 damage and suffer 3 damage ( defense is 4 )\n");
            printf("\n");
            printf("         Magic is four types to use\n");
            printf("            --   Heal   : heal your HP absolutely at once\n");
            printf("            -- Reflect  : reflect the opponent's attack once if opponent's power is over your HP.\n");
            printf("            -- Power up : this magic is double your power next 4 turns after using\n");
            printf("            -- Barrier  : this magic is double your defense next 4 turns after using\n");
            printf("\n");
            printf("           Fighter's Name : ");
            scanf("%s",fighter);
            printf("\n");
            loading(2);
            printf("\n");
            printf("            Selct your opponent \n");
            printf("\n");
            printf("                1: Slime    (easy)      press '1'\n");
            printf("                2: Warrior  (normal)    press '2'\n");
            printf("                3: Dragon   (hard)      press '3'\n");
            printf("\n");
            printf("                    Your opponent (int) :");
            scanf("%d",&mode);
            
            if(mode==1){
            
                opHP=70;
                PUturn=0;
                Dturn=0;
                    
                
                printf("\n");
                printf("\n");
                printf("            -----------------------------------------------\n");
                printf("                    Slime is appeared ! \n");
                printf("                                    HP 70 / 70  \n");
                printf("\n");
                printf("                    What will %s do ?\n",fighter);
                printf("                        '1' : Attack \n");
                printf("                        '2' : Heal   \n");
                printf("                        '3' : Reflect\n");
                printf("                        '4' : Power up\n");
                printf("                        '5' : Barrier\n");
                printf("\n");
                printf("                                   %s's HP 50 / 50  \n",fighter);
                printf("            -----------------------------------------------\n");
                printf("\n");
                
                myHP=50;
                
                while(myHP>0 && opHP>0){
                    
                    srand((unsigned)time(NULL));
                    oppower=(int) rand()%6+6;
                    
                    printf("\n");
                    printf("        1:attack 2:Heal 3:Reflect 4:Power up 5:Barrier\n");
                    printf("                    Choose to do (int) :");
                    scanf("%d",&action);
                    
                    if(action==1){
                        printf("\n");
                        printf("            Determine your power : ");
                        scanf("%d",&power);
                        defense=10-power;
                        
                        if(PUturn>=1 && PUturn<=4){
                            power = power*2;
                            PUturn +=1;
                        }
                        
                        if(Dturn>=1 && Dturn<=4){
                            defense = defense*2;
                            Dturn +=1;
                        }
                        
                        mydamage=oppower-defense;
                        if(mydamage<0) mydamage=0;
                        
                    }else if(action==2){
                        if(flag1==0){
                            myHP=50;
                            printf("\n");
                            printf("            Cure %s's wound !\n",fighter);
                            flag1+=1;
                            power=0;
                            defense=0;
                            
                            if(PUturn>=1 && PUturn<=4){
                                power = power*2;
                                PUturn +=1;
                            }
                        
                            if(Dturn>=1 && Dturn<=4){
                                defense = defense*2;
                                Dturn +=1;
                            }
                            
                            mydamage=oppower-defense;
                            if(mydamage<0) mydamage=0;
                            
                        }else{
                            printf("\n");
                            printf("            %s has already used this magic !\n",fighter);
                            printf("\n");
                            continue;
                        }
                    }else if(action==3){
                        if(flag2==0){
                            
                            if(oppower > myHP){
                                printf("\n");
                                printf("            Reflect opponent's attack !\n");
                                power=oppower;
                                oppower=0;
                                flag2+=1;
                                mydamage=oppower-defense;
                                if(mydamage<0) mydamage=0;
                                
                                if(PUturn>=1 && PUturn<=4){
                                PUturn +=1;
                                }
                                
                                if(Dturn>=1 && Dturn<=4){
                                Dturn +=1;
                                }
                                
                            }else{
                                printf("\n");
                                printf("            You failed to reflect ...");
                                power=0;
                                defense=0;
                                flag2+=1;
                                mydamage=oppower-defense;
                                if(mydamage<0) mydamage=0;
                                
                                if(PUturn>=1 && PUturn<=4){
                                power = power*2;
                                PUturn +=1;
                                }
                                
                                if(Dturn>=1 && Dturn<=4){
                                defense = defense*2;
                                Dturn +=1;
                                }
                                
                            }
                            
                        }else{
                            printf("\n");
                            printf("            %s has already used this magic !\n",fighter);
                            printf("\n");
                            continue;
                        }
                    }else if(action==4){
                        if(flag3==0){
                            printf("\n");
                            printf("            %s is power up !\n",fighter);
                            PUturn +=1;
                            flag3+=1;
                            power=0;
                            defense=0;
                            mydamage=oppower-defense;
                            if(mydamage<0) mydamage=0;
                            
                            if(Dturn>=1 && Dturn<=4){
                                defense = defense*2;
                                Dturn +=1;
                            }
                            
                        }else{
                            printf("\n");
                            printf("            %s has already used this magic !\n",fighter);
                            printf("\n");
                            continue;
                        }
                        
                    }else if(action==5){
                        if(flag4==0){
                            printf("\n");
                            printf("            %s is activating the barrier ...\n",fighter);
                            Dturn +=1;
                            power=0;
                            defense=0;
                            mydamage=oppower-defense;
                            flag4+=1;
                            if(mydamage<0) mydamage=0;
                            
                            if(PUturn>=1 && PUturn<=4){
                                power = power*2;
                                PUturn +=1;
                            }
                            
                        }else{
                            printf("\n");
                            printf("            %s has already used this magic !\n",fighter);
                            printf("\n");
                            continue;
                        }
                        
                    }else{
                        printf("\n");
                        printf("            Please input '1','2','3','4','5'\n");
                        printf("\n");
                        continue;
                    }
                    
                    myHP = myHP - mydamage;
                    if(myHP<=0) myHP=0;
                    
                    opHP = opHP - power;
                    if(opHP<=0) opHP=0;
                    
                    printf("\n");
                    printf("            %s inflict %d damage !\n",fighter,power);
                    printf("            %s takes %d damage !\n",fighter,mydamage);
                    printf("\n");
                    printf("                Now     %s's HP is %d / 50\n",fighter,myHP);
                    printf("                     slime's HP is %d / 70\n",opHP);
                    printf("\n");
                    printf("\n");
                    printf("\n");
                    
                }
                
                loading(2);
                
                if(myHP==0 && opHP!=0){
                    printf("            You lose ........\n");
                    printf("                the slime's rest of HP is %d / 70 ...\n",opHP);
                    printf("\n");
                    printf("            After that , you are helped by another fighter\n");
                    printf("            %s decide to beat down next time ...\n",fighter);
                    printf("\n");
                }else if(myHP!=0 && opHP==0){
                    printf("            You win !!\n");
                    printf("                Your rest of HP is %d / 50 \n",myHP);
                    printf("\n");
                }else if(opHP==0 && myHP==0){
                    printf("            %s and slime lost consciousnes ... \n",fighter);
                    printf("            After that , you are helped by another fighter\n");
                }
            
            }else if(mode==2){
            
                opHP=90;
                PUturn=0;
                Dturn=0;
                
                printf("\n");
                printf("\n");
                printf("            -----------------------------------------------\n");
                printf("                    Warrior is appeared ! \n");
                printf("                                    HP 90 / 90  \n");
                printf("\n");
                printf("                    What will %s do ?\n",fighter);
                printf("                        '1' : Attack \n");
                printf("                        '2' : Heal   \n");
                printf("                        '3' : Reflect\n");
                printf("                        '4' : Power up\n");
                printf("                        '5' : Barrier\n");
                printf("\n");
                printf("                                   %s's HP 50 / 50  \n",fighter);
                printf("            -----------------------------------------------\n");
                printf("\n");
                
                
                myHP=50;
                
                while(myHP>0 && opHP>0){
                    
                    
                    oppower=(int) rand()%8+8;
                    
                    printf("\n");
                    printf("            1:attack 2:Heal 3:Reflect 4:Power up 5:Barrier\n");
                    printf("                        Choose to do (int) :");
                    scanf("%d",&action);
                    
                    if(action==1){
                        printf("\n");
                        printf("            Determine your power : ");
                        scanf("%d",&power);
                        defense=10-power;
                        
                        if(PUturn>=1 && PUturn<=4){
                            power = power*2;
                            PUturn +=1;
                        }
                        
                        if(Dturn>=1 && Dturn<=4){
                            defense = defense*2;
                            Dturn +=1;
                        }
                        
                        mydamage=oppower-defense;
                        if(mydamage<0) mydamage=0;
                        
                    }else if(action==2){
                        if(flag1==0){
                            myHP=50;
                            printf("\n");
                            printf("            Cure %s's wound !\n",fighter);
                            flag1+=1;
                            power=0;
                            defense=0;
                            
                            if(PUturn>=1 && PUturn<=4){
                                power = power*2;
                                PUturn +=1;
                            }
                        
                            if(Dturn>=1 && Dturn<=4){
                                defense = defense*2;
                                Dturn +=1;
                            }
                            
                            mydamage=oppower-defense;
                            if(mydamage<0) mydamage=0;
                            
                        }else{
                            printf("\n");
                            printf("            %s has already used this magic !\n",fighter);
                            printf("\n");
                            continue;
                        }
                    }else if(action==3){
                        if(flag2==0){
                            
                            if(oppower > myHP){
                                printf("\n");
                                printf("            Reflect opponent's attack !\n");
                                power=oppower;
                                oppower=0;
                                flag2+=1;
                                mydamage=oppower-defense;
                                if(mydamage<0) mydamage=0;
                                
                                if(PUturn>=1 && PUturn<=4){
                                PUturn +=1;
                                }
                                
                                if(Dturn>=1 && Dturn<=4){
                                Dturn +=1;
                                }
                                
                            }else{
                                printf("\n");
                                printf("            You failed to reflect ...");
                                power=0;
                                defense=0;
                                flag2+=1;
                                mydamage=oppower-defense;
                                if(mydamage<0) mydamage=0;
                                
                                if(PUturn>=1 && PUturn<=4){
                                power = power*2;
                                PUturn +=1;
                                }
                                
                                if(Dturn>=1 && Dturn<=4){
                                defense = defense*2;
                                Dturn +=1;
                                }
                            }
                            
                        }else{
                            printf("\n");
                            printf("            %s has already used this magic !\n",fighter);
                            printf("\n");
                            continue;
                        }
                    }else if(action==4){
                        if(flag3==0){
                            printf("\n");
                            printf("            %s is power up !\n",fighter);
                            PUturn +=1;
                            flag3+=1;
                            power=0;
                            defense=0;
                            mydamage=oppower-defense;
                            if(mydamage<0) mydamage=0;
                            
                            if(Dturn>=1 && Dturn<=4){
                                defense = defense*2;
                                Dturn +=1;
                            }
                            
                        }else{
                            printf("\n");
                            printf("            %s has already used this magic !\n",fighter);
                            printf("\n");
                            continue;
                        }
                        
                    }else if(action==5){
                        if(flag4==0){
                            printf("\n");
                            printf("            %s is activating the barrier ...\n",fighter);
                            Dturn +=1;
                            power=0;
                            defense=0;
                            mydamage=oppower-defense;
                            flag4+=1;
                            if(mydamage<0) mydamage=0;
                            
                            if(PUturn>=1 && PUturn<=4){
                                power = power*2;
                                PUturn +=1;
                            }
                            
                        }else{
                            printf("\n");
                            printf("            %s has already used this magic !\n",fighter);
                            printf("\n");
                            continue;
                        }
                        
                    }else{
                        printf("\n");
                        printf("            Please input '1','2','3','4','5'\n");
                        printf("\n");
                        continue;
                    }
                    
                    myHP = myHP - mydamage;
                    if(myHP<=0) myHP=0;
                    
                    opHP = opHP - power;
                    if(opHP<=0) opHP=0;
                    
                    printf("\n");
                    printf("            %s inflict %d damage !\n",fighter,power);
                    printf("            %s takes %d damage !\n",fighter,mydamage);
                    printf("\n");
                    printf("                Now       %s's HP is %d / 50\n",fighter,myHP);
                    printf("                     warrior's HP is %d / 90\n",opHP);
                    printf("\n");
                    printf("\n");
                    printf("\n");
                    
                }
                
                loading(2);
                
                if(myHP==0 && opHP!=0){
                    printf("            You lose ........\n");
                    printf("                the warrior's rest of HP is %d / 90 ...\n",opHP);
                    printf("\n");
                    printf("            After that , you are helped by another fighter\n");
                    printf("            %s decide to beat down next time ...\n",fighter);
                    printf("\n");
                }else if(myHP!=0 && opHP==0){
                    printf("            You win !!\n");
                    printf("                Your rest of HP is %d / 50 \n",myHP);
                    printf("\n");
                }else if(opHP==0 && myHP==0){
                    printf("            %s and warrior lost consciousnes ... \n",fighter);
                    printf("            After that , you are helped by another fighter\n");
                }
            
            }else if(mode==3){
            
                opHP=100;
                PUturn=0;
                Dturn=0;
                    
                printf("\n");
                printf("\n");
                printf("            -----------------------------------------------\n");
                printf("                    Dragon is appeared ! \n");
                printf("                                    HP 100 / 100  \n");
                printf("\n");
                printf("                    What will %s do ?\n",fighter);
                printf("                        '1' : Attack \n");
                printf("                        '2' : Heal   \n");
                printf("                        '3' : Reflect\n");
                printf("                        '4' : Power up\n");
                printf("                        '5' : Barrier\n");
                printf("\n");
                printf("                                   %s's HP 50 / 50  \n",fighter);
                printf("            -----------------------------------------------\n");
                printf("\n");
                
                
                myHP=50;
                
                while(myHP>0 && opHP>0){
                    
                    
                    oppower=(int) rand()%15+5;
                    
                    printf("\n");
                    printf("            1:attack 2:Heal 3:Reflect 4:Power up 5:Barrier\n");
                    printf("                        Choose to do (int) :");
                    scanf("%d",&action);
                    
                    if(action==1){
                        printf("\n");
                        printf("            Determine your power : ");
                        scanf("%d",&power);
                        defense=10-power;
                        
                        if(PUturn>=1 && PUturn<=4){
                            power = power*2;
                            PUturn +=1;
                        }
                        
                        if(Dturn>=1 && Dturn<=4){
                            defense = defense*2;
                            Dturn +=1;
                        }
                        
                        mydamage=oppower-defense;
                        if(mydamage<0) mydamage=0;
                        
                    }else if(action==2){
                        if(flag1==0){
                            myHP=50;
                            printf("\n");
                            printf("            Cure %s's wound !\n",fighter);
                            flag1+=1;
                            power=0;
                            defense=0;
                            
                            if(PUturn>=1 && PUturn<=4){
                                power = power*2;
                                PUturn +=1;
                            }
                        
                            if(Dturn>=1 && Dturn<=4){
                                defense = defense*2;
                                Dturn +=1;
                            }
                            
                            mydamage=oppower-defense;
                            if(mydamage<0) mydamage=0;
                            
                        }else{
                            printf("\n");
                            printf("            %s has already used this magic !\n",fighter);
                            printf("\n");
                            continue;
                        }
                    }else if(action==3){
                        if(flag2==0){
                            
                            if(oppower > myHP){
                                printf("\n");
                                printf("            Reflect opponent's attack !\n");
                                power=oppower;
                                oppower=0;
                                flag2+=1;
                                mydamage=oppower-defense;
                                if(mydamage<0) mydamage=0;
                                
                                if(PUturn>=1 && PUturn<=4){
                                PUturn +=1;
                                }
                                
                                if(Dturn>=1 && Dturn<=4){
                                Dturn +=1;
                                }
                                
                            }else{
                                printf("\n");
                                printf("            You failed to reflect ...");
                                power=0;
                                defense=0;
                                flag2+=1;
                                mydamage=oppower-defense;
                                if(mydamage<0) mydamage=0;
                                
                                if(PUturn>=1 && PUturn<=4){
                                power = power*2;
                                PUturn +=1;
                                }
                                
                                if(Dturn>=1 && Dturn<=4){
                                defense = defense*2;
                                Dturn +=1;
                                }
                            }
                            
                        }else{
                            printf("\n");
                            printf("            %s has already used this magic !\n",fighter);
                            printf("\n");
                            continue;
                        }
                    }else if(action==4){
                        if(flag3==0){
                            printf("\n");
                            printf("            %s is power up !\n",fighter);
                            PUturn +=1;
                            flag3+=1;
                            power=0;
                            defense=0;
                            mydamage=oppower-defense;
                            if(mydamage<0) mydamage=0;
                            
                            if(Dturn>=1 && Dturn<=4){
                                defense = defense*2;
                                Dturn +=1;
                            }
                            
                        }else{
                            printf("\n");
                            printf("            %s has already used this magic !\n",fighter);
                            printf("\n");
                            continue;
                        }
                        
                    }else if(action==5){
                        if(flag4==0){
                            printf("\n");
                            printf("            %s is activating the barrier ...\n",fighter);
                            Dturn +=1;
                            power=0;
                            defense=0;
                            mydamage=oppower-defense;
                            flag4+=1;
                            
                            if(mydamage<0) mydamage=0;
                            
                            if(PUturn>=1 && PUturn<=4){
                                power = power*2;
                                PUturn +=1;
                            }
                            
                        }else{
                            printf("\n");
                            printf("            %s has already used this magic !\n",fighter);
                            printf("\n");
                            continue;
                        }
                        
                    }else{
                        printf("\n");
                        printf("            Please input '1','2','3','4','5'\n");
                        printf("\n");
                        continue;
                    }
                    
                    myHP = myHP - mydamage;
                    if(myHP<=0) myHP=0;
                    
                    opHP = opHP - power;
                    if(opHP<=0) opHP=0;
                    
                    printf("\n");
                    printf("            %s inflict %d damage !\n",fighter,power);
                    printf("            %s takes %d damage !\n",fighter,mydamage);
                    printf("\n");
                    printf("                Now       %s's HP is %d / 50\n",fighter,myHP);
                    printf("                      dragon's HP is %d / 100\n",opHP);
                    printf("\n");
                    printf("\n");
                    printf("\n");
                    
                }
                
                loading(2);
                
                if(myHP==0 && opHP!=0){
                    printf("            You lose ........\n");
                    printf("                the dragon's rest of HP is %d / 100 ...\n",opHP);
                    printf("\n");
                    printf("            After that , you are helped by another fighter\n");
                    printf("            %s decide to beat down next time ...\n",fighter);
                    printf("\n");
                }else if(myHP!=0 && opHP==0){
                    printf("            You win !!\n");
                    printf("                Your rest of HP is %d / 50 \n",myHP);
                    printf("\n");
                }else if(opHP==0 && myHP==0){
                    printf("            %s and dragon lost consciousnes ... \n",fighter);
                    printf("            After that , you are helped by another fighter\n");
                }
            
            }
            
            gomm();
        
        }else{
            break;
        }
    }
            
    printf("\n");
    printf("\n");
    printf("\n");
    printf("                ---Thank you for playing---\n");
    sleep(1);
    printf("\n");
    printf("\n");
    printf("\n");
    
    return 0;
}