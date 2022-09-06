// stdafx.h : include file for standard system include files,
//  or project specific include files that are used frequently, but
//      are changed infrequently
//

#if !defined(AFX_STDAFX_H__D824775C_A1A9_49F0_804A_5E53C5EEDD45__INCLUDED_)
#define AFX_STDAFX_H__D824775C_A1A9_49F0_804A_5E53C5EEDD45__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000


/// Starts here

#pragma once

// This includes all the libraries required. 
// You can goto Project | Settings and add the libraries 
// and delete the following lines from here
#pragma comment (lib, "kernel32")
#pragma comment (lib, "user32")
#pragma comment (lib, "gdi32")
#pragma comment (lib, "shell32")
#pragma comment (lib, "ole32")
#pragma comment (lib, "comctl32")
#pragma comment (lib, "uuid.lib")
#pragma comment (lib, "advapi32.lib")
#pragma comment (lib, "shlwapi.lib")

// ends here


// Insert your headers here
#define WIN32_LEAN_AND_MEAN		// Exclude rarely-used stuff from Windows headers

#include <windows.h>

// TODO: reference additional headers your program requires here

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_STDAFX_H__D824775C_A1A9_49F0_804A_5E53C5EEDD45__INCLUDED_)
