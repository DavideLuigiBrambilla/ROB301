#ifndef ROB301_BRAMBILLA_GOMES_MTC_INST_SNAPSHOT_API
#define ROB301_BRAMBILLA_GOMES_MTC_INST_SNAPSHOT_API

#include "Computing_Model.h"
#include "stdio.h"

/*********************************************
 * Main Snapshot Save/Load functions
 *********************************************/
extern int save_snapshot(const char *szFilePath, size_t nCycle,
                      inC_Computing_Model *inC,
                      outC_Computing_Model *outC);
extern int load_snapshot(const char *szFilePath, size_t *nCycle,
                      inC_Computing_Model *inC,
                      outC_Computing_Model *outC);

/**********************************************
 * Operators context Save/Load sub-functions
 *********************************************/
extern int save_inC_Computing_Model(const char *cpath, const inC_Computing_Model *pValue, const void *pBaseAddr, FILE *snsFile);
extern int load_inC_Computing_Model(inC_Computing_Model *pValue, FILE *snsFile);
extern int save_outC_Computing_Model(const char *cpath, const outC_Computing_Model *pValue, const void *pBaseAddr, FILE *snsFile);
extern int load_outC_Computing_Model(outC_Computing_Model *pValue, FILE *snsFile);
extern int save_outC_LATCHALL01_MTC(const char *cpath, const outC_LATCHALL01_MTC *pValue, const void *pBaseAddr, FILE *snsFile);
extern int load_outC_LATCHALL01_MTC(outC_LATCHALL01_MTC *pValue, FILE *snsFile);
extern int save_outC_LATCHALL02_MTC(const char *cpath, const outC_LATCHALL02_MTC *pValue, const void *pBaseAddr, FILE *snsFile);
extern int load_outC_LATCHALL02_MTC(outC_LATCHALL02_MTC *pValue, FILE *snsFile);
extern int save_outC_LATCHALL03_MTC(const char *cpath, const outC_LATCHALL03_MTC *pValue, const void *pBaseAddr, FILE *snsFile);
extern int load_outC_LATCHALL03_MTC(outC_LATCHALL03_MTC *pValue, FILE *snsFile);
extern int save_outC_LATCHALL04_MTC(const char *cpath, const outC_LATCHALL04_MTC *pValue, const void *pBaseAddr, FILE *snsFile);
extern int load_outC_LATCHALL04_MTC(outC_LATCHALL04_MTC *pValue, FILE *snsFile);
#endif /*ROB301_BRAMBILLA_GOMES_MTC_INST_SNAPSHOT_API*/
