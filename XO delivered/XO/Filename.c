#include <stdio.h>
 //Compiler version g++ 4.9

 
int main(void)
 for(i=0;i<3;i++)
 	

if((a[i][0]==a[i][1]&& a[i][0]=='O')|| (a[i][1]==a[i][2]   && a[i][1]=='O'  ) || (a[i][0]==a[i][2] && a[i][0]=='O'        ))
 	
{for(j=0;j<3;j++){
if(a[i][j]!='O' && a[i][j]!='X'){a[i][j]='O' return;}
 	}
 	}
 
else if((a[0][i]==a[1][i] && a[0][i]=='O' )|| (a[1][i]==a[2][i] && a[1][i]=='O') || (a[0][i]==a[2][i] && a[0][i]=='O' ))	
 
 
 
{for(j=0;j<3;j++){
if(a[j][i]!='O'  && a[i][j]!='X' ){a[j][i]='O' return;
}}
 

 }
else if((a[0][0]==a[1][1] && a[0][0]=='O' )|| (a[1][1]==a[2][2] && a[1][1]=='O') || (a[0][0]==a[2][2] && a[0][0]=='O' ))
{ for(i=0;i<2;i++){if(a[i][i]!='O' && a[i][i]!='X'){a[i][i]='O'; return;}}                                                 }
else if((a[0][2]==a[1][1] && a[0][2]=='O' )|| (a[1][1]==a[2][0] && a[1][1]=='O') || (a[0][2]==a[2][0] && a[0][2]=='O' ))
{ if(a[0][2]!='O' && a[0][2]!='X'){a[0][2]='O'; return;} else if(a[1][1]!='O' && a[1][1]!='X'){a[1][1]='O'; return;} else if(a[2][0]!='O' && a[2][0]!='X'){a[2][0]='O'; return;} }

                                                 
