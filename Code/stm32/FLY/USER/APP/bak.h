#ifndef __BAK_H_
#define __BAK_H_
#ifdef __cplusplus
       extern "C" {
#endif
#include "sys.h"

void DataSaveInit(void);
void Data_Save(u8 select);
int Data_Read(void);
int StmFlash_Read(void);
void StmFlash_Save(u8 );
				 
#ifdef __cplusplus
        }
#endif
#endif


