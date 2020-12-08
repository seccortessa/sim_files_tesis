/* Include files */

#include "intentBLE_cgxe.h"
#include "m_JtvwPTHe6fzHKrpCooAHa.h"
#include "m_zBf55hVxoG5oTnfpEp2jxG.h"
#include "m_azEBpWWOSj2hcradtDhio.h"
#include "m_ziXE5IiVwYxkBv5CkuEA9D.h"

unsigned int cgxe_intentBLE_method_dispatcher(SimStruct* S, int_T method, void
  * data)
{
  if (ssGetChecksum0(S) == 378253369 &&
      ssGetChecksum1(S) == 2426708192 &&
      ssGetChecksum2(S) == 2978665238 &&
      ssGetChecksum3(S) == 2420852965) {
    method_dispatcher_JtvwPTHe6fzHKrpCooAHa(S, method, data);
    return 1;
  }

  if (ssGetChecksum0(S) == 1598730809 &&
      ssGetChecksum1(S) == 3989995462 &&
      ssGetChecksum2(S) == 2144770841 &&
      ssGetChecksum3(S) == 555174895) {
    method_dispatcher_zBf55hVxoG5oTnfpEp2jxG(S, method, data);
    return 1;
  }

  if (ssGetChecksum0(S) == 2806492184 &&
      ssGetChecksum1(S) == 621153619 &&
      ssGetChecksum2(S) == 775362682 &&
      ssGetChecksum3(S) == 1970966458) {
    method_dispatcher_azEBpWWOSj2hcradtDhio(S, method, data);
    return 1;
  }

  if (ssGetChecksum0(S) == 3793101584 &&
      ssGetChecksum1(S) == 2888317727 &&
      ssGetChecksum2(S) == 689480455 &&
      ssGetChecksum3(S) == 2866086312) {
    method_dispatcher_ziXE5IiVwYxkBv5CkuEA9D(S, method, data);
    return 1;
  }

  return 0;
}
