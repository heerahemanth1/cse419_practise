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

head *hh = NULL;

void display(){
	head *t = hh;
	while(t!=NULL){
		mode *m = t->li;
		if(m!=NULL){
			printf("%s: ",m->data);
			m = m->ne;
		}
		while(m!=NULL){
			printf("%s ",m->data);
			m = m->ne;
		}
		printf("\n");
		t = t->ne;
	}
}

void insert(){
	head *nh = (struct head *)malloc(sizeof(struct head));
	mode *nm = (struct module *)malloc(sizeof(struct module));
	printf("Enter the name of the new module to be created\n");
	scanf("%s",nm->data);
	nm->ne = NULL;
	nh->li = nm;
	nh->ne = hh;
	hh = nh;
	display();
}

void modify(){
	char mod[20];
	printf("Enter the name of the module to be modified: ");
	scanf("%s",mod);
	mode *nm = (struct module *)malloc(sizeof(struct module));
	printf("Enter the new object to be insered in %s: ",mod);
	scanf("%s",nm->data);
	head *th = hh;
	if(th!=NULL){
		while(th!=NULL){
			mode *tm = th->li;
			if(strcmp(tm->data,mod)==0){
				nm->ne = tm->ne;
				tm->ne = nm;
			}
			th = th->ne;
		}
	}
	display();
}

void lookUp(){
	char sen[100],temp[20],mod[20];
	printf("Enter a sentence: ");
	scanf("%s",sen);
	int i=0;
	int top=0;
	int n = strlen(sen);
	while(i<n){
		if(sen[i]!=' ' && i!=n-1){
			temp[top] = sen[i];
			top++;
			temp[top] = '\0';
		}else{
			if(i==n-1){
				temp[top] = sen[i];
				top++;
				temp[top] = '\0';
			}
			head *th = hh;
			while(th!=NULL){
				mode *m = th->li;
				strcpy(mod,m->data);
				m = m->ne;
				while(m!=NULL){
					if(strcmp(m->data,temp)==0){
						printf("\n%s: %s\n",mod,temp);
					}
					m = m->ne;
				}
				th = th->ne;
			}
			memset(temp,'\0',sizeof(temp));
			top=0;
		}
		i++;
	}
}

int main(){
	int ch,op;
	do{
		printf("\nMenu\n1)Insert\t2)Modify\t3)Look Up\n");
		scanf("%d",&ch);
		if(ch==1){
			insert();
		}else if(ch==2){
			modify();
		}else if(ch==3){
			lookUp();
		}
		printf("Do you wish to continue?(y=1/n=0):\t");
		scanf("%d",&op);
	}while(op==1);
}
