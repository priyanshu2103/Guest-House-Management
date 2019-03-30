#pragma once

#include "UserControl_Mess_Rates.h"
using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;


namespace GuestHouseManagement {

	/// <summary>
	/// Summary for UserControl_Add_Mess
	/// </summary>
	public ref class UserControl_Add_Mess : public System::Windows::Forms::UserControl
	{
	public:
		Panel ^pnl;
		Panel ^pn2;
		Panel ^pn3;
		Panel ^pn4;
		Panel ^pn5;

		UserControl_Add_Mess(Panel ^testpanel1, Panel ^testpanel2, Panel ^testpanel3, Panel ^testpanel4, Panel ^testpanel5)
		{
			InitializeComponent();
			pnl = testpanel1;
			pn2 = testpanel2;
			pn3 = testpanel3;
			pn4 = testpanel4;
			pn5 = testpanel5;
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~UserControl_Add_Mess()
		{
			if (components)
			{
				delete components;
			}
		}
	internal: System::Windows::Forms::Button^  button3;
	protected: 
	internal: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	internal: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Panel^  Mess_Panel;
	internal: 

	internal: 
	private: 
	internal: 

	protected: 

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->Mess_Panel = (gcnew System::Windows::Forms::Panel());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->BeginInit();
			this->Mess_Panel->SuspendLayout();
			this->SuspendLayout();
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::OrangeRed;
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button3->Font = (gcnew System::Drawing::Font(L"Century Gothic", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button3->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button3->Location = System::Drawing::Point(55, 40);
			this->button3->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(133, 59);
			this->button3->TabIndex = 73;
			this->button3->Text = L"Mess Menu Pic Select";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &UserControl_Add_Mess::button3_Click);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::OrangeRed;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button1->Location = System::Drawing::Point(55, 320);
			this->button1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(133, 59);
			this->button1->TabIndex = 74;
			this->button1->Text = L"Save";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &UserControl_Add_Mess::button1_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Location = System::Drawing::Point(0, 0);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(548, 339);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 75;
			this->pictureBox1->TabStop = false;
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::OrangeRed;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button2->Font = (gcnew System::Drawing::Font(L"Century Gothic", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button2->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button2->Location = System::Drawing::Point(55, 168);
			this->button2->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(133, 59);
			this->button2->TabIndex = 76;
			this->button2->Text = L"Add Rates";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &UserControl_Add_Mess::button2_Click);
			// 
			// Mess_Panel
			// 
			this->Mess_Panel->Controls->Add(this->pictureBox1);
			this->Mess_Panel->Location = System::Drawing::Point(202, 40);
			this->Mess_Panel->Name = L"Mess_Panel";
			this->Mess_Panel->Size = System::Drawing::Size(548, 339);
			this->Mess_Panel->TabIndex = 77;
			// 
			// UserControl_Add_Mess
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->Controls->Add(this->Mess_Panel);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->button3);
			this->Name = L"UserControl_Add_Mess";
			this->Size = System::Drawing::Size(893, 400);
			this->Load += gcnew System::EventHandler(this, &UserControl_Add_Mess::UserControl_Add_Mess_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->EndInit();
			this->MouseEnter += gcnew System::EventHandler(this, &UserControl_Add_Mess::myMouseClick);
			this->Mess_Panel->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
				 this->Mess_Panel->Controls->Clear();
				 this->Mess_Panel->Controls->Add(this->pictureBox1);
				 OpenFileDialog ^ dialog=gcnew OpenFileDialog;
				 dialog->Title = "Browse Picture";
				 dialog->Filter = "Image Files(*.BMP;*.JPEG,*.JPG;*.GIF;*.PNG)|*.BMP;*.JPEG;*.JPG;*.GIF;*.PNG";
				 if(dialog->ShowDialog() == System::Windows::Forms::DialogResult::OK)
				 {
					 this->pictureBox1->Image = Image::FromFile(dialog->FileName);
				 }
			 }
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
				 String ^ name = "mess";
				 if(pictureBox1->Image)
				 {
					 try
					 {
						 Image ^ img = pictureBox1->Image;
						 img->Save(System::Windows::Forms::Application::StartupPath + "\\..\\Guest-House-Management\\image\\" + name + ".jpeg");
						 MessageBox::Show("Image added successfully","Notification");
					 }
					 catch(Exception ^ ex)
					 {
						 MessageBox::Show(ex->Message,"Warning");
					 }
				 }
			 }
	private: System::Void UserControl_Add_Mess_Load(System::Object^  sender, System::EventArgs^  e) {
			 }
	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
				 this->Mess_Panel->Controls->Clear();
				 this->Mess_Panel->Controls->Add(gcnew UserControl_Mess_Rates);
			 }
	private: System::Void myMouseClick(System::Object^  sender, System::EventArgs^  e) {
				 pnl->Size = System::Drawing::Size(168, 23);
				 pn2->Size = System::Drawing::Size(168, 23);
				 pn3->Size = System::Drawing::Size(168, 23);
				 pn4->Size = System::Drawing::Size(168, 23);
				 pn5->Size = System::Drawing::Size(168, 23);
			 }
	};
}