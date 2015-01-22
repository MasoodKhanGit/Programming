#include<stdio.h>

typedef struct list_node{
    int vertex_no;
    struct list_node *next;
}list_node;

typedef struct graph{
    int V;
    struct list_node *a[100]; ///or declare double pointer and initialize it
}graph;

void initialize_graph(graph* G, int V){
        G->V = V;
        int i;
        printf("initialise check\n");
        for(i = 0; i < V; i++){

            /**
            list_node* head = malloc(sizeof(list_node));
            head = G->a[i];
            head->next = NULL;
            */ ///..Wrong way of doing

            /**list_node* node = malloc(sizeof(list_node));
            node->vertex_no = i;
            node->next = NULL;
            G->a[i] = node;
            */
            G->a[i] = NULL;

        }
}

void insert_node(graph *G, int u, int v){
    list_node* newNode = malloc(sizeof(list_node));
    newNode->vertex_no = v;
    newNode->next = NULL;
    list_node* head = G->a[u];

    if(head == NULL){
        G->a[u] = newNode;
    }
    else{
        list_node* temp = head->next;
        head->next = newNode;
        newNode->next = temp;
    }
    /**while(head->next != NULL){
        ///printf("NULL check");
        head = head->next;
    }
    head->next = newNode;
    */
}

void print(graph *G){
    int i;
    for(i=0; i < G->V; i++){
        list_node* head = G->a[i];
        printf("Adj list of vertext %d = \n", i);
        //head = head->next;
        while(head != NULL){
            printf("%d ",head->vertex_no);
            head = head->next;
        }
        printf("\n");
    }
}

/**
0 --- 1
| \   |
|  \  |
2    3
*/

int main(){
        int V = 4;
        graph *G = malloc(sizeof(graph));
       /// printf("Vertices: ");
        ///scanf("%d", &V);
        initialize_graph(G, V);
        printf("graph vertices: %d\n", G->V);
        insert_node(G, 0, 1);
        ///printf("check point");
        insert_node(G, 0, 2);
        insert_node(G, 0, 3);
        insert_node(G, 1, 0);
        insert_node(G, 1, 2);
        insert_node(G, 2, 0);
        insert_node(G, 2, 1);
        insert_node(G, 3, 0);
        printf("adjacency list: \n");
        print(G);

    return 0;
}

