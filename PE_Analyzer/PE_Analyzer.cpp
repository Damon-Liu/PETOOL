#include "stdafx.h"
#include "PEHeaders.h"
#include "Funcs.h"
#include "manual.h"

int main(int arg,char* argc[])
{
	char dos[20] = { 0 };
	char nt[20] = { 0 };
	char section[20] = { 0 };
	char all[20] = { 0 };
	char view[20] = { 0 };
	strcpy_s(dos, "-dos");
	strcpy_s(nt, "-nt");
	strcpy_s(section,"-section");
	strcpy_s(all, "-all");
	strcpy_s(view, "-view");

	if (argc[1] =='\0' || argc[2] == '\0') {
		manual();
		return 0;
	}
	else if(strcmp(dos,argc[1]) == 0)
	{
		char* filename = (char*)argc[2];
		Header(filename,1);
	}
	else if (strcmp(nt, argc[1]) == 0)
	{
		char* filename = (char*)argc[2];
		Header(filename, 2);
	}
	else if (strcmp(section, argc[1]) == 0)
	{
		char* filename = (char*)argc[2];
		Header(filename, 3);
	}
	else if (strcmp(all, argc[1]) == 0)
	{
		char* filename = (char*)argc[2];
		Header(filename, 1);
		Header(filename, 2);
		Header(filename, 3);
	}
	else if (strcmp(view, argc[1]) == 0)
	{
		char* filename = (char*)argc[2];
		HexDump(filename);
	}
	else {
		manual();
		return 0;
	}
		
	
}

