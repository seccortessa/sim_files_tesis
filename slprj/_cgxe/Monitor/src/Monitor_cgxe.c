/* Include files */

#include "Monitor_cgxe.h"
#include "m_K9AeZupfj9lCdYMneE92cD.h"
#include "m_5dVl3FakxCN1YJKSKTmBHC.h"
#include "m_Yb0k5tbWJqIIl1OG9iLeqB.h"
#include "m_IcFkfYoWKJmT8lCKw5pH7G.h"
#include "m_glBEXo6Iuys41qDJRNMLSB.h"
#include "m_wKg1jm3DWO1psEO2Fu8B3B.h"
#include "m_9ispRWRowcT7MDgt3HGJHD.h"
#include "m_b79xXLEMXEdbFJyYWqzLE.h"
#include "m_sp7vbxTFSrwaInV5uegPKG.h"

unsigned int cgxe_Monitor_method_dispatcher(SimStruct* S, int_T method, void
  * data)
{
  if (ssGetChecksum0(S) == 621225985 &&
      ssGetChecksum1(S) == 1061948810 &&
      ssGetChecksum2(S) == 826504553 &&
      ssGetChecksum3(S) == 3296943317) {
    method_dispatcher_K9AeZupfj9lCdYMneE92cD(S, method, data);
    return 1;
  }

  if (ssGetChecksum0(S) == 1379581886 &&
      ssGetChecksum1(S) == 2276166546 &&
      ssGetChecksum2(S) == 3591426827 &&
      ssGetChecksum3(S) == 2751361619) {
    method_dispatcher_5dVl3FakxCN1YJKSKTmBHC(S, method, data);
    return 1;
  }

  if (ssGetChecksum0(S) == 1460102360 &&
      ssGetChecksum1(S) == 3941278400 &&
      ssGetChecksum2(S) == 116280974 &&
      ssGetChecksum3(S) == 3758872328) {
    method_dispatcher_Yb0k5tbWJqIIl1OG9iLeqB(S, method, data);
    return 1;
  }

  if (ssGetChecksum0(S) == 1520658199 &&
      ssGetChecksum1(S) == 2029980332 &&
      ssGetChecksum2(S) == 3772254907 &&
      ssGetChecksum3(S) == 687082909) {
    method_dispatcher_IcFkfYoWKJmT8lCKw5pH7G(S, method, data);
    return 1;
  }

  if (ssGetChecksum0(S) == 2084841521 &&
      ssGetChecksum1(S) == 2246391394 &&
      ssGetChecksum2(S) == 64461646 &&
      ssGetChecksum3(S) == 3459181091) {
    method_dispatcher_glBEXo6Iuys41qDJRNMLSB(S, method, data);
    return 1;
  }

  if (ssGetChecksum0(S) == 2257992740 &&
      ssGetChecksum1(S) == 3931547584 &&
      ssGetChecksum2(S) == 2518194964 &&
      ssGetChecksum3(S) == 1027247333) {
    method_dispatcher_wKg1jm3DWO1psEO2Fu8B3B(S, method, data);
    return 1;
  }

  if (ssGetChecksum0(S) == 2493652564 &&
      ssGetChecksum1(S) == 4097180329 &&
      ssGetChecksum2(S) == 939847702 &&
      ssGetChecksum3(S) == 1962851430) {
    method_dispatcher_9ispRWRowcT7MDgt3HGJHD(S, method, data);
    return 1;
  }

  if (ssGetChecksum0(S) == 3211765965 &&
      ssGetChecksum1(S) == 3513815450 &&
      ssGetChecksum2(S) == 1984844434 &&
      ssGetChecksum3(S) == 3564374023) {
    method_dispatcher_b79xXLEMXEdbFJyYWqzLE(S, method, data);
    return 1;
  }

  if (ssGetChecksum0(S) == 3713649402 &&
      ssGetChecksum1(S) == 1002324211 &&
      ssGetChecksum2(S) == 2582518620 &&
      ssGetChecksum3(S) == 2435619151) {
    method_dispatcher_sp7vbxTFSrwaInV5uegPKG(S, method, data);
    return 1;
  }

  return 0;
}
