/* Copyright(C) 2013, OpenOSEK by Fan Wang(parai). All rights reserved.
 *
 * This file is part of OpenOSEK.
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program. If not, see <http://www.gnu.org/licenses/>.
 *
 * Email: parai@foxmail.com
 * Sourrce Open At: https://github.com/parai/OpenOSEK/
 */
/* ================================ INCLUDEs  =============================== */
#include "Os.h"

/* ================================ MACROs    =============================== */

/* ================================ TYPEs     =============================== */

/* ================================ DATAs     =============================== */

/* ================================ FUNCTIONs =============================== */
/* This is a stardard procedure which will start the os by the default app mode */
#ifdef __GNUC__
int main(int argc,char* argv[])
#else
void main(void)
#endif
{
    /* You can do some-special work here,such as init the system clock and so on... */
	StartOS(OSDEFAULTAPPMODE);
    /* never returned when the os is started. */

	for(;;);
    #ifdef __GNUC__
    return -1;
    #endif
}