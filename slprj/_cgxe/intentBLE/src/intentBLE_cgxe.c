/* Include files */

#include "intentBLE_cgxe.h"
#include "m_RHDQrIaXNsZ5JtX4Xo2HNF.h"
#include "m_4ClEw6806SuJn5C0rqNRoD.h"
#include "m_2GvInKXxGDWd0XSPaKJUhC.h"
#include "m_Ot94l1wQvH6zQZ8qvHVS5G.h"
#include "m_o0P6MdIe6y5bpuoGxo1aVB.h"
#include "m_C75W88Xu8Lfy30u4v8RD7.h"
#include "m_uCvIkcwQXT8LoN3BG5L33F.h"
#include "m_rJ8Y9sM29Y3NFSNLo6mHDF.h"
#include "m_tBvFYVguqurYjzEugxBzXE.h"
#include "m_KxjqfxsxlDXaqFcDm9YWYD.h"
#include "m_MEyKfWKBqc5ZHNBdTH37FG.h"

unsigned int cgxe_intentBLE_method_dispatcher(SimStruct* S, int_T method, void
  * data)
{
  if (ssGetChecksum0(S) == 21182351 &&
      ssGetChecksum1(S) == 4224131639 &&
      ssGetChecksum2(S) == 2494754714 &&
      ssGetChecksum3(S) == 1127174284) {
    method_dispatcher_RHDQrIaXNsZ5JtX4Xo2HNF(S, method, data);
    return 1;
  }

  if (ssGetChecksum0(S) == 98167412 &&
      ssGetChecksum1(S) == 3855911010 &&
      ssGetChecksum2(S) == 3725726716 &&
      ssGetChecksum3(S) == 3337337045) {
    method_dispatcher_4ClEw6806SuJn5C0rqNRoD(S, method, data);
    return 1;
  }

  if (ssGetChecksum0(S) == 1804280800 &&
      ssGetChecksum1(S) == 4293408378 &&
      ssGetChecksum2(S) == 2893196117 &&
      ssGetChecksum3(S) == 1818558887) {
    method_dispatcher_2GvInKXxGDWd0XSPaKJUhC(S, method, data);
    return 1;
  }

  if (ssGetChecksum0(S) == 2345969172 &&
      ssGetChecksum1(S) == 2020870106 &&
      ssGetChecksum2(S) == 3201221456 &&
      ssGetChecksum3(S) == 4108175355) {
    method_dispatcher_Ot94l1wQvH6zQZ8qvHVS5G(S, method, data);
    return 1;
  }

  if (ssGetChecksum0(S) == 2653426053 &&
      ssGetChecksum1(S) == 851106686 &&
      ssGetChecksum2(S) == 3578638948 &&
      ssGetChecksum3(S) == 4035736329) {
    method_dispatcher_o0P6MdIe6y5bpuoGxo1aVB(S, method, data);
    return 1;
  }

  if (ssGetChecksum0(S) == 3001052545 &&
      ssGetChecksum1(S) == 1615218595 &&
      ssGetChecksum2(S) == 182290380 &&
      ssGetChecksum3(S) == 2336078263) {
    method_dispatcher_C75W88Xu8Lfy30u4v8RD7(S, method, data);
    return 1;
  }

  if (ssGetChecksum0(S) == 3103179904 &&
      ssGetChecksum1(S) == 812568035 &&
      ssGetChecksum2(S) == 1479877289 &&
      ssGetChecksum3(S) == 2098394393) {
    method_dispatcher_uCvIkcwQXT8LoN3BG5L33F(S, method, data);
    return 1;
  }

  if (ssGetChecksum0(S) == 3216419958 &&
      ssGetChecksum1(S) == 1398672350 &&
      ssGetChecksum2(S) == 4222761488 &&
      ssGetChecksum3(S) == 3818779213) {
    method_dispatcher_rJ8Y9sM29Y3NFSNLo6mHDF(S, method, data);
    return 1;
  }

  if (ssGetChecksum0(S) == 3432877810 &&
      ssGetChecksum1(S) == 1626063651 &&
      ssGetChecksum2(S) == 4268044167 &&
      ssGetChecksum3(S) == 862389229) {
    method_dispatcher_tBvFYVguqurYjzEugxBzXE(S, method, data);
    return 1;
  }

  if (ssGetChecksum0(S) == 4174220872 &&
      ssGetChecksum1(S) == 1704265623 &&
      ssGetChecksum2(S) == 1892784842 &&
      ssGetChecksum3(S) == 3190598223) {
    method_dispatcher_KxjqfxsxlDXaqFcDm9YWYD(S, method, data);
    return 1;
  }

  if (ssGetChecksum0(S) == 4222645197 &&
      ssGetChecksum1(S) == 2639138121 &&
      ssGetChecksum2(S) == 2420096978 &&
      ssGetChecksum3(S) == 2840022155) {
    method_dispatcher_MEyKfWKBqc5ZHNBdTH37FG(S, method, data);
    return 1;
  }

  return 0;
}
