#if !defined(AFX_PREFSID3V2EXPORTPAGE_H__B0B95031_4A2D_4F96_B460_CADBA18A9ED9__INCLUDED_)
#define AFX_PREFSID3V2EXPORTPAGE_H__B0B95031_4A2D_4F96_B460_CADBA18A9ED9__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// PrefsID3V2ExportPage.h : header file
//Copyright (C) 2001-2015 John George K., xeonfusion@yahoo.com
#include "SAPrefsSubDlg.h"
/////////////////////////////////////////////////////////////////////////////
// CPrefsID3V2ExportPage dialog
class CMp3tagtoolsDlg;
class CPrefsID3V2ExportPage : public CSAPrefsSubDlg
{
// Construction
public:
	void ShowHelp();
	BOOL m_bpromptv2;
	void getAddressMainDlg(CMp3tagtoolsDlg* pDlg);
	CMp3tagtoolsDlg* pMainDlg;
	CPrefsID3V2ExportPage(CWnd* pParent = NULL);   // standard constructor

// Dialog Data
	//{{AFX_DATA(CPrefsID3V2ExportPage)
	enum { IDD = IDD_PREFS_ID3V2EXPORTPAGE };
	CButton	m_promptchk;
	CListBox	m_availcollistbox;
	CListBox	m_selcollistbox;
	//}}AFX_DATA


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CPrefsID3V2ExportPage)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	virtual BOOL OnNotify(WPARAM wParam, LPARAM lParam, LRESULT* pResult);
	//}}AFX_VIRTUAL

// Implementation
protected:

	// Generated message map functions
	//{{AFX_MSG(CPrefsID3V2ExportPage)
	virtual BOOL OnInitDialog();
	afx_msg void OnAddButton();
	afx_msg void OnRemoveButton();
	afx_msg void OnAddallButton();
	afx_msg void OnRemoveallButton();
	afx_msg void OnUpButton();
	afx_msg void OnDownButton();
	afx_msg void OnPromptCheck();
	virtual void OnOK();
	afx_msg BOOL OnHelpInfo(HELPINFO* pHelpInfo);
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_PREFSID3V2EXPORTPAGE_H__B0B95031_4A2D_4F96_B460_CADBA18A9ED9__INCLUDED_)
