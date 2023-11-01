#include <corecrt_wstdio.h>
#include <objbase.h>
#include <tchar.h>
// https://www.youtube.com/watch?v=M4F6Z4-NAos
#import "../ComSharp/bin/Release/ComSharp.tlb" raw_interfaces_only

using namespace ComSharp;

int main() {
  HRESULT hr = CoInitialize(nullptr);

  ICalculatorPtr pIcalc(__uuidof(CCalculator));

  long lResult{0};

  pIcalc->Add(1, 2, &lResult);

  wprintf(L"the result is %d\n", lResult);

  CoUninitialize();

  return 0;
}
