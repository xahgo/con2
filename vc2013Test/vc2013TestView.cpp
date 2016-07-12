
// vc2013TestView.cpp : Cvc2013TestView Ŭ������ ����
//

#include "stdafx.h"
// SHARED_HANDLERS�� �̸� ����, ����� �׸� �� �˻� ���� ó���⸦ �����ϴ� ATL ������Ʈ���� ������ �� ������
// �ش� ������Ʈ�� ���� �ڵ带 �����ϵ��� �� �ݴϴ�.
#ifndef SHARED_HANDLERS
#include "vc2013Test.h"
#endif

#include "vc2013TestDoc.h"
#include "vc2013TestView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// Cvc2013TestView

IMPLEMENT_DYNCREATE(Cvc2013TestView, CView)

BEGIN_MESSAGE_MAP(Cvc2013TestView, CView)
	// ǥ�� �μ� ����Դϴ�.
	ON_COMMAND(ID_FILE_PRINT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, &Cvc2013TestView::OnFilePrintPreview)
	ON_WM_CONTEXTMENU()
	ON_WM_RBUTTONUP()
END_MESSAGE_MAP()

// Cvc2013TestView ����/�Ҹ�

Cvc2013TestView::Cvc2013TestView()
{
	// TODO: ���⿡ ���� �ڵ带 �߰��մϴ�.

}

Cvc2013TestView::~Cvc2013TestView()
{
}

BOOL Cvc2013TestView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: CREATESTRUCT cs�� �����Ͽ� ���⿡��
	//  Window Ŭ���� �Ǵ� ��Ÿ���� �����մϴ�.

	return CView::PreCreateWindow(cs);
}

// Cvc2013TestView �׸���

void Cvc2013TestView::OnDraw(CDC* /*pDC*/)
{
	Cvc2013TestDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: ���⿡ ���� �����Ϳ� ���� �׸��� �ڵ带 �߰��մϴ�.
}


// Cvc2013TestView �μ�


void Cvc2013TestView::OnFilePrintPreview()
{
#ifndef SHARED_HANDLERS
	AFXPrintPreview(this);
#endif
}

BOOL Cvc2013TestView::OnPreparePrinting(CPrintInfo* pInfo)
{
	// �⺻���� �غ�
	return DoPreparePrinting(pInfo);
}

void Cvc2013TestView::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: �μ��ϱ� ���� �߰� �ʱ�ȭ �۾��� �߰��մϴ�.
}

void Cvc2013TestView::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: �μ� �� ���� �۾��� �߰��մϴ�.
}

void Cvc2013TestView::OnRButtonUp(UINT /* nFlags */, CPoint point)
{
	ClientToScreen(&point);
	OnContextMenu(this, point);
}

void Cvc2013TestView::OnContextMenu(CWnd* /* pWnd */, CPoint point)
{
#ifndef SHARED_HANDLERS
	theApp.GetContextMenuManager()->ShowPopupMenu(IDR_POPUP_EDIT, point.x, point.y, this, TRUE);
#endif
}


// Cvc2013TestView ����

#ifdef _DEBUG
void Cvc2013TestView::AssertValid() const
{
	CView::AssertValid();
}

void Cvc2013TestView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

Cvc2013TestDoc* Cvc2013TestView::GetDocument() const // ����׵��� ���� ������ �ζ������� �����˴ϴ�.
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(Cvc2013TestDoc)));
	return (Cvc2013TestDoc*)m_pDocument;
}
#endif //_DEBUG


// Cvc2013TestView �޽��� ó����
