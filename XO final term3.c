//
//  main.c
//  XO
//
//  Created by karim fathy on 11/28/16.
//  Copyright © 2016 Fetouh. All rights reserved.
//
#include<stdlib.h>
#include <stdio.h>
#include<string.h>
char a[3][3]={'1','2','3','4','5','6','7','8','9'};
char p1[20],p2[20];
void newgame(){int i,j; char c='1';
    for(i=0;i<3;i++){for(j=0;j<3;j++){a[i][j]=c;
        c++;
        
    }}}
void showarray1()
{int i,j;
    for(i=0;i<3;i++){printf("\t"); for(j=0;j<3;j++){
        printf(" %c\t",a[i][j]); if(j<2){printf("|");}
    }
        if(i<2) {printf("\n\t----|---|---\n");}
    }
   
    printf("\n\n\n");
}

void showarray(){
int i,j;
     printf("\n\n\n");   for(i=0;i<3;i++){for(j=0;j<3;j++){
            if(a[i][j]=='O' || a[i][j]=='X' ) {printf(" %c\t",a[i][j]);}
            
            else {printf("\t");}
            
            if(j<2) printf("|");      }
            if(i<2)printf("\n----|---|---\n");
        }
    printf("\n\n\n");
}






int checkvalidity(char x,char temp){
    int i,j;
    for(i=0;i<3;i++){for(j=0;j<3;j++){
        if(x==a[i][j] && a[i][j]!='X' && a[i][j]!='O' && temp=='\n') {return 1;}
        else  if(temp==a[i][j] && a[i][j]!='X' && a[i][j]!='O' && x=='\n') {return 1;}    }}
    return 0;
    




}
void Xmove(char x)
{
    int i,j;
    for(i=0;i<3;i++){for(j=0;j<3;j++){
        if(x==a[i][j]){a[i][j]='X';          }
    }}
    showarray();
}

int checkwinnerX(int winner)
{int i=0;
    int j=0;
    while(i<3)
    { if(a[i][0]==a[i][1] && a[i][0]==a[i][2] && a[i][0]=='X')
    {return 1;}
        i++;}
    while(j<3)
    { if(a[0][j]==a[1][j] && a[0][j]==a[2][j] && a[0][j]=='X')
    {return 1;} j++;}
    
    if(a[0][0]==a[1][1] && a[1][1]==a[2][2] && a[1][1]=='X')
    {   return 1;   }
   else if(a[0][2]==a[1][1] && a[1][1]==a[2][0] && a[1][1]=='X')
    {   return 1;   }
    return 0;
    }



void Omove(char x)
{
    int i,j;
    for(i=0;i<3;i++){for(j=0;j<3;j++){
        if(x==a[i][j]){a[i][j]='O'; }
    }}
    showarray();
}

int checkwinnerO(int winner)
{int i=0;
    int j=0;
    while(i<3)
    { if(a[i][0]==a[i][1] && a[i][2]==a[i][1] && a[i][0]=='O')
    {return 2;} i++;}
    while(j<3)
    { if(a[0][j]==a[1][j] && a[1][j]==a[2][j] && a[1][j]=='O')
    {return 2;} j++;}
    
    if(a[0][0]==a[1][1] && a[1][1]==a[2][2] && a[1][1]=='O')
    {   return 2;   }
  else  if(a[0][2]==a[1][1] && a[1][1]==a[2][0] && a[1][1]=='O')
    {   return 2;   }
    
    
    
   return 0; }

int playagain(){int c; printf("Play Again?\n1-Yes\n2-No"); scanf("%d",&c); if(c==1)c=3; return c;       }

int main(int argc, const char * argv[]) {
    char temp;
    char x;
    int winner=0,found=0;
    
     int i=0;

    if(argc==2){return 0;}
   
    
    if(argc==1){  printf("X Player 1 enter your name");
        gets(p1);
        printf("O Player 2 enter your name");
        gets(p2);
        printf("\n\n\n");}
    
    newgame();
    showarray1();
      while(winner==0 && i<5 )
{do {found=0;
    printf("\n%s enter cell number ",p1); scanf("%c",&x);
    scanf("%c",&temp); found=checkvalidity(x,temp);} while(found==0);
    if(x=='\n'){x=temp;}
    

    Xmove(x);
    winner= checkwinnerX(winner);
    if(winner==1)
    {  printf("\n %s wins!!!!\n",p1); argc=playagain(); return main(argc,argv);}
    if(i==4){printf("\nIt's a Draw!!!\n"); argc=playagain(); return main(argc,argv); }
    do {found=0; printf("\n%s enter cell number\n",p2);
    scanf("%c",&x);
    scanf("%c",&temp); found=checkvalidity(x,temp);} while(found==0);
    if(x=='\n'){x=temp;}
    Omove(x);
    winner= checkwinnerO(winner);
    if(winner==1)
    {  printf("\n%s wins!!!!\n",p2 );  argc=playagain(); return main(argc,argv);}
    
    i++;
}
   
    
    

    
    return 0;
}
