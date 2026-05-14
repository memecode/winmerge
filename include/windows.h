

#pragma once

#ifndef NULL
#define NULL 0
#endif

#ifndef TRUE
#define TRUE 1
#endif

#ifndef FALSE
#define FALSE 0
#endif

#define CALLBACK
#define __stdcall

#define WM_USER 1000

#define SW_HIDE 0 // Hides the window and activates another window.
#define SW_SHOWNORMAL 1
#define SW_NORMAL 1 // Activates and displays a window. If the window is minimized, maximized, or arranged, the system restores it to its original size and position. An application should specify this flag when displaying the window for the first time.
#define SW_SHOWMINIMIZED 2 // Activates the window and displays it as a minimized window.
#define SW_SHOWMAXIMIZED 3
#define SW_MAXIMIZE 3 // Activates the window and displays it as a maximized window.
#define SW_SHOWNOACTIVATE 4 // Displays a window in its most recent size and position. This value is similar to SW_SHOWNORMAL, except that the window is not activated.
#define SW_SHOW 5 // Activates the window and displays it in its current size and position.
#define SW_MINIMIZE 6 // Minimizes the specified window and activates the next top-level window in the Z order.
#define SW_SHOWMINNOACTIVE 7 // Displays the window as a minimized window. This value is similar to SW_SHOWMINIMIZED, except the window is not activated.
#define SW_SHOWNA 8 // Displays the window in its current size and position. This value is similar to SW_SHOW, except that the window is not activated.
#define SW_RESTORE 9 // Activates and displays the window. If the window is minimized, maximized, or arranged, the system restores it to its original size and position. An application should specify this flag when restoring a minimized window.
#define SW_SHOWDEFAULT 10 // Sets the show state based on the SW_ value specified in the STARTUPINFO structure passed to the CreateProcess function by the program that started the application.
#define SW_FORCEMINIMIZE 11

typedef bool BOOL;
typedef char *LPSTR;
typedef const char *LPCSTR;
typedef const char *LPCTSTR;
typedef int INT;
typedef unsigned int UINT;
typedef long LONG;
typedef unsigned int DWORD;
typedef int64_t LONG_PTR;
typedef int64_t INT_PTR;
typedef uint64_t UINT_PTR;
typedef uint64_t ULONG_PTR;
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
typedef void *HIMAGELIST;
typedef void *HDC;
typedef void *HTHEME;
typedef void *HCURSOR;

typedef LRESULT (*WNDPROC)(HWND, UINT, WPARAM, LPARAM);

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

typedef struct tagPOINT {
  LONG x;
  LONG y;
} POINT, *PPOINT, *NPPOINT, *LPPOINT;

typedef struct tagRECT {
  LONG left;
  LONG top;
  LONG right;
  LONG bottom;
} RECT, *PRECT, *NPRECT, *LPRECT;

typedef struct tagMINMAXINFO {
  POINT ptReserved;
  POINT ptMaxSize;
  POINT ptMaxPosition;
  POINT ptMinTrackSize;
  POINT ptMaxTrackSize;
} MINMAXINFO, *PMINMAXINFO, *LPMINMAXINFO;

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

typedef struct tagCREATESTRUCTA {
  LPVOID    lpCreateParams;
  HINSTANCE hInstance;
  HMENU     hMenu;
  HWND      hwndParent;
  int       cy;
  int       cx;
  int       y;
  int       x;
  LONG      style;
  LPCSTR    lpszName;
  LPCSTR    lpszClass;
  DWORD     dwExStyle;
} CREATESTRUCT, CREATESTRUCTA, *LPCREATESTRUCTA;

typedef struct tagNMHDR {
  HWND     hwndFrom;
  UINT_PTR idFrom;
  UINT     code;
} NMHDR;

typedef struct tagDRAWITEMSTRUCT {
  UINT      CtlType;
  UINT      CtlID;
  UINT      itemID;
  UINT      itemAction;
  UINT      itemState;
  HWND      hwndItem;
  HDC       hDC;
  RECT      rcItem;
  ULONG_PTR itemData;
} DRAWITEMSTRUCT, *PDRAWITEMSTRUCT, *LPDRAWITEMSTRUCT;

typedef struct tagTOOLTIPTEXT {
	UINT what;
} TOOLTIPTEXT;

typedef struct tagTOOLINFOA {
  UINT      cbSize;
  UINT      uFlags;
  HWND      hwnd;
  UINT_PTR  uId;
  RECT      rect;
  HINSTANCE hinst;
  LPSTR     lpszText;
  LPARAM    lParam;
  void      *lpReserved;
} TOOLINFO, TTTOOLINFOA, *PTOOLINFOA, *LPTTTOOLINFOA;

extern void OutputDebugString(const char *str);
extern BOOL QueryPerformanceFrequency(LARGE_INTEGER *lpFrequency);
extern BOOL QueryPerformanceCounter(LARGE_INTEGER *lpPerformanceCount);
extern LONG InterlockedIncrement(LONG volatile *Addend);
extern LONG InterlockedDecrement(LONG volatile *Addend);
