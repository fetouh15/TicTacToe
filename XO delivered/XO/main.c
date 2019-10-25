//
//  main.c
//  XO
//
//  Created by karim fathy on 11/28/16.
//  Copyright © 2016 Fetouh. All rights reserved.
//

#include <stdio.h>
char a[3][3]={'1','2','3','4','5','6','7','8','9'};

void showarray()
{int i,j;
    for(i=0;i<3;i++){for(j=0;j<3;j++){
        printf("%c\t ",a[i][j]);
    }
     printf("\n");
    }
   

}


void Xmove(int r,int c)
{
a[r][c]='X';
    showarray(a);
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




void Omove(int r,int c)
{
    a[r][c]='O';
    showarray(a);
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











int main(int argc, const char * argv[]) {
    
        
    int r,c,i=0;
    int winner=0;
while(winner==0 && i<5 )
{do{
    printf("Player X enter row and column");    scanf("%d %d",&r,&c);}
    while(a[r][c]=='X'|| a[r][c]=='O' || r>2 || c>2);
    

    Xmove(r,c);
    winner= checkwinnerX(winner);
    if(winner==1)
    { printf("player X wins!!!!"); return 0;}
    do{
        printf("Player O enter row and column");    scanf("%d %d",&r,&c);}
    while(a[r][c]=='X'|| a[r][c]=='O' || r>2 || c>2);
    if(i==4){printf("It's a Draw!!!");}
    
    Omove(r,c);
    winner= checkwinnerO(winner);
    if(winner==1)
    { printf("player O wins!!!!"); return 0;}
    
    i++;
}
   
    
    

    
    return 0;
}
