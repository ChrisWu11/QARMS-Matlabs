/* Include files */

#include "PickAndPlace_Simulation_QLabs_cgxe.h"
#include "m_RlUt5YazEZ0A5u4lfJgXaE.h"

unsigned int cgxe_PickAndPlace_Simulation_QLabs_method_dispatcher(SimStruct* S,
  int_T method, void* data)
{
  if (ssGetChecksum0(S) == 2637074299 &&
      ssGetChecksum1(S) == 2040989316 &&
      ssGetChecksum2(S) == 1879643314 &&
      ssGetChecksum3(S) == 3443257081) {
    method_dispatcher_RlUt5YazEZ0A5u4lfJgXaE(S, method, data);
    return 1;
  }

  return 0;
}
