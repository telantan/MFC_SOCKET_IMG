// ClientDlg.h : 头文件
//

#pragma once


// CClientDlg 对话框
class CClientDlg : public CDialog
{
// 构造
public:
	CClientDlg(CWnd* pParent = NULL);	// 标准构造函数

// 对话框数据
	enum { IDD = IDD_CLIENT_DIALOG };

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV 支持

	


// 实现
protected:
	HICON m_hIcon;

	CListCtrl* list;

	void RecursiveFindFile(CString& strPath);


	void SendFile();

	// 生成的消息映射函数
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedButtonDispaly();
	afx_msg void OnBnClickedButtonDelete();
	afx_msg void OnBnClickedOk();
	afx_msg void OnBnClickedButtonSend();
};
