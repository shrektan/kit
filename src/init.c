#include "kit.h"

static const R_CallMethodDef CallEntries[] = {
  {"CcountNAR",    (DL_FUNC) &countNAR,    -1},
  {"CcountOccurR", (DL_FUNC) &countOccurR, -1},
  {"CcountR",      (DL_FUNC) &countR,      -1},
  {"CdupR",        (DL_FUNC) &dupR,        -1},
  {"CfposR",       (DL_FUNC) &fposR,       -1},
  {"CiifR",        (DL_FUNC) &iifR,        -1},
  {"CnifR",        (DL_FUNC) &nifR,        -1},
  {"CompEnabledR", (DL_FUNC) &ompEnabledR, -1},
  {"CpanyR",       (DL_FUNC) &panyR,       -1},
  {"CpallR",       (DL_FUNC) &pallR,       -1},
  {"CpcountR",     (DL_FUNC) &pcountR,     -1},
  {"CpmeanR",      (DL_FUNC) &pmeanR,      -1},
  {"CpprodR",      (DL_FUNC) &pprodR,      -1},
  {"CpsumR",       (DL_FUNC) &psumR,       -1},
  {"CsetlevelsR",  (DL_FUNC) &setlevelsR,  -1},
  {"CtopnR",       (DL_FUNC) &topnR,       -1},
  {"CvswitchR",    (DL_FUNC) &vswitchR,    -1},
  {NULL,           NULL,                   -1}
};

void R_init_kit(DllInfo *dll) {
  R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
  R_useDynamicSymbols(dll, FALSE);
  R_RegisterCCallable("kit", "CcountNAR",    (DL_FUNC) &countNAR);
  R_RegisterCCallable("kit", "CcountOccurR", (DL_FUNC) &countOccurR);
  R_RegisterCCallable("kit", "CcountR",      (DL_FUNC) &countR);
  R_RegisterCCallable("kit", "CdupR",        (DL_FUNC) &dupR);
  R_RegisterCCallable("kit", "CfposR",       (DL_FUNC) &fposR);
  R_RegisterCCallable("kit", "CiifR",        (DL_FUNC) &iifR);
  R_RegisterCCallable("kit", "CnifR",        (DL_FUNC) &nifR);
  R_RegisterCCallable("kit", "CpanyR",       (DL_FUNC) &panyR);
  R_RegisterCCallable("kit", "CpallR",       (DL_FUNC) &pallR);
  R_RegisterCCallable("kit", "CpcountR",     (DL_FUNC) &pcountR);
  R_RegisterCCallable("kit", "CpmeanR",      (DL_FUNC) &pmeanR);
  R_RegisterCCallable("kit", "CpprodR",      (DL_FUNC) &pprodR);
  R_RegisterCCallable("kit", "CpsumR",       (DL_FUNC) &psumR);
  R_RegisterCCallable("kit", "CsetlevelsR",  (DL_FUNC) &setlevelsR);
  R_RegisterCCallable("kit", "CtopnR",       (DL_FUNC) &topnR);
  R_RegisterCCallable("kit", "CvswitchR",    (DL_FUNC) &vswitchR);
}
