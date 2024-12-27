#include <stdio.h>
inline void recuadro(){
#if defined(_WIN32)
gotoxy(0,0);printf("█";
#endif
unsigned int x=getmaxX(),j=0;
unsigned int y=getmaxY(),i=0;

//lineas verticales
  while(i<=getmaxY()){
    gotoxy(x,y);printf("█");
    gotoxy(0,y--);printf("█");
    fflush(stdout);
    i++;
  }
//lineas horizontales
  y=getmaxY();
  while(j<=getmaxX()){
    gotoxy(x,y);printf("█");
    gotoxy(x--,0);printf("█");
    fflush(stdout);
    j++;
  }
fflush(stdout);
printf(RESET_COLOR);
}