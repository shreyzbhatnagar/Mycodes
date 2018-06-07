#include<iostream>
#include<string.h>

using namespace std;

int compare(char s[][11],char *temp,int R);

int main()
{

	char temp[11],required[11];
	int N,Q,size,i,flag,R,a;

	cin>>N;

	char S[N][11],s[N][11];

	for(i=0;i<N;i++)
		cin>>S[i];

	cin>>Q;


	for (i=0;i<Q;i++)
	{
		cin>>R>>temp;


		for(i=0;i<N;i++)
				strcpy(s[i],S[i]);

		size=compare(s,temp,R);
		cout<<size;
		
		while(flag)
		{
			a=122;	
		for (i=0;i<R;i++)        
        {
        	
        		if(strlen(S[i])==size)
        		{
        			strcpy(required,S[i]);
        			flag=0;
        			break;
        		}	
        		else if(strlen(S[i])>size)
        		{	
        			if((int)S[i][size+1]<=a);
        			{	
        				size++;
        				a=(int)S[i][size+1];


        			}	
        		}			
        	


        }
        }
        cout<<required<<"\n";



	}

}

int compare(char s[][11],char *temp,int R)
{
	int n,i,j,tsize,size;

	for(i=0;i<R;i++)
	{
		n=strlen(temp);

		for(j=0;j<n;j++)
		{
			if(s[i][j]==temp[j])
				tsize++;
			else
				break;		
		}

		if(tsize>size)
			size=tsize;

	}	
	return size;

}