#include<stdio.h>
int main(){
	int n,choice,min,temp;
	printf("moi nhap vao so phan tu cua mang: ");
	scanf("%d",&n);
	int array[n];
	for(int i=0;i<n;i++){
		printf("array[%d]=",i);
		scanf("%d",&array[i]);
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
				printf("gia tri cua cac phan tu la: ");
				for(int i=0;i<n;i++){
					printf("%d ",array[i]);
				}
				printf("\n");
				break;
			}
			case 2:{
				printf("Insertion Sort\n");
				for(int i=1;i<n;i++){
					int key=array[i];
					int j=i-1;
					while(j>=0&&key>array[j]){
						array[j+1]=array[j];
						j--;
					}
					array[j+1]=key;
				}
				printf("phan tu theo thu tu giam dan la: ");
				for(int i=0;i<n;i++){
					printf("%d ",array[i]);
				}
				printf("\n");
				break;
			}
			case 3:{
				printf("Selection Sort\n");
				for(int i=0;i<n;i++){
					min=array[i];
					for(int j=i+1;j<n;j++){
						if(array[j]<min){
							min=array[j];
							array[j]=array[i];
							array[i]=min;
						}
					}	
				}
				printf("phan tu theo thu tu tang dan la: ");
				for(int i=0;i<n;i++){
					printf("%d ",array[i]);
				}
				printf("\n");
				break;
			}
			case 4:{
				printf("Bubble Sort\n");
				for(int i=0;i<n-1;i++){
					for(int j=i+1;j<n;j++){
						if(array[j]>array[i]){
							temp=array[j];
							array[j]=array[i];
							array[i]=temp;
						}
					}
				}
				printf("phan tu theo thu tu giam dan la: ");
				for(int i=0;i<n;i++){
					printf("%d ",array[i]);
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
