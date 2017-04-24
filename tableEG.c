#include<stdio.h>
#include<string.h>
#include<stdlib.h>

struct head{
	struct module *li;
	struct head *ne;
};

struct module{
	char data[20];
	struct module *ne;
};

typedef struct head head;
typedef struct module mode;
struct head *hh = NULL;

void insert(){
	mode *n = malloc(sizeof(struct module));
	printf("Enter the new Module name to be inserted: ");
	scanf("%s",n->data);
	head *nh = malloc(sizeof(struct head));
	nh->li = n;
	nh->ne = NULL;
	head *t = hh;
	if(t==NULL){
		hh = nh;
	}else{
		while(t->ne!=NULL){
			t = t->ne;
		}
		t->ne = nh;
	}
}

void modify(){
	char tname[20];
	int flag = 0;
	printf("Enter the name of the module to be modified: ");
	scanf("%s",tname);
	mode *n = malloc(sizeof(struct module));
	printf("Enter the name of the object to be inserted in the module: ");
	scanf("%s",n->data);
	n->ne = NULL;
	head *h = hh;
	if(h==NULL){
		printf("Oops! there are no modules\n");
	}else{
		while(h!=NULL){
			if(strcmp((h->li)->data,tname)==0){
				flag = 1;
				mode *t = (h->li)->ne;
				while(t->ne!=NULL){
					t = t->ne;
				}
				t->ne = n;
			}
			h = h->ne;
		}
		if(flag==1){
			printf("New object successfully inserted into prescribed module\n");
		}else{
			printf("Sorry! Couldn't find requested module\n");
		}
	}
}

void lookUp(){
	char sen[100],temp[20];
	printf("Enter a sentence: ");
	scanf("%s",sen);
	int i=0;
	int n = strlen(sen);
	while(i<n){
		if(sen[i]!=' ' || sen[i]!='\0'){
			strncat(temp, sen[i], 1);
		}else{
			if(strlen(temp)!=0){
				mode *t = 
			}
			memset(temp, '\0', sizeof(temp));
		}
		i++;
	}
}

void printMenu(){
	printf("\nMenu\n1)Insert\n2)Modify\n3)Look Up\n");
}

int main(){
	int n=0;
	char c;
	do{
		printMenu();
		scanf("%d",&n);
		switch(n){
			case 1:
				insert();
				break;
			case 2:
				modify();
				break;
			case 3:
				lookUp();
				break;
			default:
				printf("Please choose a valid option. Thank you.\n")
		}
		printf("Do you wish to continue?(y/n)\n");
		scanf("%c",&c);
	}while(c=='y' || c=='Y');
}
