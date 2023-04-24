#include "linkedlist.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int createNode(Node** top,int type,void num);
int appendNode(Node** top,int type,void date);
int Nodelength(Node* top);
int showNode(Node* top,int type);

int createNode(Node** top,int type,void num){
  if((*top)==NULL){
    (*top)=(Node*)malloc(sizeof(Node));
    if(type==0){
      (*top)->num=num;
    }else{
      strcpy((*top)->data),num);
    }
    (*top)->next=NULL;
    return 1;
  }
  return 0
}
int appendNode(Node** top,int type,void data){
  if((*top)!=NULL){
    Node* tmp=(*top);
    while(tmp->naxt!=NULL){
      tmp=tmp->next;
    }
    tmp->next=(Node*)malloc(sizeof(Node));
    if(type==0){
      tmp->next->num=data;
    }else{
      strcpy(tmp->next->data,data);
    }
    tmp->next->next=NULL;
    return 1;
  }
  return 0;
}
int Nodelength(Node* top){
  Node* tmp=top;
  int a=0;
  while(tmp!=NULL){
    tmp=tmp->next;
    a+=1;
  }
  return a;
}
int showNode(Node* top){
  if(top!=NULL){
     if(type==0){
       printf("%d",top->num);
     }else if(type==1){
       printf("%.2f",top->num);
     }else if(type==2){
       printf("%s",top->data);
    }
    top=top->next;
    while(top!=NULL){
      printf(" ");
    }
    
  }
}
