
// vc2013TestView.cpp : Cvc2013TestView 클래스의 구현
//

#include "stdafx.h"
// SHARED_HANDLERS는 미리 보기, 축소판 그림 및 검색 필터 처리기를 구현하는 ATL 프로젝트에서 정의할 수 있으며
// 해당 프로젝트와 문서 코드를 공유하도록 해 줍니다.
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
	// 표준 인쇄 명령입니다.
	ON_COMMAND(ID_FILE_PRINT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, &Cvc2013TestView::OnFilePrintPreview)
	ON_WM_CONTEXTMENU()
	ON_WM_RBUTTONUP()
END_MESSAGE_MAP()

// Cvc2013TestView 생성/소멸

Cvc2013TestView::Cvc2013TestView()
{
	// TODO: 여기에 생성 코드를 추가합니다.

}

Cvc2013TestView::~Cvc2013TestView()
{
}

BOOL Cvc2013TestView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: CREATESTRUCT cs를 수정하여 여기에서
	//  Window 클래스 또는 스타일을 수정합니다.

	return CView::PreCreateWindow(cs);
}

// Cvc2013TestView 그리기

void Cvc2013TestView::OnDraw(CDC* /*pDC*/)
{
	Cvc2013TestDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 여기에 원시 데이터에 대한 그리기 코드를 추가합니다.
}


// Cvc2013TestView 인쇄


void Cvc2013TestView::OnFilePrintPreview()
{
#ifndef SHARED_HANDLERS
	AFXPrintPreview(this);
#endif
}

BOOL Cvc2013TestView::OnPreparePrinting(CPrintInfo* pInfo)
{
	// 기본적인 준비
	return DoPreparePrinting(pInfo);
}

void Cvc2013TestView::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: 인쇄하기 전에 추가 초기화 작업을 추가합니다.
}

void Cvc2013TestView::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: 인쇄 후 정리 작업을 추가합니다.
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


// Cvc2013TestView 진단

#ifdef _DEBUG
void Cvc2013TestView::AssertValid() const
{
	CView::AssertValid();
}

void Cvc2013TestView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

Cvc2013TestDoc* Cvc2013TestView::GetDocument() const // 디버그되지 않은 버전은 인라인으로 지정됩니다.
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(Cvc2013TestDoc)));
	return (Cvc2013TestDoc*)m_pDocument;
}
#endif //_DEBUG


// Cvc2013TestView 메시지 처리기
