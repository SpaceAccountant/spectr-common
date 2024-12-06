#ifndef _SPECTR_COMMON_LOG_H
#define _SPECTR_COMMON_LOG_H

#include <linux/printk.h>

#define LOG( LEVEL, MSG, ... ) printk( LEVEL "SPECTR [%s:%s]: " MSG "\n", __FILE__, __FUNCTION__,	\
					##__VA_ARGS__ );

#endif // _SPECTR_COMMON_LOG_H

