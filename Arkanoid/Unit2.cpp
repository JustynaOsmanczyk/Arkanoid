//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit2.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;

        int x=-8;
        int y=-8;

        int a=-8;
        int b=-8;

        int counter=20;
        int color=2;

        bool collision(TImage * ball, TImage * brick){
                if(ball->Left >= brick->Left-ball->Width &&
                ball->Left <= brick->Left+brick->Width &&
                ball->Top >= brick->Top-ball->Height &&
                ball->Top <= brick->Top+brick->Height){
                return true;
                }
                else{
                        return false;
                }
        }

//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TForm1::ball_timerTimer(TObject *Sender)
{
        ball->Left+=x;
        ball->Top+=y;

        // bounce the ball off
        // the left wall
        if(ball->Left-5 <= background->Left) x=-x;
        // the right wall
        if(ball->Left+ball->Width+5 >= background->Width) x=-x;
        // the top wall
        if(ball->Top-5 <= background->Top) y=-y;

        // defeat
        if(ball->Top >= paddle->Top+paddle->Height+15){
                ball_timer->Enabled = false;
                ball->Visible = false;
                if(ball2_timer->Enabled == false){
                        button2->Visible = true;
                }
        }
        else{
                if(ball->Left > paddle->Left-ball->Width/2 && ball->Left < paddle->Left+paddle->Width &&  ball->Top+ball->Height > paddle->Top){
                        if(y>0) y = -y;
                }
        }

        if(counter <= 0){
                ball_timer->Enabled = false;
                ball->Visible = false;
                button1->Visible = true;
        }

        if(collision(ball, brick1) && brick1->Visible == true){
                x=-x;
                y=-y;
                brick1->Visible=false;
                color = 1;
                counter--;
        }
        if(collision(ball, brick2) && brick2->Visible == true){
                x=-x;
                y=-y;
                brick2->Visible=false;
                color = 5;
                counter--;
        }
        if(collision(ball, brick3) && brick3->Visible == true){
                x=-x;
                y=-y;
                brick3->Visible=false;
                color = 2;
                counter--;
        }
        if(collision(ball, brick4) && brick4->Visible == true){
                x=-x;
                y=-y;
                brick4->Visible=false;
                color = 4;
                counter--;

                if(ball2_timer->Enabled == false){
                        ball2_timer->Enabled = true;
                        ball2->Visible = true;
                        ball2->Left = 200;
                        ball2->Top = 200;
                }
        }
        if(collision(ball, brick5) && brick5->Visible == true){
                x=-x;
                y=-y;
                brick5->Visible=false;
                color = 3;
                counter--;
        }
        if(collision(ball, brick6) && brick6->Visible == true){
                x=-x;
                y=-y;
                brick6->Visible=false;
                color = 2;
                counter--;
        }
        if(collision(ball, brick7) && brick7->Visible == true){
                x=-x;
                y=-y;
                brick7->Visible=false;
                color = 1;
                counter--;

                if(ball2_timer->Enabled == false){
                        ball2_timer->Enabled = true;
                        ball2->Visible = true;
                        ball2->Left = 200;
                        ball2->Top = 200;
                }
        }
        if(collision(ball, brick8) && brick8->Visible == true){
                x=-x;
                y=-y;
                brick8->Visible=false;
                color = 4;
                counter--;
        }
        if(collision(ball, brick9) && brick9->Visible == true){
                x=-x;
                y=-y;
                brick9->Visible=false;
                color = 3;
                counter--;

                if(ball2_timer->Enabled == false){
                        ball2_timer->Enabled = true;
                        ball2->Visible = true;
                        ball2->Left = 200;
                        ball2->Top = 200;
                }
        }
        if(collision(ball, brick10) && brick10->Visible == true){
                x=-x;
                y=-y;
                brick10->Visible=false;
                color = 5;
                counter--;
        }
        if(collision(ball, brick11) && brick11->Visible == true){
                x=-x;
                y=-y;
                brick11->Visible=false;
                color = 1;
                counter--;
        }
        if(collision(ball, brick12) && brick12->Visible == true){
                x=-x;
                y=-y;
                brick12->Visible=false;
                color = 5;
                counter--;
        }
        if(collision(ball, brick13) && brick13->Visible == true){
                x=-x;
                y=-y;
                brick13->Visible=false;
                color = 1;
                counter--;

                if(ball2_timer->Enabled == false){
                        ball2_timer->Enabled = true;
                        ball2->Visible = true;
                        ball2->Left = 200;
                        ball2->Top = 200;
                }
        }
        if(collision(ball, brick14) && brick14->Visible == true){
                x=-x;
                y=-y;
                brick14->Visible=false;
                color = 5;
                counter--;
        }
        if(collision(ball, brick15) && brick15->Visible == true){
                x=-x;
                y=-y;
                brick15->Visible=false;
                color = 2;
                counter--;
        }
        if(collision(ball, brick16) && brick16->Visible == true){
                x=-x;
                y=-y;
                brick16->Visible=false;
                color = 4;
                counter--;
        }
        if(collision(ball, brick17) && brick17->Visible == true){
                x=-x;
                y=-y;
                brick17->Visible=false;
                color = 3;
                counter--;
        }
        if(collision(ball, brick18) && brick18->Visible == true){
                x=-x;
                y=-y;
                brick18->Visible=false;
                color = 2;
                counter--;
        }
        if(collision(ball, brick19) && brick19->Visible == true){
                x=-x;
                y=-y;
                brick19->Visible=false;
                color = 1;
                counter--;
        }
        if(collision(ball, brick20) && brick20->Visible == true){
                x=-x;
                y=-y;
                brick20->Visible=false;
                color = 5;
                counter--;
        }

        switch(color){
                case 1: {
                        //background->Picture->LoadFromFile("pictures/pinkbackground.bmp");
                        ball->Picture->LoadFromFile("pictures/pinkball.bmp");
                        ball2->Picture->LoadFromFile("pictures/pinkball.bmp");
                        paddle->Picture->LoadFromFile("pictures/pinkpaddle.bmp");
                        break;
                }
                case 2: {
                        //background->Picture->LoadFromFile("pictures/bluebackground.bmp");
                        ball->Picture->LoadFromFile("pictures/blueball.bmp");
                        ball2->Picture->LoadFromFile("pictures/blueball.bmp");
                        paddle->Picture->LoadFromFile("pictures/bluepaddle.bmp");
                        break;
                }
                case 3: {
                        //background->Picture->LoadFromFile("pictures/greenbackground.bmp");
                        ball->Picture->LoadFromFile("pictures/greenball.bmp");
                        ball2->Picture->LoadFromFile("pictures/greenball.bmp");
                        paddle->Picture->LoadFromFile("pictures/greenpaddle.bmp");
                        break;
                }
                case 4: {
                        //background->Picture->LoadFromFile("pictures/redbackground.bmp");
                        ball->Picture->LoadFromFile("pictures/redball.bmp");
                        ball2->Picture->LoadFromFile("pictures/redball.bmp");
                        paddle->Picture->LoadFromFile("pictures/redpaddle.bmp");
                        break;
                }
                case 5: {
                        //background->Picture->LoadFromFile("pictures/yellowbackground.bmp");
                        ball->Picture->LoadFromFile("pictures/yellowball.bmp");
                        ball2->Picture->LoadFromFile("pictures/yellowball.bmp");
                        paddle->Picture->LoadFromFile("pictures/yellowpaddle.bmp");
                        break;
                }

        }
}
//---------------------------------------------------------------------------

void __fastcall TForm1::paddle_timer_leftTimer(TObject *Sender)
{
        if(paddle->Left > 10) paddle->Left -= 10;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::paddle_timer_rightTimer(TObject *Sender)
{
        if(paddle->Left+paddle->Width < background->Width - 10) paddle->Left += 10;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::FormKeyDown(TObject *Sender, WORD &Key,
      TShiftState Shift)
{
        if(Key == VK_LEFT)  paddle_timer_left->Enabled = true;
        if(Key == VK_RIGHT)  paddle_timer_right->Enabled = true;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::FormKeyUp(TObject *Sender, WORD &Key,
      TShiftState Shift)
{
        if(Key == VK_LEFT)  paddle_timer_left->Enabled = false;
        if(Key == VK_RIGHT)  paddle_timer_right->Enabled = false;
}
//---------------------------------------------------------------------------


void __fastcall TForm1::button2Click(TObject *Sender)
{
        ready_button->Show();

        ball->Left = 200;
        ball->Top = 200;
        ball2->Left = 200;
        ball2->Top = 200;
        ball->Visible = true;
        ball2->Visible = false;

        x=-8;
        y=-8;
        a=-8;
        b=-8;
        ball_timer->Enabled = false;
        ball2_timer->Enabled = false;
        button2->Visible = false;

        counter=20;
        brick1->Visible = true;
        brick1->Picture->LoadFromFile("pictures/pinkbrick.bmp");
        brick2->Visible = true;
        brick2->Picture->LoadFromFile("pictures/yellowbrick.bmp");
        brick3->Visible = true;
        brick3->Picture->LoadFromFile("pictures/bluebrick.bmp");
        brick4->Visible = true;
        brick4->Picture->LoadFromFile("pictures/redbrick.bmp");
        brick5->Visible = true;
        brick5->Picture->LoadFromFile("pictures/greenbrick.bmp");
        brick6->Visible = true;
        brick6->Picture->LoadFromFile("pictures/bluebrick.bmp");
        brick7->Visible = true;
        brick7->Picture->LoadFromFile("pictures/pinkbrick.bmp");
        brick8->Visible = true;
        brick8->Picture->LoadFromFile("pictures/redbrick.bmp");
        brick9->Visible = true;
        brick9->Picture->LoadFromFile("pictures/greenbrick.bmp");
        brick10->Visible = true;
        brick10->Picture->LoadFromFile("pictures/yellowbrick.bmp");
        brick11->Visible = true;
        brick11->Picture->LoadFromFile("pictures/pinkbrick.bmp");
        brick12->Visible = true;
        brick12->Picture->LoadFromFile("pictures/yellowbrick.bmp");
        brick13->Visible = true;
        brick13->Picture->LoadFromFile("pictures/pinkbrick.bmp");
        brick14->Visible = true;
        brick14->Picture->LoadFromFile("pictures/yellowbrick.bmp");
        brick15->Visible = true;
        brick15->Picture->LoadFromFile("pictures/bluebrick.bmp");
        brick16->Visible = true;
        brick16->Picture->LoadFromFile("pictures/redbrick.bmp");
        brick17->Visible = true;
        brick17->Picture->LoadFromFile("pictures/greenbrick.bmp");
        brick18->Visible = true;
        brick18->Picture->LoadFromFile("pictures/bluebrick.bmp");
        brick19->Visible = true;
        brick19->Picture->LoadFromFile("pictures/pinkbrick.bmp");
        brick20->Visible = true;
        brick20->Picture->LoadFromFile("pictures/yellowbrick.bmp");
}
//---------------------------------------------------------------------------

void __fastcall TForm1::button1Click(TObject *Sender)
{
        ready_button->Show();

        ball->Left = 200;
        ball->Top = 200;
        ball2->Left = 200;
        ball2->Top = 200;
        ball->Visible = true;
        ball2->Visible = false;

        x=-8;
        y=-8;
        a=-8;
        b=-8;
        ball_timer->Enabled = false;
        ball2_timer->Enabled = false;
        button1->Visible = false;

        counter=20;
        brick1->Visible = true;
        brick1->Picture->LoadFromFile("pictures/pinkbrick.bmp");
        brick2->Visible = true;
        brick2->Picture->LoadFromFile("pictures/yellowbrick.bmp");
        brick3->Visible = true;
        brick3->Picture->LoadFromFile("pictures/bluebrick.bmp");
        brick4->Visible = true;
        brick4->Picture->LoadFromFile("pictures/redbrick.bmp");
        brick5->Visible = true;
        brick5->Picture->LoadFromFile("pictures/greenbrick.bmp");
        brick6->Visible = true;
        brick6->Picture->LoadFromFile("pictures/bluebrick.bmp");
        brick7->Visible = true;
        brick7->Picture->LoadFromFile("pictures/pinkbrick.bmp");
        brick8->Visible = true;
        brick8->Picture->LoadFromFile("pictures/redbrick.bmp");
        brick9->Visible = true;
        brick9->Picture->LoadFromFile("pictures/greenbrick.bmp");
        brick10->Visible = true;
        brick10->Picture->LoadFromFile("pictures/yellowbrick.bmp");
        brick11->Visible = true;
        brick11->Picture->LoadFromFile("pictures/pinkbrick.bmp");
        brick12->Visible = true;
        brick12->Picture->LoadFromFile("pictures/yellowbrick.bmp");
        brick13->Visible = true;
        brick13->Picture->LoadFromFile("pictures/pinkbrick.bmp");
        brick14->Visible = true;
        brick14->Picture->LoadFromFile("pictures/yellowbrick.bmp");
        brick15->Visible = true;
        brick15->Picture->LoadFromFile("pictures/bluebrick.bmp");
        brick16->Visible = true;
        brick16->Picture->LoadFromFile("pictures/redbrick.bmp");
        brick17->Visible = true;
        brick17->Picture->LoadFromFile("pictures/greenbrick.bmp");
        brick18->Visible = true;
        brick18->Picture->LoadFromFile("pictures/bluebrick.bmp");
        brick19->Visible = true;
        brick19->Picture->LoadFromFile("pictures/pinkbrick.bmp");
        brick20->Visible = true;
        brick20->Picture->LoadFromFile("pictures/yellowbrick.bmp");
}
//---------------------------------------------------------------------------

void __fastcall TForm1::FormCreate(TObject *Sender)
{
        background->Visible = false;
        ready_button->Show();

        ball->Left = 200;
        ball->Top = 200;
        ball2->Left = 200;
        ball2->Top = 200;
        ball->Visible = true;
        ball2->Visible = false;

        x=-8;
        y=-8;
        a=-8;
        b=-8;
        ball_timer->Enabled = false;
        ball2_timer->Enabled = false;

        counter=20;
        brick1->Visible = true;
        brick1->Picture->LoadFromFile("pictures/pinkbrick.bmp");
        brick2->Visible = true;
        brick2->Picture->LoadFromFile("pictures/yellowbrick.bmp");
        brick3->Visible = true;
        brick3->Picture->LoadFromFile("pictures/bluebrick.bmp");
        brick4->Visible = true;
        brick4->Picture->LoadFromFile("pictures/redbrick.bmp");
        brick5->Visible = true;
        brick5->Picture->LoadFromFile("pictures/greenbrick.bmp");
        brick6->Visible = true;
        brick6->Picture->LoadFromFile("pictures/bluebrick.bmp");
        brick7->Visible = true;
        brick7->Picture->LoadFromFile("pictures/pinkbrick.bmp");
        brick8->Visible = true;
        brick8->Picture->LoadFromFile("pictures/redbrick.bmp");
        brick9->Visible = true;
        brick9->Picture->LoadFromFile("pictures/greenbrick.bmp");
        brick10->Visible = true;
        brick10->Picture->LoadFromFile("pictures/yellowbrick.bmp");
        brick11->Visible = true;
        brick11->Picture->LoadFromFile("pictures/pinkbrick.bmp");
        brick12->Visible = true;
        brick12->Picture->LoadFromFile("pictures/yellowbrick.bmp");
        brick13->Visible = true;
        brick13->Picture->LoadFromFile("pictures/pinkbrick.bmp");
        brick14->Visible = true;
        brick14->Picture->LoadFromFile("pictures/yellowbrick.bmp");
        brick15->Visible = true;
        brick15->Picture->LoadFromFile("pictures/bluebrick.bmp");
        brick16->Visible = true;
        brick16->Picture->LoadFromFile("pictures/redbrick.bmp");
        brick17->Visible = true;
        brick17->Picture->LoadFromFile("pictures/greenbrick.bmp");
        brick18->Visible = true;
        brick18->Picture->LoadFromFile("pictures/bluebrick.bmp");
        brick19->Visible = true;
        brick19->Picture->LoadFromFile("pictures/pinkbrick.bmp");
        brick20->Visible = true;
        brick20->Picture->LoadFromFile("pictures/yellowbrick.bmp");
}
//---------------------------------------------------------------------------

void __fastcall TForm1::ready_buttonClick(TObject *Sender)
{
        ball_timer->Enabled = true;
        ball2_timer->Enabled = false;
        ready_button->Hide();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::ball2_timerTimer(TObject *Sender)
{
        ball2->Left+=a;
        ball2->Top+=b;

        // bounce the ball2 off
        // the left wall
        if(ball2->Left-5 <= background->Left) a=-a;
        // the right wall
        if(ball2->Left+ball2->Width+5 >= background->Width) a=-a;
        // the top wall
        if(ball2->Top-5 <= background->Top) b=-b;

        // defeat
        if(ball2->Top >= paddle->Top+paddle->Height+15){
                ball2_timer->Enabled = false;
                ball2->Visible = false;
                if(ball_timer->Enabled == false){
                        button2->Visible = true;
                }
        }
        else{
                if(ball2->Left > paddle->Left-ball2->Width/2 && ball2->Left < paddle->Left+paddle->Width &&  ball2->Top+ball->Height > paddle->Top){
                        if(b>0) b = -b;
                }
        }

        if(counter <= 0){
                ball2_timer->Enabled = false;
                ball2->Visible = false;
                button1->Visible = true;
        }

        if(collision(ball2, brick1) && brick1->Visible == true){
                a=-a;
                b=-b;
                brick1->Visible=false;
                color = 1;
                counter--;
        }
        if(collision(ball2, brick2) && brick2->Visible == true){
                a=-a;
                b=-b;
                brick2->Visible=false;
                color = 5;
                counter--;
        }
        if(collision(ball2, brick3) && brick3->Visible == true){
                a=-a;
                b=-b;
                brick3->Visible=false;
                color = 2;
                counter--;
        }
        if(collision(ball2, brick4) && brick4->Visible == true){
                a=-a;
                b=-b;
                brick4->Visible=false;
                color = 4;
                counter--;

                if(ball_timer->Enabled == false){
                        ball_timer->Enabled = true;
                        ball->Visible = true;
                        ball->Left = 200;
                        ball->Top = 200;

                }
        }
        if(collision(ball2, brick5) && brick5->Visible == true){
                a=-a;
                b=-b;
                brick5->Visible=false;
                color = 3;
                counter--;
        }
        if(collision(ball2, brick6) && brick6->Visible == true){
                a=-a;
                b=-b;
                brick6->Visible=false;
                color = 2;
                counter--;
        }
        if(collision(ball2, brick7) && brick7->Visible == true){
                a=-a;
                b=-b;
                brick7->Visible=false;
                color = 1;
                counter--;
        }
        if(collision(ball2, brick8) && brick8->Visible == true){
                a=-a;
                b=-b;
                brick8->Visible=false;
                color = 4;
                counter--;
        }
        if(collision(ball2, brick9) && brick9->Visible == true){
                a=-a;
                b=-b;
                brick9->Visible=false;
                color = 3;
                counter--;
        }
        if(collision(ball2, brick10) && brick10->Visible == true){
                a=-a;
                b=-b;
                brick10->Visible=false;
                color = 5;
                counter--;
        }
        if(collision(ball2, brick11) && brick11->Visible == true){
                a=-a;
                b=-b;
                brick11->Visible=false;
                color = 1;
                counter--;
        }
        if(collision(ball2, brick12) && brick12->Visible == true){
                a=-a;
                b=-b;
                brick12->Visible=false;
                color = 5;
                counter--;
        }
        if(collision(ball2, brick13) && brick13->Visible == true){
                a=-a;
                b=-b;
                brick13->Visible=false;
                color = 1;
                counter--;

                if(ball_timer->Enabled == false){
                        ball_timer->Enabled = true;
                        ball->Visible = true;
                        ball->Left = 200;
                        ball->Top = 200;
                }
        }
        if(collision(ball2, brick14) && brick14->Visible == true){
                a=-a;
                b=-b;
                brick14->Visible=false;
                color = 5;
                counter--;
        }
        if(collision(ball2, brick15) && brick15->Visible == true){
                a=-a;
                b=-b;
                brick15->Visible=false;
                color = 2;
                counter--;
        }
        if(collision(ball2, brick16) && brick16->Visible == true){
                a=-a;
                b=-b;
                brick16->Visible=false;
                color = 4;
                counter--;
        }
        if(collision(ball2, brick17) && brick17->Visible == true){
                a=-a;
                b=-b;
                brick17->Visible=false;
                color = 3;
                counter--;
        }
        if(collision(ball2, brick18) && brick18->Visible == true){
                a=-a;
                b=-b;
                brick18->Visible=false;
                color = 2;
                counter--;
        }
        if(collision(ball2, brick19) && brick19->Visible == true){
                a=-a;
                b=-b;
                brick19->Visible=false;
                color = 1;
                counter--;
        }
        if(collision(ball2, brick20) && brick20->Visible == true){
                a=-a;
                b=-b;
                brick20->Visible=false;
                color = 5;
                counter--;
        }

        switch(color){
                case 1: {
                        //background->Picture->LoadFromFile("pictures/pinkbackground.bmp");
                        ball->Picture->LoadFromFile("pictures/pinkball.bmp");
                        ball2->Picture->LoadFromFile("pictures/pinkball.bmp");
                        paddle->Picture->LoadFromFile("pictures/pinkpaddle.bmp");
                        break;
                }
                case 2: {
                        //background->Picture->LoadFromFile("pictures/bluebackground.bmp");
                        ball->Picture->LoadFromFile("pictures/blueball.bmp");
                        ball2->Picture->LoadFromFile("pictures/blueball.bmp");
                        paddle->Picture->LoadFromFile("pictures/bluepaddle.bmp");
                        break;
                }
                case 3: {
                        //background->Picture->LoadFromFile("pictures/greenbackground.bmp");
                        ball->Picture->LoadFromFile("pictures/greenball.bmp");
                        ball2->Picture->LoadFromFile("pictures/greenball.bmp");
                        paddle->Picture->LoadFromFile("pictures/greenpaddle.bmp");
                        break;
                }
                case 4: {
                        //background->Picture->LoadFromFile("pictures/redbackground.bmp");
                        ball->Picture->LoadFromFile("pictures/redball.bmp");
                        ball2->Picture->LoadFromFile("pictures/redball.bmp");
                        paddle->Picture->LoadFromFile("pictures/redpaddle.bmp");
                        break;
                }
                case 5: {
                        //background->Picture->LoadFromFile("pictures/yellowbackground.bmp");
                        ball->Picture->LoadFromFile("pictures/yellowball.bmp");
                        ball2->Picture->LoadFromFile("pictures/yellowball.bmp");
                        paddle->Picture->LoadFromFile("pictures/yellowpaddle.bmp");
                        break;
                }

        }
}
//---------------------------------------------------------------------------


