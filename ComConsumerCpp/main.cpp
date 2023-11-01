#include <corecrt_wstdio.h>
#include <objbase.h>

#import "../ComSharp/bin/Release/ComSharp.tlb" named_guids

int main() {
  CoInitialize(nullptr);

  // Create an instance of the C# COM object
  CSharp::IHelloWorldInterfacePtr pHelloWorld(
      __uuidof(CSharp::HelloWorldClass));

  // Access the method in the C# COM object
  BSTR bstrGreeting;
  pHelloWorld->GetGreeting(&bstrGreeting);

  wprintf(L"%s\n", bstrGreeting);

  // Free the BSTR
  SysFreeString(bstrGreeting);

  CoUninitialize();

  return 0;
}
