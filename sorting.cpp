Program:
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter no.of employees:";
    cin>>n;
    float salaries[n];
    cout<<"Enter salaries\n";
    for(int i=0;i<n;i++)    
    {
        cin>>salaries[i];
    }
    int choice;
    cout<<"\nChoose sorting algorithm:\n;";
    cout<<"1.Selection Sort\n";
    cout<<"2.Bubble sort:\n";
    cout<<"Enter choice";
    cin>>choice;
    switch(choice)
    {
        case 1:
       for(int i=0;i<n-1;i++)
       {
           int min=i;
           for(int j=i+1;j<n;j++)
           {
               if(salaries[j]<salaries[min])
               {
                   min=j;
               }
           }
           float temp=salaries[i];
           salaries[i]=salaries[min];
           salaries[min]=temp;
       }
       cout<<"\n Salaries sorted using Selection sort:\n";
       break; 
       case 2:
       for(int i=0;i<n-1;i++)
       {
       for(int j=0;j<n-i-1;j++)
        {
        if(salaries[j]>salaries[j+1])
         {
            float temp=salaries[j];
            salaries[j]=salaries[j+1];
            salaries[j+1]=temp;
         }
        }
    }
   cout<<"\nSalaries sorted using bubble sort\n";
   break;
   default:
   cout<<"invalid choice\n";
   return 0;
}
for(int i=0;i<n;i++)
{
    cout<<salaries[i]<<" ";
}
cout<<"\nTop 5 salaries:";
int count=0;
for(int i=n-1;i>=0&&count<5;i--)
{
cout<<salaries[i]<<" ";
count ++;
}
}
