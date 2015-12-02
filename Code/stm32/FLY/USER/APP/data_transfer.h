#ifndef _DATA_TRANSFER_H_
#define _DATA_TRANSFER_H_
#ifdef __cplusplus
extern "C" {
#endif

#include "sys.h"
#include "rtc.h"

#define AbsoluteOpticalEncoderNUM 9

typedef union
{
	u8 u8[4];
	u16 u16[2];
	u32 u32;
} _Uu32u8; //����ʱ��
extern _Uu32u8 TimeUnlock;
//ʱ��ṹ��
typedef struct
{
    vs8 hour;
    vs8 min;
    vs8 sec;
    //����������
    vs16 w_year;
    vs8  w_month;
    vs8  w_date;  
} TIME_S;
#define KEYLISTLEN (5)//������ʱ��Կ
extern u32 TimeKeyWordList[KEYLISTLEN];
extern _calendar_obj TimeUnlockEx;
extern TIME_S DeathTime;
extern int TimeUnlockFlag;
extern u8 RelayStata[];
extern int AbsoluteOpticalEncoder_VAL;//����ʽ��������
extern s16 AbsoluteOpticalEncoder_LastVAL;//����ʽ��������
extern u16 AbsoluteOpticalEncoder_Apart[][2];//�̵�����ֵ
extern int TimeUnlockFlag;
extern int WifiConfigFlag;
extern int WifiRESTFlag;
extern int breakENTMFlag;
extern _Uu32u8 ZipTime;//ѹ�����ʱ��
extern u8 DisPlayUnLockFlag;//��Ļ������־ 1Ϊ����


extern u16 u16FreeTime;//��Ļ����ʱ�����
extern u16 CurPID_ID;//��ǰ��ĻID(λ����һҳ)

extern u8 KeepAliveFlag;

extern void Data_Send_EncoderApartStatus(int i, int j);
extern void Data_Send_VAL(u16 addr, u16 val);
extern void Data_Send_VAL64(u16 addr, u32 val);
extern void Data_Send_Reg1(u8 addr, u8 val);
extern void Data_Send_Reg2(u8 addr, u16 val);
extern void DataGetReg(u8 addr, u8 Len);
extern void TimeUnZip(u32 tmp);



#if 1
#define RELAY0_INIT   PA11_OUT
#define RELAY0_OFF Set_A11
#define RELAY0_ON  Clr_A11

#define RELAY1_OFF Set_C8
#define RELAY1_ON  Clr_C8
#define RELAY1_INIT   PC8_OUT

#define RELAY2_OFF Set_C6
#define RELAY2_ON  Clr_C6
#define RELAY2_INIT   PC6_OUT

#define RELAY3_OFF Set_B14
#define RELAY3_ON  Clr_B14
#define RELAY3_INIT   PB14_OUT

#define RELAY4_OFF //Set_B12
#define RELAY4_ON  //Clr_B12
#define RELAY4_INIT   //PB12_OUT

#define RELAY5_OFF Set_A12
#define RELAY5_ON  Clr_A12
#define RELAY5_INIT   PA12_OUT

#define RELAY6_OFF Set_C9
#define RELAY6_ON  Clr_C9
#define RELAY6_INIT   PC9_OUT

#define RELAY7_OFF Set_C7
#define RELAY7_ON  Clr_C7
#define RELAY7_INIT   PC7_OUT

#define RELAY8_OFF Set_B15
#define RELAY8_ON  Clr_B15
#define RELAY8_INIT   PB15_OUT

#define RELAY9_OFF Set_B13
#define RELAY9_ON  Clr_B13
#define RELAY9_INIT   PB13_OUT

#define RELAY10_OFF Set_B14
#define RELAY10_ON  Clr_B14
#define RELAY10_INIT   PB14_OUT

#define GUANG_DIAN B9


#endif


#ifdef __cplusplus
}
#endif
#endif

