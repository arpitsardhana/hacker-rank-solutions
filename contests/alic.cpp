#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

#define MAXN 5005
#define INF 10000000

#define MAX(x, y) (((x) > (y)) ? (x) : (y))
#define MIN(x, y) (((x) < (y)) ? (x) : (y))

int n, m;
int adjMatrix [MAXN][MAXN];
int qq [MAXN];
int res [MAXN];


struct Node {
   int data;
   struct Node* next;
};

struct Node* front = NULL;
struct Node* rear = NULL;

void Enqueue(int x) {
   struct Node* temp =
      (struct Node*)malloc(sizeof(struct Node));
   temp->data =x;
   temp->next = NULL;
   if(front == NULL && rear == NULL){
      front = rear = temp;
      return;
   }
   rear->next = temp;
   rear = temp;
}

void Dequeue() {
   struct Node* temp = front;
   if(front == NULL) {
      return;
   }
   if(front == rear) {
      front = rear = NULL;
   }
   else {
      front = front->next;
   }
   free(temp);
}

int Front() {
   if(front == NULL) {
      return 0;
   }
   return front->data;
}

void reset(){
    front = NULL;
    rear  = NULL;
    return;
}

int dist [MAXN];
void bfs(int src){
    int u, i;
    reset();

    for(i=0;i<MAXN;i++){
        dist[i] = INF;
    }

    dist[src] = 0;

    Enqueue(src);

    while(front != NULL){
        u = Front();

        Dequeue();

        for(i = 1; i <= n;i++){
            if(dist[i] > dist[u] + adjMatrix[u][i]){
                dist[i] = dist[u] + adjMatrix[u][i];
                Enqueue(i);
            }
        }
    }
    return;
}

int main(){

    int u, v, w, q, d, i;

    for(u=0;u<MAXN;u++){
        for(v=0;v<MAXN;v++){
            adjMatrix[u][v] = INF;
        }
    }

    scanf("%d %d", &n, &m);


    for(i=0;i<m;i++){
        scanf("%d %d %d", &u, &v, &w);
        adjMatrix[u][v] = w;
    }

    scanf("%d %d", &d, &q);
    for(i=0;i<q;i++){
        scanf("%d", &qq[i]);
    }

    for(i=0;i<q;i++){
        bfs(qq[i]);
        res[i] = dist[d];
    }

    for(i=0;i<q;i++){
        if(res[i] == INF){
            printf("Impossible\n");
        }else{
            printf("%d\n",res[i]);
        }
    }
    return 0;
}

