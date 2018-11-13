/*******************************************************************************
*
*  (C) COPYRIGHT AUTHORS, 2018
*
*  TITLE:       SHARED.H
*
*  VERSION:     3.10
*
*  DATE:        11 Nov 2018
*
*  Shared include header file.
*
* THIS CODE AND INFORMATION IS PROVIDED "AS IS" WITHOUT WARRANTY OF
* ANY KIND, EITHER EXPRESSED OR IMPLIED, INCLUDING BUT NOT LIMITED
* TO THE IMPLIED WARRANTIES OF MERCHANTABILITY AND/OR FITNESS FOR A
* PARTICULAR PURPOSE.
*
*******************************************************************************/
#pragma once

//disable nonmeaningful warnings.
#pragma warning(push)
#pragma warning(disable: 4005) // macro redefinition
#pragma warning(disable: 4055) // %s : from data pointer %s to function pointer %s
#pragma warning(disable: 4201) // nonstandard extension used : nameless struct/union

#include <Windows.h>
#include <ntstatus.h>
#include "ntos.h"
#include "lsa.h"
#include "minirtl.h"
#include "_filename.h"
#include "util.h"
#include "windefend.h"
#include "consts.h"

#pragma warning(pop)