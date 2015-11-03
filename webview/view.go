package webview

/*
void* app_init();
int app_run(void* app);
void* webview_new();
void webview_delete(void* p);
void webview_setsize(void* p, int width, int height);
void webview_show(void* p);
void webview_seturl(void* p, const char* url, int urllen);
void webview_setbuf(void* p, const char* buf, int buflen);
void webview_sethtml(void* p, const char* html, int htmllen);
void webview_onfinished(void* p, void *call);
*/
// #cgo LDFLAGS: -lcwebkit -L./
import "C"
import "unsafe"

type FinishedCall func(int) uintptr
type App struct {
	app unsafe.Pointer
}

func NewApp() *App {
	app := C.app_init()
	theapp := &App{app: app}
	return theapp
}

func (a *App) Run() {
	C.app_run(a.app)

}

type WebView struct {
	view unsafe.Pointer
}

func NewWebView() *WebView {
	w := C.webview_new()
	v := &WebView{view: w}
	return v
}
func (w *WebView) SetUrl(url string) {
	curl := C.CString(url)
	C.webview_seturl(w.view, curl, C.int(len(url)))
}
func (w *WebView) Show() {
	C.webview_show(w.view)
}
func (w *WebView) SetSize(x, y int) {
	C.webview_setsize(w.view, C.int(x), C.int(y))
}

/*
func (w *WebView) OnLoadFinished(finishedCall FinishedCall) {
	cl := syscall.NewCallbackCDecl(finishedCall)
	gop := unsafe.Pointer(cl)
	C.webview_onfinished(w, gop)
}
*/
