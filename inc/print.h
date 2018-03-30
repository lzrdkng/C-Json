/*
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
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef _JSON_PRINT_H
#define _JSON_PRINT_H

#include <stdio.h>
#include "json.h"

void JSON_PrintType(const JSON_Type* type, FILE* fd);

void JSON_PrintList(const JSON_List* list, FILE* fd);

void JSON_PrintDict(const JSON_Dict* dict, FILE* fd);

#endif // _JSON_PRINT_H