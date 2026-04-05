/* Include files */

#include "PickAndPlace_Simulation_Simscape_cgxe.h"
#include "m_eZ8Q20pDV7O0CnikSSPLsF.h"

unsigned int cgxe_PickAndPlace_Simulation_Simscape_method_dispatcher(SimStruct*
  S, int_T method, void* data)
{
  if (ssGetChecksum0(S) == 3229090953 &&
      ssGetChecksum1(S) == 104354764 &&
      ssGetChecksum2(S) == 1874210261 &&
      ssGetChecksum3(S) == 1593422574) {
    method_dispatcher_eZ8Q20pDV7O0CnikSSPLsF(S, method, data);
    return 1;
  }

  return 0;
}
