#include<stdio.h>
#include<conio.h>
#define MAX 100

void display(int matrix[MAX][MAX], int n);
int adj[MAX][MAX];
int n;
void create_graph();

void main()
{
	int i,j,k;
	int P[MAX][MAX];
	clrscr();
	create_graph();
	printf("\n\t\tThe adjacency matrix is :\n");
	display(adj,n);

	for(i=0; i<n; i++)
	   for(j=0; j<n; j++)
		 P[i][j] = adj[i][j];

	for(k=0; k<n; k++)
	{
		for(i=0; i<n; i++)
		  for(j=0; j<n; j++)
		      P[i][j] = ( P[i][j] || ( P[i][k] && P[k][j] ) );
		printf("\n\t\tP%d is :\n",k+1);
		display(P,n);
	}
	printf("\n\t\tP%d is the path matrix of the given graph\n",k) ;
	getch();

}

void display(int matrix[MAX][MAX],int n)
{
	int i,j;
	for(i=0; i<n; i++)
	{printf("\t\t");
		for(j=0; j<n; j++)

			printf("%3d",matrix[i][j]);
		printf("\n");
	}
}

void create_graph()
{
	int i,max_edges,origin,destin;
	printf("\t\t\t\tWARSHALL ALGORITHM");
	printf("\n\t\tEnter number of vertices : ");
	scanf("%d",&n);

	max_edges = n*(n-1);

	for( i=1; i<=max_edges; i++ )
	{
		printf("\n\t\tEnter edge %d( -1 -1 ) to quit : ",i);
		scanf("%d %d",&origin,&destin);
		if((origin == -1) && (destin == -1))
			break;
		if( origin >= n || destin >= n || origin<0 || destin<0)
		{
			printf("\n\t\tInvalid edge!\n");
			i--;
		}
		else
			adj[origin][destin] = 1;
	}
}