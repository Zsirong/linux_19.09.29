#include "head.h"

#define N 20

int main()
{
	FILE *fdsrc,*fddes;
	//int n=0;
	char buf[20];
	char des[20];

	printf("input the name of a file:");
	scanf("%s",des);
	if((fdsrc = fopen("/etc/passwd","rt"))==NULL){
		exit(1);	
	}
	
	if((fddes=open(des,"wt"))==NULL){
		exit(1);
	}
	while(!feof(fdsrc)){
			fread(buf,sizeof(char),20,fdsrc);
			fwrite(buf, sizeof(char), 20, fddes);
	};
	fclose(fdsrc);
	fclose(fddes); 

	//fclose(fdsrc);
	//printf("success!");
	//exit(0);
	return 0;
}
