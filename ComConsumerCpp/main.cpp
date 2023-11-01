#include <corecrt_wstdio.h>
#include <objbase.h>

#import "../ComSharp/bin/Release/ComSharp.tlb" named_guids

int main() {
  CoInitialize(nullptr);

  CSharp::IHelloWorldInterfacePtr pHelloWorld(
      __uuidof(CSharp::HelloWorldClass));

  BSTR bstrGreeting;
  pHelloWorld->GetGreeting(&bstrGreeting);

  wprintf(L"%s\n", bstrGreeting);

  SysFreeString(bstrGreeting);

  CoUninitialize();

  return 0;
}
