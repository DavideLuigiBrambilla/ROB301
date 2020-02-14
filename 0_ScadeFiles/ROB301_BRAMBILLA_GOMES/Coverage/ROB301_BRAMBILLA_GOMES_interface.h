#ifndef COMPUTING_MODEL_INTERFACE
#define COMPUTING_MODEL_INTERFACE


#include "SmuProxy.h"
#include "kcg_types.h"
#include "Computing_Model.h"

#ifdef __cplusplus
extern "C" {
#endif
extern SimSimulator * pSimulator;

/*******************************
 * Simulation context
 *******************************/
extern inC_Computing_Model inputs_ctx;
extern outC_Computing_Model outputs_ctx;

/* separate_io: inputs declaration */

/* separate_io: outputs declaration */
/*******************************
 * Validity
 *******************************/
extern int valid(void*);
extern int notvalid(void*);

#ifdef EXTENDED_SIM
void BeforeSimInit();
void AfterSimInit();
void BeforeSimStep();
void AfterSimStep();
void ExtendedSimStop();
void ExtendedGatherDumpData(char * pData);
void ExtendedRestoreDumpData(const char * pData);
int ExtendedGetDumpSize();
void UpdateValues();
extern void UpdateSimulatorValues();
extern int GraphicalInputsConnected;
#endif /* EXTENDED_SIM */

#define SIM_INFO    1
#define SIM_WARNING 2
#define SIM_ERROR   3
extern void SsmOutputMessage(int level, const char* str);
#ifdef __cplusplus
} /* "C" */
#endif

#endif /* COMPUTING_MODEL_INTERFACE */
