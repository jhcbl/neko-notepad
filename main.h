/* A simple user interface for this project

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

#ifndef _MAIN_H
#define _MAIN_H

#include <satdir.h>

int event_handler(unsigned row, unsigned col);
int saturn_explorer(SAT_DIR_NODE *parent, SAT_DIR_NODE *node, SAT_DIR_ENTRY *entry);
int object_viewer(SAT_DIR_NODE *parent, SAT_OBJ_DSCR *obj);

typedef _Bool bool;
typedef struct {
    union {
        SAT_DIR_NODE *node;
        SAT_DIR_ENTRY *entry;
    } data;
    int type;
} SAT_DIR_ITEM;

#endif
