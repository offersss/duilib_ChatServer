// stdafx.h : 标准系统包含文件的包含文件，
// 或是经常使用但不常更改的
// 特定于项目的包含文件
//


#if !defined(AFX_STDAFX_H__A9DB83DB_A9FD_11D0_BFD1_444553540000__INCLUDED_)
#define AFX_STDAFX_H__A9DB83DB_A9FD_11D0_BFD1_444553540000__INCLUDED_

#pragma once

#define WIN32_LEAN_AND_MEAN	
#define _CRT_SECURE_NO_DEPRECATE

//#include "targetver.h"

#include <stdio.h>
#include <tchar.h>
#include <windows.h>
#include <objbase.h>
#include <zmouse.h>
#include <tchar.h>

#include "DuiLib\UIlib.h"

#ifdef _DEBUG
#       pragma comment(lib, "lib/DuiLib_ud.lib")
#else
#       pragma comment(lib, "lib/DuiLib_u.lib")
#endif

using namespace DuiLib;



// TODO: 在此处引用程序需要的其他头文件

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_STDAFX_H__A9DB83DB_A9FD_11D0_BFD1_444553540000__INCLUDED_)
