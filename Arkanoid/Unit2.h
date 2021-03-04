//---------------------------------------------------------------------------

#ifndef Unit2H
#define Unit2H
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <ExtCtrls.hpp>
#include <Graphics.hpp>
//---------------------------------------------------------------------------
class TForm1 : public TForm
{
__published:	// IDE-managed Components
        TImage *ball;
        TTimer *ball_timer;
        TImage *paddle;
        TTimer *paddle_timer_left;
        TTimer *paddle_timer_right;
        TImage *brick1;
        TImage *brick2;
        TImage *brick3;
        TImage *brick4;
        TImage *brick5;
        TImage *brick6;
        TImage *brick7;
        TImage *brick8;
        TImage *brick9;
        TImage *brick10;
        TImage *brick11;
        TImage *brick12;
        TButton *button1;
        TButton *button2;
        TImage *background;
        TImage *brick13;
        TImage *brick17;
        TImage *brick14;
        TImage *brick15;
        TImage *brick16;
        TImage *brick18;
        TImage *brick19;
        TImage *brick20;
        TImage *ball2;
        TTimer *ball2_timer;
        TButton *ready_button;
        void __fastcall ball_timerTimer(TObject *Sender);
        void __fastcall paddle_timer_leftTimer(TObject *Sender);
        void __fastcall paddle_timer_rightTimer(TObject *Sender);
        void __fastcall FormKeyDown(TObject *Sender, WORD &Key,
          TShiftState Shift);
        void __fastcall FormKeyUp(TObject *Sender, WORD &Key,
          TShiftState Shift);
        void __fastcall button2Click(TObject *Sender);
        void __fastcall button1Click(TObject *Sender);
        void __fastcall FormCreate(TObject *Sender);
        void __fastcall ball2_timerTimer(TObject *Sender);
        void __fastcall ready_buttonClick(TObject *Sender);
private:	// User declarations
public:		// User declarations
        __fastcall TForm1(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm1 *Form1;
//---------------------------------------------------------------------------
#endif
