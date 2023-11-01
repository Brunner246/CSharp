#include <corecrt_wstdio.h>
#include <objbase.h>
#include <tchar.h>
#include <format>
#include "CwAPI3D.h"

// https://www.youtube.com/watch?v=M4F6Z4-NAos
#import "../ComSharp/bin/Release/ComSharp.tlb" raw_interfaces_only

CWAPI3D_PLUGIN bool plugin_x64_init(CwAPI3D::ControllerFactory* aFactory);

using namespace ComSharp;

bool plugin_x64_init(CwAPI3D::ControllerFactory* aFactory) {
  if (!aFactory) {
    return EXIT_FAILURE;
  }
  aFactory->getUtilityController()->printToConsole(L"Hello World Plugin");

  HRESULT hr = CoInitialize(nullptr);

  ICalculatorPtr pIcalc(__uuidof(CCalculator));

  long lResult{0};

  pIcalc->Add(1, 2, &lResult);

  wprintf(L"the result is %d\n", lResult);

  auto lFormatted = std::format(L"Result is {}", lResult);

  aFactory->getUtilityController()->printToConsole(lFormatted.data());

  CoUninitialize();

  return EXIT_SUCCESS;
}
