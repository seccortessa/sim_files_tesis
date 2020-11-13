/* Include files */

#include "art_prs_cgxe.h"
#include "m_hfTj1mRP0WOjF30ZiYFcwF.h"
#include "m_JqDKJJbT3XYvdHde3ELsYB.h"
#include "m_EXjWXzdNbMLBy0VqWnKjsC.h"

unsigned int cgxe_art_prs_method_dispatcher(SimStruct* S, int_T method, void
  * data)
{
  if (ssGetChecksum0(S) == 667078778 &&
      ssGetChecksum1(S) == 2787647042 &&
      ssGetChecksum2(S) == 2561808601 &&
      ssGetChecksum3(S) == 1563247276) {
    method_dispatcher_hfTj1mRP0WOjF30ZiYFcwF(S, method, data);
    return 1;
  }

  if (ssGetChecksum0(S) == 858330306 &&
      ssGetChecksum1(S) == 2896240995 &&
      ssGetChecksum2(S) == 226860064 &&
      ssGetChecksum3(S) == 2303337564) {
    method_dispatcher_JqDKJJbT3XYvdHde3ELsYB(S, method, data);
    return 1;
  }

  if (ssGetChecksum0(S) == 1507825860 &&
      ssGetChecksum1(S) == 1458120355 &&
      ssGetChecksum2(S) == 2014427855 &&
      ssGetChecksum3(S) == 385488213) {
    method_dispatcher_EXjWXzdNbMLBy0VqWnKjsC(S, method, data);
    return 1;
  }

  return 0;
}
