﻿// DLL_Game.h: DLL_Game DLL 的主标头文件
//

#pragma once

#ifndef __AFXWIN_H__
	#error "在包含此文件之前包含 'pch.h' 以生成 PCH"
#endif

#include "resource.h"		// 主符号
#include "CGame.h"

// CDLLGameApp
// 有关此类实现的信息，请参阅 DLL_Game.cpp
//

class CDLLGameApp : public CWinApp
{
public:
	CDLLGameApp();

// 重写
public:
	virtual BOOL InitInstance();

	DECLARE_MESSAGE_MAP()
};
