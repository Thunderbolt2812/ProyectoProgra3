#include <CtrlLib/CtrlLib.h>

using namespace Upp;

struct MyAppWindow : TopWindow {
    virtual void Paint(Draw& w) override {
        w.DrawRect(GetSize(),Black);
        w.DrawText(1, 1,"Aguja → Aguja", Arial(30), Color(255,255,255));
    }
    MyAppWindow() {
        Title("Hanoi - Parte 1");
    }
};
GUI_APP_MAIN{
	MyAppWindow w;
	w.SetDarkThemeEnabled();
	w.SetRect(0, 0, 200, 500);
    w.Run();
}
