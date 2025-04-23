#include <stdio.h>
#include <string.h>

void recurse1();
void recurse2();

int index_block[50], memory[50], ind_block, n;

void recurse1(){
	printf("Enter the index block for file: ");
	scanf("%d", &ind_block);

	if(ind_block!=1){
		printf("Enter the number of blocks required: ");
		scanf("%d", &n);
	}
	else{
		printf("Index block already occupied");
		recurse1();
	}
	recurse2();
}

void recurse2(){
	printf("Enter the blocks where files will be allocated: ");
	for(int i=0; i<n; i++){
		scanf("%d", &index_block[i]);
	}
	for(int i=0; i<n; i++){
		if(memory[index_block[i]]==1){
			printf("Block already occupied. Please choose another set of blocks");
			recurse2();
		}
		else{
			memory[index_block[i]]=1;
		}
	}
}

int main(){
	for(int i=0; i<50; i++)
		memory[i] = 0;
	recurse1();
	for(int i=0; i<50; i++)
		printf("%d", memory[i]);
}

