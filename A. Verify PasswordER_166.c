#include <stdio.h>
 
int main() {
   int t ; 
    
   scanf("%d",&t);
   for (int i =0 ; i < t; i++ ){
       int state = 1 ; 
       int len ; 
scanf("%d",&len);
 
       char  str[len+1 ];
       scanf("%s",str);
       for (int j = 0 ; j < len-1 ; j++){
           
           if (str[j] > str[j+1]){
            state = 0 ; 
               break; 
           }
         
       }
       
       if (state){
    printf("YES\n");
}else {
    printf("NO\n");
}
 
   }
 
    return 0;
}
