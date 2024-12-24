#include<stdio.h>
int main(){
	int n,m,choice,min,temp;
	printf("moi nhap vao hang: ");
	scanf("%d",&n);
	printf("moi nhap vao cot: ");
	scanf("%d",&m);
	int array[n][m];
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			printf("array[%d][%d]=",i,j);
			scanf("%d",&array[i][j]);
		}
	}
	do{
		printf("==============MENU===============\n");
		printf("1.In gia tri cac phan tu cua mang\n");
		printf("2.Su dung Insretion Sort de sap xep mang giam dan va in ra\n");
		printf("3.Su dung Selection Sort de sap xep mang tang dan va in ra\n");
		printf("4.Su dung Bubble Sort de sap xep mang gian dan va in ra\n");
		printf("5.Thoat\n");
		printf("moi chon chuc nang de thuc hien: ");
		scanf("%d",&choice);
		switch(choice){
			case 1:{
				printf("gia tri cua cac phan tu la: \n");
				for(int i=0;i<n;i++){
					for(int j=0;j<m;j++){
						printf("%d ",array[i][j]);
					}
					printf("\n");
				}
				printf("\n");
				break;
			}
			case 2:{
				printf("===============Insertion Sort================\n");
				int k=m*n;
				for(int i=0;i<k;i++){
					int key=array[i/m][i%m];
					int j=i-1;
			    	while(j>=0&&key>array[j/m][j%m]){
			    		array[j/m][j%m+1]=array[j/m][j%m];
			    		j--;
					}
					array[j/m][j%m+1]=key;
					
				}
				printf("phan tu theo thu tu giam dan la: \n");
				for(int i=0;i<n;i++){
					for(int j=0;j<m;j++){
						printf("%d ",array[i][j]);	 
					}
					printf("\n");
				}
				printf("\n");
				break;
			}
			case 3:{
				printf("====================Selection Sort===================\n");
				int k=m*n;
				for(int i=0;i<k;i++){
					min=array[i/m][i%m];
			    	for(int j=i+1;j<k;j++){
			    		if(array[j/m][j%m]<min){
			    			min=array[j/m][j%m];
			    			array[j/m][j%m]=array[i/m][i%m];
			    			array[i/m][i%m]=min;
						}
					}
				}
				for(int i=0;i<n;i++){
					for(int j=0;j<m;j++){
						printf("%d ",array[i][j]);	 
					}
					printf("\n");
				}
				printf("\n");
				break;
			}
			case 4:{
				printf("===========Bubble Sort============\n");
				int k=m*n;
				for(int i=0;i<k-1;i++){
			    	for(int j=i+1;j<k;j++){
			    		if(array[i/m][i%m]<array[j/m][j%m]){
			    			temp=array[i/m][i%m];
			    			array[i/m][i%m]=array[j/m][j%m];
			    			array[j/m][j%m]=temp; 
						}
					}
				}
				printf("phan tu theo thu tu giam dan la: \n");
				for(int i=0;i<n;i++){
					for(int j=0;j<m;j++){
						printf("%d ",array[i][j]);	 
					}
					printf("\n");
				}
				printf("\n");
				break;
			}
			case 5:
				break;
			default:{
				printf("moi ban nhap lai(1-5)!!!!!\n");
				break;
			}
		}
	}while(choice!=5);
	return 0;
}
