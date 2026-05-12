
#pragma once

#include <stdint.h>

#define __AFXWIN_H__ 1

#define WM_USER 1000
#define DECLARE_DYNAMIC(cls)
#define DECLARE_MESSAGE_MAP()
#define DECLARE_DYNCREATE(cls)
#define NTAPI
#define NULL 0

#ifndef afx_msg
#define afx_msg         // intentional placeholder
#endif

#define sprintf_s snprintf
#define _stprintf_s sprintf_s
#define lstrcpy strcpy
#define ASSERT assert

typedef bool BOOL;
typedef const char *LPCTSTR;
typedef unsigned int UINT;
typedef long LONG;
typedef unsigned int DWORD;
typedef int64_t LONG_PTR;
typedef int64_t INT_PTR;
typedef uint64_t UINT_PTR;
typedef LONG_PTR LRESULT;
typedef LONG_PTR LPARAM;
typedef UINT_PTR WPARAM;
typedef DWORD COLORREF;
typedef DWORD *LPCOLORREF;
typedef void *LPVOID;
typedef long long LONGLONG;
typedef uint8_t BYTE;
typedef char CHAR;
typedef char tchar_t;

typedef void *HMENU;
typedef void *HWND;
typedef void *HICON;
typedef void *HBRUSH;
typedef void *HINSTANCE;

#define LF_FACESIZE 32
typedef struct tagLOGFONTA {
  LONG lfHeight;
  LONG lfWidth;
  LONG lfEscapement;
  LONG lfOrientation;
  LONG lfWeight;
  BYTE lfItalic;
  BYTE lfUnderline;
  BYTE lfStrikeOut;
  BYTE lfCharSet;
  BYTE lfOutPrecision;
  BYTE lfClipPrecision;
  BYTE lfQuality;
  BYTE lfPitchAndFamily;
  CHAR lfFaceName[LF_FACESIZE];
} LOGFONT, LOGFONTA, *PLOGFONTA, *NPLOGFONTA, *LPLOGFONTA;

enum CWindowStyles
{
	WS_CHILD	= 0x1,
	WS_VISIBLE	= 0x2,
	CBRS_TOP	= 0x4,
};

enum CButtonId
{
	MB_OK = 1,
};

template<class BASE_CLASS, class TYPE>
class CTypedPtrArray : public BASE_CLASS
{
};

class CPoint
{
};


struct CSize
{
	LONG cx, cy;
	
	CSize(LONG x = 0, LONG y = 0) :
		cx(x), cy(y)
	{
	}
};

class CRect
{
	LONG left, top, right, bottom;
};
typedef CRect *LPRECT;

class CObject
{
};

struct CString
{
	CString(const char *init = nullptr)
	{
	}
};

class CPtrArray : public CObject
{
};

class CDC : public CObject
{
};

class CWnd
{
};

class CDialog : public CWnd
{
};

class CFrameWnd : public CWnd
{
};

class CMDIChildWnd : public CFrameWnd
{
};

class CDockBar : public CWnd
{
};

class CControlBar : public CWnd
{
};

class CFont : public CObject
{
};

class CCreateStruct
{
};
typedef CCreateStruct *LPCREATESTRUCT;

struct NCCALCSIZE_PARAMS
{
};

struct WINDOWPOS
{
};

struct AFX_CMDHANDLERINFO
{
};

struct MSG
{
};

class CWinThread
{
};

class CStatic
{
};

class CToolTipCtrl
{
};

struct CMapStringToPtr
{
	void RemoveAll();
	BOOL Lookup(LPCTSTR key,
	    		void*& rValue) const;
	    		
	void *&operator[](LPCTSTR key);
};

struct CWinApp
{
	virtual ~CWinApp();

	virtual UINT GetProfileInt(const tchar_t* lpszSection, const tchar_t* lpszEntry, int nDefault);
	virtual BOOL WriteProfileInt(const tchar_t* lpszSection, const tchar_t* lpszEntry, int nValue);
	virtual CString GetProfileString(const tchar_t* lpszSection, const tchar_t* lpszEntry, const tchar_t* lpszDefault = NULL);
	virtual BOOL WriteProfileString(const tchar_t* lpszSection, const tchar_t* lpszEntry, const tchar_t* lpszValue);
	virtual HINSTANCE LoadAppLangResourceDLL();
};

class CCmdTarget : public CObject
{
};

class CDocTemplate : public CCmdTarget
{
};

class CMultiDocTemplate : public CDocTemplate
{
};

class CCmdUI
{
};

class CDocument
{
};

namespace ATL
{
	struct CImage
	{
	};
};

typedef union _LARGE_INTEGER {
  struct {
    DWORD LowPart;
    LONG  HighPart;
  } DUMMYSTRUCTNAME;
  struct {
    DWORD LowPart;
    LONG  HighPart;
  } u;
  LONGLONG QuadPart;
} LARGE_INTEGER;


extern void OutputDebugString(const char *str);
extern BOOL QueryPerformanceFrequency(LARGE_INTEGER *lpFrequency);
extern BOOL QueryPerformanceCounter(LARGE_INTEGER *lpPerformanceCount);
extern LONG InterlockedIncrement(LONG volatile *Addend);
extern LONG InterlockedDecrement(LONG volatile *Addend);