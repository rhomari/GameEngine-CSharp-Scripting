#include "CLRLoaderClass.h"
LPCWSTR CLRLoaderClass::RuntimeName = NULL;
ICLRMetaHost * CLRLoaderClass::MetaHost = NULL;
ICLRRuntimeInfo* CLRLoaderClass::runtimeinformation = NULL;
ICLRRuntimeHost* CLRLoaderClass::runtimehost = NULL;
ICLRRuntimeHost  * CLRLoaderClass::RunCLRRuntimeHost()
{

	
	if (CLRCreateInstance(CLSID_CLRMetaHost, IID_ICLRMetaHost, (LPVOID*)&MetaHost) == S_OK) {
		if (MetaHost->GetRuntime(RuntimeName, IID_ICLRRuntimeInfo, (LPVOID*)&runtimeinformation) == S_OK) {
			if (runtimeinformation->GetInterface(CLSID_CLRRuntimeHost, IID_ICLRRuntimeHost, (LPVOID*)&runtimehost) == S_OK) {
				return runtimehost;
			}
		}
	}
	
	std::cout << "There was an error getting the RuntimeHost" << std::endl;
	return NULL;
    
}
void CLRLoaderClass::CleanUP() {
	MetaHost->Release();
	runtimeinformation->Release();
	runtimehost->Release();
	std::cout << "Cleaning UP..." << std::endl;
}
