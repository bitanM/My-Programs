typedef struct node{
	int data;
	struct node* next;
}node;
node* newnode(int data){
	node* n = (node*)malloc(sizeof(node));
	n->data = data;
	n->next = NULL;
	return n;
}
node* head;
void userinlist(int data){
	node* n = newnode(data);
	if(head==NULL){
		head = n;
		return;
	}
	node* temp = head;
	while(temp->next != NULL){
		temp = temp->next;
	}
	temp->next = n;
}
void selection_sort(){
	node* temp = head ;
	node* min;
	while(temp->next != NULL){
		min = temp;
		node* temp2 = temp;
		while(temp2->next != NULL){
			if(temp2->data < min->data){
				min = temp2;
			}
			temp2 = temp2->next;
			}
		int n = min->data;
		min->data = temp->data;
		temp->data = n;
		
		temp = temp->next;
	}
}
void show(){
	node* n = head;
	while(n != NULL){
		printf("%d ", n->data);
		n = n->next;
	}
}
int main(){
	printf("Enter the number of elements: ");
	int num;
	scanf("%d", &num);
	for(int i=0; i<num; i++){
		int data;
		scanf("%d", &data);
		userinlist(data);
	}
	selection_sort();
	show();
}
		
