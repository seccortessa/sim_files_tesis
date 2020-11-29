/* Include files */

#include "intentBLE_cgxe.h"
#include "m_dJ4YM46kKnpUfxxQH6dtXE.h"
#include "m_D5hUAv1FSKEiOVVgOUx7lH.h"
#include "m_iOoY8TrkNJf30SdaXtCZNG.h"
#include "m_cjmwW9EpMQg0K6b1o0DXNH.h"
#include "m_2GvInKXxGDWd0XSPaKJUhC.h"
#include "m_o0P6MdIe6y5bpuoGxo1aVB.h"
#include "m_uCvIkcwQXT8LoN3BG5L33F.h"
#include "m_tBvFYVguqurYjzEugxBzXE.h"
#include "m_A2JuLCNyadrWVSG5JjTEC.h"
#include "m_MEyKfWKBqc5ZHNBdTH37FG.h"

unsigned int cgxe_intentBLE_method_dispatcher(SimStruct* S, int_T method, void
  * data)
{
  if (ssGetChecksum0(S) == 63401775 &&
      ssGetChecksum1(S) == 755741899 &&
      ssGetChecksum2(S) == 1918999570 &&
      ssGetChecksum3(S) == 4213268626) {
    method_dispatcher_dJ4YM46kKnpUfxxQH6dtXE(S, method, data);
    return 1;
  }

  if (ssGetChecksum0(S) == 211097353 &&
      ssGetChecksum1(S) == 4112417406 &&
      ssGetChecksum2(S) == 3747644937 &&
      ssGetChecksum3(S) == 1922146988) {
    method_dispatcher_D5hUAv1FSKEiOVVgOUx7lH(S, method, data);
    return 1;
  }

  if (ssGetChecksum0(S) == 462836751 &&
      ssGetChecksum1(S) == 1611513361 &&
      ssGetChecksum2(S) == 1535888829 &&
      ssGetChecksum3(S) == 807499719) {
    method_dispatcher_iOoY8TrkNJf30SdaXtCZNG(S, method, data);
    return 1;
  }

  if (ssGetChecksum0(S) == 712895989 &&
      ssGetChecksum1(S) == 3862688309 &&
      ssGetChecksum2(S) == 1354596559 &&
      ssGetChecksum3(S) == 12132110) {
    method_dispatcher_cjmwW9EpMQg0K6b1o0DXNH(S, method, data);
    return 1;
  }

  if (ssGetChecksum0(S) == 1804280800 &&
      ssGetChecksum1(S) == 4293408378 &&
      ssGetChecksum2(S) == 2893196117 &&
      ssGetChecksum3(S) == 1818558887) {
    method_dispatcher_2GvInKXxGDWd0XSPaKJUhC(S, method, data);
    return 1;
  }

  if (ssGetChecksum0(S) == 2653426053 &&
      ssGetChecksum1(S) == 851106686 &&
      ssGetChecksum2(S) == 3578638948 &&
      ssGetChecksum3(S) == 4035736329) {
    method_dispatcher_o0P6MdIe6y5bpuoGxo1aVB(S, method, data);
    return 1;
  }

  if (ssGetChecksum0(S) == 3103179904 &&
      ssGetChecksum1(S) == 812568035 &&
      ssGetChecksum2(S) == 1479877289 &&
      ssGetChecksum3(S) == 2098394393) {
    method_dispatcher_uCvIkcwQXT8LoN3BG5L33F(S, method, data);
    return 1;
  }

  if (ssGetChecksum0(S) == 3432877810 &&
      ssGetChecksum1(S) == 1626063651 &&
      ssGetChecksum2(S) == 4268044167 &&
      ssGetChecksum3(S) == 862389229) {
    method_dispatcher_tBvFYVguqurYjzEugxBzXE(S, method, data);
    return 1;
  }

  if (ssGetChecksum0(S) == 3733578806 &&
      ssGetChecksum1(S) == 491274360 &&
      ssGetChecksum2(S) == 3471219275 &&
      ssGetChecksum3(S) == 1052997962) {
    method_dispatcher_A2JuLCNyadrWVSG5JjTEC(S, method, data);
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
