
/*
===========================================================================

Doom 3 GPL Source Code
Copyright (C) 1999-2011 id Software LLC, a ZeniMax Media company.

This file is part of the Doom 3 GPL Source Code (?Doom 3 Source Code?).

Doom 3 Source Code is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 3 of the License, or
(at your option) any later version.

Doom 3 Source Code is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with Doom 3 Source Code.  If not, see <http://www.gnu.org/licenses/>.

In addition, the Doom 3 Source Code is also subject to certain additional terms. You should have received a copy of these additional terms immediately following the terms and conditions of the GNU General Public License which accompanied the Doom 3 Source Code.  If not, please request a copy in writing from id Software at the address below.

If you have questions concerning this license or the applicable additional terms, you may contact in writing id Software LLC, c/o ZeniMax Media Inc., Suite 120, Rockville, Maryland 20850 USA.

===========================================================================
*/
#include "../../../idlib/precompiled.h"
#include <EGL/egl.h>
#pragma hdrstop

typedef struct {
	const char *ext_name;
} glExtName_t;

glExtName_t glExtNames[] = {
	{ NULL }
};

static void StubFunction(void) { }

GLExtension_t GLimp_ExtensionPointer(const char *name)
{
	if (strstr(name, "wgl") == name) {
		common->DPrintf("WARNING: GLimp_ExtensionPointer for '%s'\n", name);
	}

#ifdef ID_DEDICATED
	common->Printf("GLimp_ExtensionPointer %s\n", name);
	return StubFunction;
#else
#if 0
	glExtName_t *n;

	for (n = glExtNames ; n->ext_name ; n++) {
		if (!strcmp(name, n->ext_name)) {
			common->DPrintf("matched GL extension: %s\n", name);
			break;
		}
	}

	if (! n->ext_name) {
		common->DPrintf("unmatched GL extension name: %s\n", name);
	}

#endif
	GLExtension_t ret;

#ifdef ID_TARGET_OPENGL
	ret = glXGetProcAddressARB(name);
#else
	ret = eglGetProcAddress(name);
#endif

	if (!ret) {
		common->Printf("GetProcAddress failed: \"%s\"\n", name);
		return StubFunction;
	}

	return ret;
#endif
}
