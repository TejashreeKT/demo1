#include <stdio.h>
int main(){
int x,y;
printf("enter rows:");
scanf("%d",&x);
printf("enter columns:");
scanf("%d",&y);
int a[x][y],b[x][y],i,j,k;
for (i=0;i<x;i++){
for (j=0;j<y;j++){
printf("enter elements for first matrix %d %d",i,j);
scanf("%d",&a[i][j]);}}
for (i=0;i<x;i++){
for (j=0;j<y;j++){
printf("enter elements for second matrix %d %d",i,j);
scanf("%d",&b[i][j]);}}
for (i=0;i<x;i++){
for (k=0;k<y;k++){
printf("%d ",a[i][k]+b[i][k]);}
printf("\n");
}}
