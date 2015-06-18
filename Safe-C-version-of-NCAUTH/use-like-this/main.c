// Safe C version of NCAUTH
// use like this:
// nc.exe -L -p 9999 -e ncauth.exe

#include <stdio.h>
#include <stdlib.h>

#define PASSWORD "test"

int main(){
	char myPwd[20];
	unsigned int i;
	fgets(myPwd,sizeof(myPwd),stdin);
	for (i = 0; i < strlen(myPwd); i++) if (myPwd[i]=='\r'||myPwd[i]=='\n') myPwd[i]='\0';
	if( strcmp(myPwd,PASSWORD) == 0 )
	{
  system("cmd.exe");
	}
	return 0;
}
