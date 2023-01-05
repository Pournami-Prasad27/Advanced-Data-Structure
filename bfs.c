#include<stdio.h>
int n,V[50],E[50][50],queue[50],visited[50],rear=-1,front=-1,x;
void enqueue(int x)
{
    
    if(front==-1)
    {
        front=0;
        rear++;
        queue[rear]=x;
        visited[x]=1;
    }
    int dequeue(void)
    {
        int item=queue[front];
        if(front==rear)
        {
            front=-1;
            rear=-1;
        }
        else
        front++;
        return item;
    }
    void BFS()
    {
        int u,i,v,j;
        enqueue(0 );
        while(front!=-1)
        {
            u=dequeue();
            printf("Traversed:%d\n",V[u]);
            for(i=0;i<n;i++)
            {
                if(E[u][i]==1)
                {
                    v=i;
                    if(visited[v]==0)
                    enqueue(v);
                    
                }
            }
        }
    }
void main()
{
    int i,j,k=1,u,v,m;
        printf("Enter the number of verticies");
         scanf("%d",&n);
         printf("Enter the vertices");
      for(i=0;i<n;i++)
      {
          scanf("%d",&V[i]);
          visited[i]=0;
          
      } for(i=0;i<n;i++)
        for(j=0;j<n;j++)
        
            E[i][j]=0;
            
            while(k<=m)
            {
                printf("\nEnter the number of edges%d",k);
            scanf("%d%d",&u,&v);
            }
            for(i=0;i<n;i++)
            {    
              if(u==V[i])
              {
                u=i;
                break;
                
              }
            }
        
      for(i=0;i<n;i++)
      {
          if(v=V[i])
          {
              v=i;
            break;
          }
      }
        
     E[u][v]=1;
     k++;
        }
        BFS();
}
        
