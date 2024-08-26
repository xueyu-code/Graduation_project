#ifndef __RTC_H
#define __RTC_H	    

//时间结构体
typedef struct 
{
	u32 hour;
	u32 min;
	u32 sec;			
	//公历日月年周
	u32 w_year;
	u32  w_month;
	u32  w_date;
	u32  week;
	u32 AlarmHour;
	u32 AlarmMinute;
	u32 AlarmSecond;
	u32 Alarm_year;
	u32	Alarm_month;
	u32 Alarm_date;
}_calendar_obj;					 
extern _calendar_obj calendar;	//日历结构体

extern u8 const mon_table[12];	//月份日期数据表
void Disp_Time(u8 x,u8 y,u8 size);//在制定位置开始显示时间
void Disp_Week(u8 x,u8 y,u8 size,u8 lang);//在指定位置显示星期
u8 RTC_Init(void);        //初始化RTC,返回0,失败;1,成功;
u8 Is_Leap_Year(u16 year);//平年,闰年判断
u8 RTC_Alarm_Set(u16 syear,u8 smon,u8 sday,u8 hour,u8 min,u8 sec);
u8 RTC_Get(void);         //更新时间   
u8 RTC_Get_Week(u16 year,u8 month,u8 day);
u8 RTC_Set(u16 syear,u8 smon,u8 sday,u8 hour,u8 min,u8 sec);//设置时间			 
#endif


