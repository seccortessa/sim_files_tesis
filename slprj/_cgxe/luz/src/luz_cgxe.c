/* Include files */

#include "luz_cgxe.h"
#include "m_FPKYdNYIaiwC3mh1bljkAC.h"
#include "m_LexgXzvW4awE3AingrVslE.h"
#include "m_xLSMGo308gsNYxZ9iJD4lD.h"
#include "m_IheNiz2oT8pqVxUC67lKjH.h"

unsigned int cgxe_luz_method_dispatcher(SimStruct* S, int_T method, void* data)
{
  if (ssGetChecksum0(S) == 1244104504 &&
      ssGetChecksum1(S) == 2144726332 &&
      ssGetChecksum2(S) == 862778719 &&
      ssGetChecksum3(S) == 3285090977) {
    method_dispatcher_FPKYdNYIaiwC3mh1bljkAC(S, method, data);
    return 1;
  }

  if (ssGetChecksum0(S) == 2109646900 &&
      ssGetChecksum1(S) == 1390931117 &&
      ssGetChecksum2(S) == 2635663638 &&
      ssGetChecksum3(S) == 1565601499) {
    method_dispatcher_LexgXzvW4awE3AingrVslE(S, method, data);
    return 1;
  }

  if (ssGetChecksum0(S) == 3269569108 &&
      ssGetChecksum1(S) == 2664535304 &&
      ssGetChecksum2(S) == 3304211789 &&
      ssGetChecksum3(S) == 2379486146) {
    method_dispatcher_xLSMGo308gsNYxZ9iJD4lD(S, method, data);
    return 1;
  }

  if (ssGetChecksum0(S) == 3694724054 &&
      ssGetChecksum1(S) == 1825400153 &&
      ssGetChecksum2(S) == 1226100372 &&
      ssGetChecksum3(S) == 2724021660) {
    method_dispatcher_IheNiz2oT8pqVxUC67lKjH(S, method, data);
    return 1;
  }

  return 0;
}
