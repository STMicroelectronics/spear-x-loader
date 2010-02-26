/*
 * (C) Copyright 2000-2009
 * Vipin Kumar, ST Microelectronics, vipin.kumar@st.com
 *
 * See file CREDITS for list of people who contributed to this
 * project.
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License as
 * published by the Free Software Foundation; either version 2 of
 * the License, or (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.	 See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place, Suite 330, Boston,
 * MA 02111-1307 USA
 */

#ifndef __SYSCTRL_H
#define __SYSCTRL_H

struct sysctrl_regs {
  unsigned int scctrl;
  unsigned int scsysstat;
  unsigned int scimctrl;
  unsigned int scimstat;
  unsigned int scxtalctrl;
  unsigned int scpllctrl;
};


#define MODE_SHIFT          0x00000003
#define MODE_MASK           0x00000007

#define NORMAL              0x00000004
#define SLOW                0x00000002
#define DOZE                0x00000001
#define SLEEP               0x00000000

#define PLL_TIM             0x01FFFFFF

#endif

