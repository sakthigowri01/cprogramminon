#include<stdio.h>
#include<string.h>

int main(void)
{	
	int t=0,n,m,i;
	char rom[9];
	scanf("%s",rom);
	m=strlen(rom);
	for(i=0;i<m;i++)
	{
	switch (rom[i])
      {
     case 'I':  
            rom[i] = 1;
            break;
     case 'V': 
            rom[i] = 5;
            break;
     case 'X': 
            rom[i] = 10;
            break;
     case 'L': 
            rom[i] = 50;
            break;
     case 'C':  
            rom[i] = 100;
            break;
     case 'D': 
            rom[i] =  500;
            break;
	 }
}

		t=n+t;
}
printf("%d",t);
return 0;
}
© 2018 GitHub, Inc.
