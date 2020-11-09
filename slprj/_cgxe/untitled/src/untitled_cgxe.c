/* Include files */

#include "untitled_cgxe.h"
#include "m_FPKYdNYIaiwC3mh1bljkAC.h"
#include "m_cFi6aGvldjMdOzfBt0687D.h"

unsigned int cgxe_untitled_method_dispatcher(SimStruct* S, int_T method, void
  * data)
{
  if (ssGetChecksum0(S) == 1244104504 &&
      ssGetChecksum1(S) == 2144726332 &&
      ssGetChecksum2(S) == 862778719 &&
      ssGetChecksum3(S) == 3285090977) {
    method_dispatcher_FPKYdNYIaiwC3mh1bljkAC(S, method, data);
    return 1;
  }

  if (ssGetChecksum0(S) == 1904445267 &&
      ssGetChecksum1(S) == 1020220317 &&
      ssGetChecksum2(S) == 2618419846 &&
      ssGetChecksum3(S) == 2461449247) {
    method_dispatcher_cFi6aGvldjMdOzfBt0687D(S, method, data);
    return 1;
  }

  return 0;
}
