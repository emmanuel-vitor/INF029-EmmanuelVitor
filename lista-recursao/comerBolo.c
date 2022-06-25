

// função de recursividade para comer bolo
#include <stdio.h>
int comerBolo();
int fatia;
int main()
{
    
   comerBolo(3);
   
    return 0;
}

int comerBolo(int fatia){
    
    if(fatia>0){
        printf("Ainda tem bolo, restam: %d fatias\n ",fatia);
        fatia--;
        comerBolo(fatia);
    }else {
        
        printf("acabou");
    }
    return 0;
}
