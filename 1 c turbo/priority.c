#include<stdio.h>
#include<conio.h>
#include<string.h>
void main(){
char s[21][21],chng[20];
int wt[21],a[21],n,i,j,temp,trn[21],p[21];
float tot,t;
printf("Enter the no.of process");
scanf("%d",&n);
for(i=1;i<=n;i++){
printf("Enter process id and time and priority");
scanf("%s%d%d",&s[i],&a[i],&p[i]);}
wt[0]=0;
a[0]=0;
t=tot=0;
for(i=1;i<=n;i++){
for(j=i+1;j<=n;j++){
if(p[i]>p[j]){
temp=a[i];
a[i]=a[j];
a[j]=temp;
temp=p[i];
p[i]=p[j];
p[j]=temp;
strcpy(chng,s[i]);
strcpy(s[i],s[j]);
strcpy(s[j],chng);}}}
printf(" \n process\t burst time\t waiting time\t turn around time\t priority");
for(i=1;i<=n;i++){
wt[i]=wt[i-1]+a[i-1];
trn[i]=wt[i]+a[i];
printf("%s\t%d\t%d\t%d\t%d\n",s[i],a[i],wt[i],trn[i],p[i]);
tot=tot+wt[i];
t=t+trn[i];}
printf("Average waiting time=%f Average turn around time=%f",(tot/n),(t/n));
getch();
}


//OUTPUT:
//Enter no of processes:2
//Enter the process is and time and priority :
//34
//65
//26
//Enter the process is and time and priority :
//3
//55
//87
//Process Burst time Waiting time Turnaround time Priority
//34 65 0 65 26
//3 55 65 120 87
//Average waiting time=032.500000 Average turnaround time=092.500000