

#include <iostream>
#include "CLRLoaderClass.h"
#include "GameEngineClass.h"

int main()
{
    CLRLoaderClass::RuntimeName = L"v4.0.30319";
    DWORD ret;
    if (CLRLoaderClass::RunCLRRuntimeHost()->Start() == S_OK) {
        std::cout << "C++ : CLR Running..." << std::endl;
        
        HRESULT hr = CLRLoaderClass::RunCLRRuntimeHost()->ExecuteInDefaultAppDomain(L"ScriptDLL.dll",L"ScriptDLL.Script",L"runScript",L"", &ret);
        if (ret == 0) {
            
            
            for (std::map<int, GameObject*>::iterator it = GameEngineClass::GameObjects.begin(); it != GameEngineClass::GameObjects.end(); ++it) {
                
                std::cout << "Key: " << it->first << std::endl;
               
                std::cout << "Value: " << it->second << std::endl;
               
                

            }
        }
          
    }
    
    CLRLoaderClass::CleanUP();
   
}

