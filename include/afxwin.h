
#pragma once

#include <stdint.h>
#include <string>
#include <locale>
#include <codecvt>

#define __AFXWIN_H__ 1

#define DECLARE_DYNAMIC(cls)
#define DECLARE_MESSAGE_MAP()
#define DECLARE_DYNCREATE(cls)
#define NTAPI
#define AFXAPI

#ifndef afx_msg
#define afx_msg
#endif

#define sprintf_s snprintf
#define _stprintf_s sprintf_s
#define lstrcpy strcpy
#define ASSERT assert

#include "windows.h"

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

class CRect : public RECT
{
};

class CObject
{
};

struct CString
{
	CString(const char *init = nullptr)
	{
	}
	
	const char *GetString() const;
};

class CPtrArray : public CObject
{
};

class CDC : public CObject
{
};

class CCmdTarget : public CObject
{
};

class CWnd : public CCmdTarget
{
public:
	void SetRedraw( BOOL bRedraw = TRUE );
};

class CDialog : public CWnd
{
};

class CPropertyPage : public CDialog
{
};

class CFrameWnd : public CWnd
{
};

class CMDIChildWnd : public CFrameWnd
{
protected:
	HMENU m_hMenuShared = nullptr;
};

class CDockBar : public CWnd
{
};

class CControlBar : public CWnd
{
};

class CDialogBar : public CControlBar
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

class CComboBox : public CWnd
{
public:
	int AddString(LPCTSTR lpszString);

	int GetCurSel() const;
	int SetCurSel(int nSelect);

	void* GetItemDataPtr(int nIndex) const;
	int SetItemDataPtr(int nIndex, void* pData);
};

class CComboBoxEx : public CComboBox
{
};

class CEdit : public CWnd
{
};

template<class KEY, class ARG_KEY, class VALUE, class ARG_VALUE>
class CMap : public CObject
{
};

class CDataExchange
{
};

class CGdiObject : public CObject
{
};

class CBrush : public CGdiObject
{
};

class CMenu : public CObject
{
};

class CView : public CWnd
{
};

class CScrollView : public CView
{
};

class CFormView : public CScrollView
{
};

namespace ATL
{
	struct CImage
	{
	};
};


extern void AFXAPI DDX_Text(
    CDataExchange* pDX,
    int nIDC,
    CString& value);
    
extern void AFXAPI DDX_CBString(
    CDataExchange* pDX,
    int nIDC,
    CString& value);

extern void AFXAPI DDX_CBStringExact(
    CDataExchange* pDX,
    int nIDC,
    CString& value);
    
