/*
 * This file is part of Moonlight Embedded.
 *
 * Copyright (C) 2015 Iwan Timmer
 *
 * Moonlight is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 3 of the License, or
 * (at your option) any later version.
 *
 * Moonlight is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with Moonlight; if not, see <http://www.gnu.org/licenses/>.
 */

#include <Limelight.h>

#define GS_SPS_BITSTREAM_FIXUP 0x01
#define GS_SPS_REMOVE_VST_FIXUP 0x02
#define GS_SPS_REMOVE_CLI_FIXUP 0x04

void gs_sps_init(int width, int height);
void gs_sps_stop();
void gs_sps_fix(PLENTRY sps, int flags, uint8_t *out_buf, uint32_t *out_offset);
