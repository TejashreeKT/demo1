#include <stdio.h>
int main(){
FILE*a;
a = fopen("average.txt","a+");
int x;

int max,min=x,y=0,i;
fscanf(a,"%d ",&max);
min=max;
for (i=0;i<5;i++){
 fscanf(a,"%d",&x);
(x<min)?min=x:min;
(x>max)?max=x:max;
y=y+x;}

fprintf(a,"\n average -%d \n",y/5);
fprintf(a,"minimum -%d \n",min);
fprintf(a,"maximum -%d \n",max);

fclose(a);
}
