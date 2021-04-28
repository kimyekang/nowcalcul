
// nowcalculDlg.h: 헤더 파일
//

#pragma once


// CnowcalculDlg 대화 상자
class CnowcalculDlg : public CDialogEx
{
// 생성입니다.
public:
	CnowcalculDlg(CWnd* pParent = nullptr);	// 표준 생성자입니다.

// 대화 상자 데이터입니다.
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_NOWCALCUL_DIALOG };
#endif

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV 지원입니다.


// 구현입니다.
protected:
	HICON m_hIcon;

	// 생성된 메시지 맵 함수
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnClickedButt0();
	afx_msg void OnClickedButt1();
	afx_msg void OnClickedButt2();
	afx_msg void OnClickedButt3();
	afx_msg void OnClickedButt4();
	afx_msg void OnClickedButt5();
	afx_msg void OnClickedButt6();
	afx_msg void OnClickedButt7();
	afx_msg void OnClickedButt8();
	afx_msg void OnClickedButt9();
//	CString m_op1;
	double m_op1;
	double m_op2;
//	CEdit m_LCD;
	double m_LCD;
	CEdit m_Lcd;
};
