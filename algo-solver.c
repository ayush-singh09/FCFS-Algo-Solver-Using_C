#include<stdio.h>
#include<conio.h>
struct data
{
	int
	p,
	at,
	bt,
	tat,
	wt,
	ct;
};
int main()
{
	int n,i,j,count=0;
	float awt=0,atat=0;
	printf("Enter number of process: ");
	scanf("%d",&n);
	system("cls");
	struct data obj[n];
	struct data temp;
	
{//	Taking input of Data
	for(i=0;i<n;i++)
	{
		printf("%d\n\n",i+1);
		printf("P:	");
		scanf("%d",&obj[i].p);
		printf("AT:	");
		scanf("%d",&obj[i].at);
		printf("BT:	");
		scanf("%d",&obj[i].bt);
		printf("\n");
		system("cls");
	}
}

{//	Printing the Table
	printf("Pr	At	BT\n");
	
	for(i=0;i<n;i++)
	{
		printf("%d	%d	%d\n",obj[i].p,obj[i].at,obj[i].bt);
	}
	struct data temp;
	printf("\n");
}	
	
{//	Sorting the process wrt Arrival time
	for(i=0;i<n-1;i++)
	{
		for(j=i+1;j<n;j++)
		{
			
			if(obj[i].at>obj[j].at)
			{
				temp.at=obj[i].at;
				obj[i].at=obj[j].at;
				obj[j].at=temp.at;
				
				temp.bt=obj[i].bt;
				obj[i].bt=obj[j].bt;
				obj[j].bt=temp.bt;
				
				temp.p=obj[i].p;
				obj[i].p=obj[j].p;
				obj[j].p=temp.p;
			}
			else if(obj[i].at==obj[j].at && obj[i].p>obj[j].p)
			{
				temp.at=obj[i].at;
				obj[i].at=obj[j].at;
				obj[j].at=temp.at;
				
				temp.bt=obj[i].bt;
				obj[i].bt=obj[j].bt;
				obj[j].bt=temp.bt;
				
				temp.p=obj[i].p;
				obj[i].p=obj[j].p;
				obj[j].p=temp.p;
			}
		}
	}
}

{//	Calculating Completion Time
	for(i=0;i<n;i++)
	{
		count = count + obj[i].bt;
		obj[i].ct = count;
		obj[i].tat = obj[i].ct - obj[i].at;
		obj[i].wt = obj[i].tat - obj[i].bt;
	}
}

{// Gantt chart
	for(i=0;i<n;i++)
	{
		printf("________");
	}
	printf("\n");
	for(i=0;i<n;i++)
	{
		printf("| P%d\t",obj[i].p);
	}
	printf("|");
	printf("\n");
	for(i=0;i<n;i++)
	{
		printf("|_______");
	}
	printf("|\n0\t");
	for(i=0;i<n;i++)
	{
		printf("%d\t",obj[i].ct);
	}
	printf("\n\n");
}
	
{//	Again Sorting the process wrt Process Number
	for(i=0;i<n-1;i++)
	{
		for(j=i+1;j<n;j++)
		{
			
			if(obj[i].p>obj[j].p)
			{
				temp.at=obj[i].at;
				obj[i].at=obj[j].at;
				obj[j].at=temp.at;
				
				temp.bt=obj[i].bt;
				obj[i].bt=obj[j].bt;
				obj[j].bt=temp.bt;
				
				temp.p=obj[i].p;
				obj[i].p=obj[j].p;
				obj[j].p=temp.p;
				
				temp.ct=obj[i].ct;
				obj[i].ct=obj[j].ct;
				obj[j].ct=temp.ct;
				
				temp.wt=obj[i].wt;
				obj[i].wt=obj[j].wt;
				obj[j].wt=temp.wt;
				
				temp.tat=obj[i].tat;
				obj[i].tat=obj[j].tat;
				obj[j].tat=temp.tat;
			}
		}
	}
}

{//	Printing the Table
	printf("Pr	At	BT	CT	WT	TAT\n");
	
	for(i=0;i<n;i++)
	{
		printf("%d	%d	%d	%d	%d	%d\n",obj[i].p,obj[i].at,obj[i].bt,obj[i].ct,obj[i].tat,obj[i].wt);
	}
	struct data temp;
	printf("\n");
}	
	
{// Finding the average Waiting time
	
	for(i=0;i<n;i++)
	{
		atat=atat+obj[i].tat;
	}
	atat=atat/n;
	printf("\nAverage Turn around time = %.2f",atat);
	
	for(i=0;i<n;i++)
	{
		awt=awt+obj[i].wt;
	}
	awt=awt/n;
	printf("\n\nAverage waiting time = %.2f\n\n\n",awt);
}


}
