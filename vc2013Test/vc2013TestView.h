
// vc2013TestView.h : Cvc2013TestView Ŭ������ �������̽�
//

#pragma once


class Cvc2013TestView : public CView
{
protected: // serialization������ ��������ϴ�.
	Cvc2013TestView();
	DECLARE_DYNCREATE(Cvc2013TestView)

// Ư���Դϴ�.
public:
	Cvc2013TestDoc* GetDocument() const;

// �۾��Դϴ�.
public:

// �������Դϴ�.
public:
	virtual void OnDraw(CDC* pDC);  // �� �並 �׸��� ���� �����ǵǾ����ϴ�.
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:
	virtual BOOL OnPreparePrinting(CPrintInfo* pInfo);
	virtual void OnBeginPrinting(CDC* pDC, CPrintInfo* pInfo);
	virtual void OnEndPrinting(CDC* pDC, CPrintInfo* pInfo);

// �����Դϴ�.
public:
	virtual ~Cvc2013TestView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ������ �޽��� �� �Լ�
protected:
	afx_msg void OnFilePrintPreview();
	afx_msg void OnRButtonUp(UINT nFlags, CPoint point);
	afx_msg void OnContextMenu(CWnd* pWnd, CPoint point);
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // vc2013TestView.cpp�� ����� ����
inline Cvc2013TestDoc* Cvc2013TestView::GetDocument() const
   { return reinterpret_cast<Cvc2013TestDoc*>(m_pDocument); }
#endif

