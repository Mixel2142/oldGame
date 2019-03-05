#pragma once
#pragma comment(lib,"WinMM.lib")
#include <stdlib.h>
#include <iostream>
#include <conio.h>
#include <windows.h>
#include <mmsystem.h>


namespace »грулькаЅл€ть {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	/// <summary>
	/// —водка дл€ MyForm
	
	/// </summary>
	
public  ref class MyForm : public System::Windows::Forms::Form
	{
	

	
		bool soundover = true;
		bool aniswitch = false;
		int xplayer = 50, yplayer=50;
		int	rn;
		int	kolperecevil = 2 ;
		int **a = new int*[kolperecevil];
		int	kolcapusta= 10;
		int **b = new int*[kolcapusta];
		int animover = 0;
		int napravlenie = 1;///
		int sec = 0;
		int	secanim = 1;
	 int Xplayer = 50;//глобальные переменные
     int Yplayer = 50;//

	
	private: System::Windows::Forms::Timer^  timer2;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Timer^  timer3;
	
	public: Bitmap^player1;// фото дл€ загрузки в pictureBox1
	public: Bitmap^perecevil;// фото дл€ загрузки в pictureBox1
	public: Bitmap^capusta;// фото дл€ загрузки в pictureBox1
	private: System::Windows::Forms::Timer^  timer4;
	private: System::Windows::Forms::Timer^  timer5;
	private: System::Windows::Forms::Timer^  timer6;
	

	
	private: System::Windows::Forms::Timer^  timer1;
	
	
	public:MyForm(void)
		{

			
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}
	public:	void Work()
		{
			
			
		}

	protected:
		/// <summary>
		/// ќсвободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::ComponentModel::IContainer^  components;
	

	private:
		/// <summary>
		/// ќб€зательна€ переменна€ конструктора.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// “ребуемый метод дл€ поддержки конструктора Ч не измен€йте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->timer2 = (gcnew System::Windows::Forms::Timer(this->components));
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->timer3 = (gcnew System::Windows::Forms::Timer(this->components));
			this->timer4 = (gcnew System::Windows::Forms::Timer(this->components));
			this->timer5 = (gcnew System::Windows::Forms::Timer(this->components));
			this->timer6 = (gcnew System::Windows::Forms::Timer(this->components));
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::SystemColors::MenuHighlight;
			this->button1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button1.BackgroundImage")));
			this->button1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->button1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button1->FlatAppearance->BorderColor = System::Drawing::Color::Blue;
			this->button1->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Blue;
			this->button1->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button1->ForeColor = System::Drawing::Color::Fuchsia;
			this->button1->Location = System::Drawing::Point(501, 241);
			this->button1->Margin = System::Windows::Forms::Padding(2);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(426, 287);
			this->button1->TabIndex = 0;
			this->button1->TabStop = false;
			this->button1->UseVisualStyleBackColor = false;
			this->button1->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::button1_MouseClick);
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::Color::Lime;
			this->pictureBox1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.BackgroundImage")));
			this->pictureBox1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->pictureBox1->Enabled = false;
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(0, 0);
			this->pictureBox1->Margin = System::Windows::Forms::Padding(0);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(1164, 733);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox1->TabIndex = 1;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Visible = false;
			this->pictureBox1->KeyUp += gcnew System::Windows::Forms::KeyEventHandler(this, &MyForm::MyForm_KeyDown);
			this->pictureBox1->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &MyForm::MyForm_KeyDown);
			this->pictureBox1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::pictureBox1_Paint);
			// 
			// timer1
			// 
			this->timer1->Interval = 250;
			this->timer1->Tick += gcnew System::EventHandler(this, &MyForm::timer1_Tick);
			// 
			// timer2
			// 
			this->timer2->Interval = 450;
			this->timer2->Tick += gcnew System::EventHandler(this, &MyForm::timer2_Tick);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::Transparent;
			this->button2->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button2->Enabled = false;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button2.Image")));
			this->button2->Location = System::Drawing::Point(852, 13);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(300, 103);
			this->button2->TabIndex = 2;
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Visible = false;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// timer3
			// 
			this->timer3->Tick += gcnew System::EventHandler(this, &MyForm::timer3_Tick);
			// 
			// timer4
			// 
			this->timer4->Interval = 5;
			this->timer4->Tick += gcnew System::EventHandler(this, &MyForm::timer4_Tick);
			// 
			// timer5
			// 
			this->timer5->Interval = 5;
			this->timer5->Tick += gcnew System::EventHandler(this, &MyForm::timer5_Tick);
			// 
			// timer6
			// 
			this->timer6->Interval = 10;
			this->timer6->Tick += gcnew System::EventHandler(this, &MyForm::timer6_Tick);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoSize = true;
			this->BackColor = System::Drawing::SystemColors::MenuHighlight;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->CausesValidation = false;
			this->ClientSize = System::Drawing::Size(1164, 733);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->pictureBox1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->KeyPreview = true;
			this->Name = L"MyForm";
			this->Text = L"»грул€ дл€ Ћенули";
			this->WindowState = System::Windows::Forms::FormWindowState::Maximized;
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::pictureBox1_Paint);
			this->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &MyForm::MyForm_KeyDown);
			this->KeyUp += gcnew System::Windows::Forms::KeyEventHandler(this, &MyForm::MyForm_KeyUp);
			//(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void MyForm_Load(System::Object^  sender, System::EventArgs^  e) {
		PlaySound(TEXT("MENU.WAV"), NULL, SND_FILENAME | SND_ASYNC|SND_LOOP);


	}
	public: System::Void button1_MouseClick(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
		
		PlaySound(NULL, NULL, SND_ASYNC);
		for (int i = 1; i < kolcapusta;i++)
		{
			b[i] = new int[4];
		}

		for (int i = 1; i < kolcapusta; i++)
		{
			b[i][0] = 1;
			rn = 5 + rand() % 16;if (rn % 2 != 0)rn--;else;
			b[i][1] = rn * 50;
			rn = 5 + rand() % 8;if (rn % 2 != 0)rn--;else;
			b[i][2] = rn * 50;
			b[i][3] = 0;
		}

		
		for (int i = 1; i < kolperecevil;i++)
		{
			a[i] = new int[3];
		}

		for (int i = 1; i < kolperecevil; i++)
		{
			rn = 5 + rand() % 16;if (rn % 2 != 0)rn--;else;
				a[i][1] = rn * 50 ;
			rn = 5 + rand() % 9;if (rn % 2 != 0)rn--;else;
				a[i][2] =  rn * 50;
		}
		pictureBox1->Visible = true;
		button1->Visible = false;
		this->timer1->Enabled = true;
		this->timer2->Enabled = true;
		this->timer3->Enabled = true;
		this->timer4->Enabled = true;
		this->timer5->Enabled = true;
		this->timer6->Enabled = true;
	}

	public: void Bitmen() {

		
	}
	



		 public: System::Void pictureBox1_Paint(System::Object^  sender, System::Windows::Forms::PaintEventArgs^e) {

			 
			 
			
			


		 }

				
					



	private: virtual System::Void MyForm_KeyDown(System::Object^  sender, System::Windows::Forms::KeyEventArgs^  e) sealed {

		if (secanim == sec) {
			Bitmap^bmp = gcnew Bitmap(1366, 768);//битова€ карта дл€ закреплени€ к picturebox
			Graphics^g1 = Graphics::FromImage(bmp);// холст дл€ рисовани€
			pictureBox1->Image = bmp; // закрепление к picturebox1
			perecevil = gcnew Bitmap("perecevil.png");


			if (animover < 4) {
				switch (e->KeyValue)
				{
				case 65: case 37: if (Xplayer > 50) { player1 = gcnew Bitmap("player1Ljump.png"); g1->DrawImage(player1, Xplayer, Yplayer);Xplayer = Xplayer - 80;napravlenie = 4;break; }player1 = gcnew Bitmap("player1stop.png"); g1->DrawImage(player1, Xplayer, Yplayer);napravlenie = 5;break;// left влево
				case 83: case 40: if (Yplayer < 520) { player1 = gcnew Bitmap("player1jump.png"); g1->DrawImage(player1, Xplayer, Yplayer);Yplayer = Yplayer + 80;napravlenie = 1; break; }player1 = gcnew Bitmap("player1stop.png"); g1->DrawImage(player1, Xplayer, Yplayer);napravlenie = 5;break;// duwn  вниз
				case 87: case 38: if (Yplayer > 50) { player1 = gcnew Bitmap("player1spinajump.png"); g1->DrawImage(player1, Xplayer, Yplayer);Yplayer = Yplayer - 80;napravlenie = 2;break; }player1 = gcnew Bitmap("player1stop.png"); g1->DrawImage(player1, Xplayer, Yplayer);napravlenie = 5;break;//up  вверх
				case 68: case 39: if (Xplayer < 1120) { player1 = gcnew Bitmap("player1Rjump.png");g1->DrawImage(player1, Xplayer, Yplayer);	Xplayer = Xplayer + 80;napravlenie = 3; break; }player1 = gcnew Bitmap("player1stop.png"); g1->DrawImage(player1, Xplayer, Yplayer);napravlenie = 5;break;//R право

				default: napravlenie = 1; break;
				}
				rn = 1 + rand() % 5;

				if (rn == 1)
				{
					perecevil = gcnew Bitmap("perecevilplamya.png");
					for (int i = 1; i < kolperecevil; i++)
					{
						rn = 1 + rand() % 3;
						if (rn == 1)rn = 25;else if (rn == 2) rn = 15;else if (rn == 3)rn = 15;

						if ((abs(Xplayer - a[i][1]) < 500) && (abs(Yplayer - a[i][2]) < 500)) { if (Xplayer > a[i][1]) a[i][1] += rn; else a[i][1] -= rn; }
						else {
							rn = 1 + rand() % 6;
							switch (rn)
							{
							case 1: if (a[i][1] > 50)a[i][1] -= 25;else a[i][1] += 25;break;
							case 3: if (a[i][1] < 1100)a[i][1] += 25;else a[i][1] -= 25;break;
							case 2: if (a[i][2] < 550)a[i][2] += 25;else a[i][2] -= 25;break;
							case 4: if (a[i][2] > 50)a[i][2] -= 25;else a[i][2] += 25;break;
							default:break;
							}
						}
						rn = 1 + rand() % 3;
						if (rn == 1)rn = 15;else if (rn == 2) rn = 50;else if (rn == 3)rn = 25;

						if ((abs(Xplayer - a[i][1]) < 500) && (abs(Yplayer - a[i][2]) < 500)) { if (Xplayer > a[i][2]) a[i][2] += rn; else a[i][2] -= rn; }
						g1->DrawImage(perecevil, a[i][1], a[i][2]);

					}


				}
				else;
				for (int i = 1; i < kolperecevil; i++)
				{
					g1->DrawImage(perecevil, a[i][1], a[i][2]);

				}








			}
			rn = 20;
			for (int i = 1; i < kolcapusta; i++)
			{
				if (b[i][0] == 1) {
					if (((abs(Xplayer - b[i][1]) < 300) && (abs(Yplayer - b[i][2]) < 300)))
					{


						if (Yplayer < b[i][2] && b[i][2] < 530) { b[i][2] += rn;capusta = gcnew Bitmap("capustarunL.png"); }
						else	if (b[i][2] > 50) { b[i][2] -= rn;capusta = gcnew Bitmap("capustarunspina.png"); }
						else { capusta = gcnew Bitmap("capustawarning.png"); goto l20; }
						if (Xplayer < b[i][1] && b[i][1] < 1120) { b[i][1] += rn;capusta = gcnew Bitmap("capustarunL.png"); }
						else if (b[i][1] > 50) { b[i][1] -= rn;capusta = gcnew Bitmap("capustarunR.png"); }
						else { capusta = gcnew Bitmap("capustawarning.png"); goto l20; }

					}
					else capusta = gcnew Bitmap("capustadream2.png");
				}
				else  capusta = gcnew Bitmap("capustaover.png");

			l20:

				g1->DrawImage(capusta, b[i][1], b[i][2]);


			}
			sec++;
		}

		
		
	}
			


		 private: System::Void timer2_Tick(System::Object^  sender, System::EventArgs^  e) {
			 secanim = sec;sec = secanim;
		 }

private: System::Void timer1_Tick(System::Object^  sender, System::EventArgs^  e) {
	
	Bitmap^bmp = gcnew Bitmap(1366, 768);//битова€ карта дл€ закреплени€ к picturebox
	Graphics^g1 = Graphics::FromImage(bmp);// холст дл€ рисовани€
	pictureBox1->Image = bmp; // закрепление к picturebox1
	

	
	

	/////////////////////////////////////////////////////////////////////////////////////злой злой перец

	perecevil = gcnew Bitmap("perecevil.png");









	/////////////////////////////////////////////////////////////////////////////////// злой перец

	int rn;
	
	for (int i = 1; i < kolperecevil;i++)
	{
		
		if ((abs(Xplayer - a[i][1]) < 70) && (abs(Yplayer - a[i][2]) < 70))goto l1;
		
			//≈сли за€ц на месте перца;
	} 
	if(animover > 0)
	{
		l1:
		animover++;

		if (animover == 1) { player1 = gcnew Bitmap("player1overplamya1.png");g1->DrawImage(player1, Xplayer, Yplayer); }
		else;
		if(animover == 2){player1 = gcnew Bitmap("player1overplamya2.png");g1->DrawImage(player1, Xplayer, Yplayer);}
		else;
		if (animover == 3) { player1 = gcnew Bitmap("player1overplamya3.png");g1->DrawImage(player1, Xplayer, Yplayer); }
		else;
		if (animover >= 4)
		{ player1 = gcnew Bitmap("player1overplamya4.png");g1->DrawImage(player1, Xplayer, Yplayer); 
		perecevil = gcnew Bitmap("gameover.png");g1->DrawImage(perecevil, 250, 200);
		button2->Enabled = true;
		button2->Visible = true;
		
		}
		else;
		
	}

	else//≈сли за€ц на месте перца (иначе)
	{
		switch (napravlenie)
		{

		case 1: rn = 1 + rand() % 12;  switch (rn) {
		case 1:	case 5:	case 4:	case 6:		player1 = gcnew Bitmap("player2.png");break;// загрузка фото
		case 2:		player1 = gcnew Bitmap("player1.png");break;// загрузка фото
		case 3:		player1 = gcnew Bitmap("player3.png");break;// загрузка фото	
		default:						player1 = gcnew Bitmap("player1.png");break;// загрузка фото
		}break;

		case 2: rn = 1 + rand() % 2; switch (rn)
		{
		case 1:				player1 = gcnew Bitmap("player1spina.png");break;// загрузка фото
		case 2: 			player1 = gcnew Bitmap("player2spina.png");break;// загрузка фото 
		default:						player1 = gcnew Bitmap("player2spina.png");break;// загрузка фото
		}break;

		case 3:  rn = 1 + rand() % 2;  switch (rn)
		{
		case 1:				player1 = gcnew Bitmap("player1R.png");break;// загрузка фото 
		case 2:				player1 = gcnew Bitmap("player2R.png");break;// загрузка фото 
		default:						player1 = gcnew Bitmap("player2R.png");break;// загрузка фото
		}break;

		case 4: 	 rn = 1 + rand() % 2;  switch (rn)
		{
		case 1:				player1 = gcnew Bitmap("player1L.png");break;// загрузка фото 
		case 2:					player1 = gcnew Bitmap("player2L.png");break;// загрузка фото
		default:						player1 = gcnew Bitmap("player2L.png");break;// загрузка фото
		}break;

		case 5:player1 = gcnew Bitmap("player2stop.png");break;



		default:		break;

		}

		rn = 1 + rand() % 3;

		if (rn == 1)
		{
			perecevil = gcnew Bitmap("perecevilplamya.png");
			for (int i = 1; i < kolperecevil; i++)
			{
				rn = 1 + rand() % 3;
				if (rn == 1)rn = 15;else if (rn == 2) rn = 50;else if (rn == 3)rn = 25;

				if ((abs(Xplayer - a[i][1]) < 500) && (abs(Yplayer - a[i][2]) < 500)) { if (Xplayer > a[i][1]) a[i][1] += rn; else a[i][1] -= rn; }
				else {
					rn = 1 + rand() % 4;
					switch (rn)
					{
					case 1: if (a[i][1] > 50)a[i][1] -= 25;break;
					case 3: if (a[i][1] < 1100)a[i][1] += 25;break;
					case 2: if (a[i][2] < 550)a[i][2] += 25;break;
					case 4: if (a[i][2] > 50)a[i][2] -= 25;break;
					default:break;
					}
				}//забиваетс€ в угол исправить!!!!
				rn = 1 + rand() % 3;
				if (rn == 1)rn = 15;else if (rn == 2) rn = 25;else if (rn == 3)rn = 25;

				if ((abs(Xplayer - a[i][1]) < 500) && (abs(Yplayer - a[i][2]) < 500)) { if (Yplayer > a[i][2]) a[i][2] += rn; else a[i][2] -= rn; }//500 это расто€ние между мобом и игроком

				g1->DrawImage(perecevil, a[i][1], a[i][2]);
				
				
			}

			
		}
		else;
		for (int i = 1; i < kolperecevil; i++)
		{
			g1->DrawImage(perecevil, a[i][1], a[i][2]);

		}
	
	}//≈сли за€ц на месте перца;
	


	g1->DrawImage(player1, Xplayer, Yplayer);
	
	rn = 20;
	for (int i = 1; i < kolcapusta; i++)
	{
		
		if (b[i][0] == 1) {
			if (((abs(Xplayer - b[i][1]) < 300) && (abs(Yplayer - b[i][2]) < 300)))
			{

				if (Yplayer > b[i][2] && b[i][2] > 50) { b[i][2] -= rn;capusta = gcnew Bitmap("capustarunspina.png"); }
				else if (b[i][2] < 530) { b[i][2] += rn;capusta = gcnew Bitmap("capustarunL.png"); }
				else if (aniswitch == true) { capusta = gcnew Bitmap("capustawarning.png"); goto l10; }
				if (Xplayer > b[i][1] && b[i][1] > 50) { b[i][1] -= rn;capusta = gcnew Bitmap("capustarunR.png"); }
				else if (b[i][1] < 1120) { b[i][1] += rn;capusta = gcnew Bitmap("capustarunL.png"); }
				else capusta = gcnew Bitmap("capustawarning.png");



			}
			else
			{
				if (aniswitch == true) { capusta = gcnew Bitmap("capustadream2.png");aniswitch = false;goto l10; }
				if (aniswitch == false) { capusta = gcnew Bitmap("capustadream1.png");aniswitch = true; }
			}



		}

		else  capusta = gcnew Bitmap("capustaover1.png");

	l10:


		g1->DrawImage(capusta, b[i][1], b[i][2]);


	}
}




private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
	button2->Visible = false;
	button2->Enabled = false;
	button1->Visible = true;
	pictureBox1->Visible = false;
	animover = 0;Xplayer = Yplayer = 50;
	for (int i = 1; i < kolperecevil; i++)
	{
		rn = 5 + rand() % 16;if (rn % 2 != 0)rn--;else;
		a[i][1] = rn * 50;
		rn = 5 + rand() % 10;if (rn % 2 != 0)rn--;else;
		a[i][2] = rn * 50;
	}
	this->timer1->Enabled = false;
	this->timer2->Enabled = false;
	this->timer3->Enabled = false;
	this->timer4->Enabled = false;
	this->timer5->Enabled = false;
	this->timer6->Enabled = false;
	soundover = true ;
	PlaySound(TEXT("MENU.WAV"), NULL, SND_FILENAME | SND_ASYNC | SND_LOOP);
}

private: System::Void timer3_Tick(System::Object^  sender, System::EventArgs^  e) {

	
	int capover = 0, rn = 0 + rand() % 2;
	for (int i = 1; i < kolcapusta; i++) if (b[i][0] == 0)capover++;
	if (capover == kolcapusta - 1) 
	{
		Bitmap^bmp = gcnew Bitmap(1366, 768);//битова€ карта дл€ закреплени€ к picturebox
		Graphics^g1 = Graphics::FromImage(bmp);// холст дл€ рисовани€
		pictureBox1->Image = bmp; // закрепление к picturebox1
		this->timer1->Enabled = false;
		this->timer2->Enabled = false;
		sec++;

		if(rn ==0)player1 = gcnew Bitmap("player1Vzyalpereclimon.png");
		if (rn == 1)player1 = gcnew Bitmap("player1Vzyalperecred.png");
		if (rn == 2)player1 = gcnew Bitmap("player1Vzyalperecblue.png");
		
		
		g1->DrawImage(player1, Xplayer, Yplayer);
	
	}
	
}



private: System::Void MyForm_KeyUp(System::Object^  sender, System::Windows::Forms::KeyEventArgs^  e) {




}





private: System::Void timer4_Tick(System::Object^  sender, System::EventArgs^  e) {
	
	if (secanim != sec) {

		for (int i = 1; i < kolcapusta; i++)
		{
			if ((abs(Xplayer - b[i][1]) < 70) && (abs(Yplayer - b[i][2]) < 70)) {
				b[i][0] = 0; if (b[i][3] == 0) { PlaySound(TEXT("capustaover.wav"), NULL, SND_FILENAME | SND_ASYNC);b[i][3] = 1; }
				else { PlaySound(TEXT("fu.WAV"), NULL, SND_FILENAME | SND_ASYNC);b[i][2] = b[i][2] + 1000; b[i][1] = b[i][1] + 1000;}
			}
		}
	}

}


private: System::Void timer5_Tick(System::Object^  sender, System::EventArgs^  e) {
	
	if (animover > 4 && soundover == true) { PlaySound(TEXT("gameover.WAV"), NULL, SND_FILENAME | SND_ASYNC); soundover = false;}
	if (Xplayer != xplayer) { PlaySound(TEXT("jump.WAV"), NULL, SND_FILENAME | SND_ASYNC);xplayer = Xplayer; }
	if (Yplayer != yplayer) { PlaySound(TEXT("jump.WAV"), NULL, SND_FILENAME | SND_ASYNC);yplayer = Yplayer; }

}

private: System::Void timer6_Tick(System::Object^  sender, System::EventArgs^  e) {
	int capover = 0;
	for (int i = 1; i < kolcapusta; i++) if (b[i][0] == 0)capover++;
	if (capover == kolcapusta - 1)
	{
		PlaySound(TEXT("chempion.WAV"), NULL, SND_FILENAME | SND_ASYNC );
	}


}
};
}
