/*
 * synergy-plus -- mouse and keyboard sharing utility
 * Copyright (C) 2009 The Synergy+ Project
 * Copyright (C) 2002 Chris Schoeneman
 * 
 * This package is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License
 * found in the file COPYING that should have accompanied this file.
 * 
 * This package is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#include "CFunctionJob.h"

//
// CFunctionJob
//

CFunctionJob::CFunctionJob(void (*func)(void*), void* arg) :
	m_func(func),
	m_arg(arg)
{
	// do nothing
}

CFunctionJob::~CFunctionJob()
{
	// do nothing
}

void
CFunctionJob::run()
{
	if (m_func != NULL) {
		m_func(m_arg);
	}
}
