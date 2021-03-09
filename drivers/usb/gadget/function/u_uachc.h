/*
 * u_uachc.h
 *
 * Utility definitions for UAC2 function
 *
 * Copyright (c) 2014 Samsung Electronics Co., Ltd.
 *		http://www.samsung.com
 *
 * Author: Andrzej Pietrasiewicz <andrzej.p@samsung.com>
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
 */

#ifndef U_UACHC_H
#define U_UACHC_H

#include <linux/usb/composite.h>

#define UACHC_DEF_PCHMASK 0x1
#define UACHC_DEF_PSRATE 32000
#define UACHC_DEF_PSSIZE 2
#define UACHC_DEF_CCHMASK 0x0
#define UACHC_DEF_CSRATE 32000
#define UACHC_DEF_CSSIZE 2

struct f_uachc_opts {
	struct usb_function_instance	func_inst;
	int				p_chmask;
	int				p_srate;
	int				p_ssize;
	int				c_chmask;
	int				c_srate;
	int				c_ssize;
	bool				bound;

	struct mutex			lock;
	int				refcnt;
};

#endif
