/*
 * Copyright 2000-2009
 * Wolfgang Denk, DENX Software Engineering, wd@denx.de.
 *
 * SPDX-License-Identifier:	GPL-2.0+
 */

#include <common.h>
#include <command.h>

static int do_regrw(cmd_tbl_t *cmdtp, int flag, int argc, char * const argv[])
{
	return 0;
}

U_BOOT_CMD(
	regrw,	2,	1,	do_regrw,
	"print command description/usage_xingyanl20171104",
	"\n"
	"	- print brief description of all commands\n"
	"help command ...\n"
	"	- print detailed usage of 'command'"
);
