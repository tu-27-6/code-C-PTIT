#include<iostream>
#include <cstring>
#include<stdlib.h>
using namespace std;

int main()
{
	string str;
	getline(cin, str);

	char a[1000];
	for (int i=0; i<str.size(); i++) {
		a[i]=str[i];
	}
	
	char *c, b[1000];
	
	strlwr(a);
	
	for(int i=strlen(a)-1; i>=0; i--)
	if(a[i]==' ')
	{
    	strcpy(b, &a[i+1]);
    	break;
    }   
	c=strtok(a, " ");
	while(c!=NULL)
	{
		if(strcmp(c, b))
		{
			c[0]-=32;
			cout<<" "<<c;
		}
		c=strtok(NULL, " ");	
	}	
	
	strupr(b);
	cout<<","<<b;
	
	return 0;
}

