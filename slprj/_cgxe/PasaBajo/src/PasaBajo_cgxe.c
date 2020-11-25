/* Include files */

#include "PasaBajo_cgxe.h"
#include "m_EJpCq5AUeP8eaQkX3UWWAG.h"

unsigned int cgxe_PasaBajo_method_dispatcher(SimStruct* S, int_T method, void
  * data)
{
  if (ssGetChecksum0(S) == 4208348208 &&
      ssGetChecksum1(S) == 3911794172 &&
      ssGetChecksum2(S) == 3324043943 &&
      ssGetChecksum3(S) == 2179588566) {
    method_dispatcher_EJpCq5AUeP8eaQkX3UWWAG(S, method, data);
    return 1;
  }

  return 0;
}
