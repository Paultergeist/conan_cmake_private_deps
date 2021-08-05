#pragma once

#ifdef WIN32
  #define libTest_EXPORT __declspec(dllexport)
#else
  #define libTest_EXPORT
#endif

libTest_EXPORT void libTest();
