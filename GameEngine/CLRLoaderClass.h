#pragma once
#include <iostream>
#include <metahost.h>
#pragma comment(lib, "mscoree.lib")
class CLRLoaderClass
{
private:
	static ICLRMetaHost* MetaHost;
	static ICLRRuntimeInfo* runtimeinformation ;
	static ICLRRuntimeHost* runtimehost;
	


public :
	static ICLRRuntimeHost * RunCLRRuntimeHost();
	static LPCWSTR RuntimeName;
	static void CleanUP();
};

