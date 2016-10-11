// SYOS3264.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <stdlib.h>
#include "OSTool.h"

int _tmain(int argc, _TCHAR* argv[])
{
	OSTool *tool = new OSTool();

	if(tool->IsWow64()){
		printf("The process is running under WOW64.\n");
		OutputDebugString(TEXT("The process is running under WOW64.\n"));
	}else{
		printf("The process is running under 32");
		OutputDebugString(TEXT("The process is not running under WOW64.\n"));
	}
	system("PAUSE");
	return 0;
}

