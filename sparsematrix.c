#include<stdio.h>
int main(){
	int row,col,i,j;
	int a[10][10];
	int count=0;
	printf("enter number of rows:");
	scanf("%d",&row);
	printf("enter number of columns:");
	scanf("%d",&col);
	for(i=0;i<row;i++){
		for(j=0;j<col;j++){
			printf("enter element:");
			scanf("%d",&a[i][j]);
		}
	}
	printf("entered matrix is:\n");
	for(i=0;i<row;i++){
		for(j=0;j<col;j++){
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}
	for(i=0;i<row;i++){
		for(j=0;j<col;j++){
			if(a[i][j]==0){
				count++;
			}
		}
	}
	int s;
	s=(row*col)/2;
	if(count>s){
		printf("Its sparse matrix\n");
		printf("row\tcolumn\tvalue\n");
	}
	else{
		printf("Its not a sparse matrix\n");
	}
	while(count>s){
		for(i=0;i<row;i++){
		    for(j=0;j<col;j++){
			    if(a[i][j]!=0){
			    	printf("%d\t%d\t%d\n",i+1,j+1,a[i][j]);
				}
			}
		}
		count=0;
	}
	return 0;
}
