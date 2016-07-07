/* S3C2410 hardware definitions

Copyright (C) 2016 Arnie97

This program is free software; you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation; either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License along
with this program; if not, write to the Free Software Foundation, Inc.,
51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA.

*/

#include "s3c2410.h"

// remapped addresses of clock registers
volatile unsigned
	*const GPGCON  = (unsigned *)0x07A00060,
	*const GPGDAT  = (unsigned *)0x07A00064,
	*const MPLLCON = (unsigned *)0x07200004,
	*const CLKSLOW = (unsigned *)0x07200010,
	*const CLKDIVN = (unsigned *)0x07200014;

// frequency of external oscillator
const unsigned FIN = 12;
