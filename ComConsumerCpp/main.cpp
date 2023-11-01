#include <corecrt_wstdio.h>
#include <objbase.h>
#include <tchar.h>

#import "../ComSharp/bin/Release/ComSharp.tlb" raw_interfaces_only

using namespace ComSharp;

int _tmain(int argc, _TCHAR* argv[]) {
  HRESULT hr = CoInitialize(NULL);

  ICalculatorPtr pIcalc(__uuidof(CCalculator));

  long lResult{0};

  pIcalc->Add(1, 2, &lResult);

  wprintf(L"the result is %d\n", lResult);

  CoUninitialize();

  return 0;
}
