#ifndef _DELAY_IT_H
#define _DELAY_IT_H

#include "stm32f4xx.h"

void board_init(void);
void mdelay(unsigned long nTime);
void udelay(unsigned long nTime);
int get_tick_count(unsigned long *count);

#endif
