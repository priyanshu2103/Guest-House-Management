#pragma once
#include <string>
#include "UserControl_Customer_Booking.h"
//#include "UserControl_User_Feedback.h"
//#include "UserControl_My_Bookings.h"
#include "UserControl_Customer_Book_Edit.h"
#include "UserControl_Customer_Housekeeping.h"
#include "UserControl_GuestHouseDetails.h"
#include "UserControl_In_Stay_Facilities.h"

namespace GuestHouseManagement {

	using namespace std;
	using namespace System;
	using namespace System::Diagnostics;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::OleDb;


	/// <summary>
	/// Summary for Form_Customer_Homepage
	/// </summary>
	public ref class Form_Customer_Homepage : public System::Windows::Forms::Form
	{
	public:
		String ^username_info;
	private: System::Windows::Forms::Button^  Button_Logout;
	public: 
		Form ^ gf;
		Form_Customer_Homepage(String ^user, Form ^ f1)
		{
			InitializeComponent();
			gf = f1;
			this->label1->Text="Welcome " + user;
			username_info=user;
			//String ^username_info;
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Form_Customer_Homepage()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  Button_Book;

	private: System::Windows::Forms::Button^  Button_Guest_House_Facilities;
	private: System::Windows::Forms::Button^  Button_Feedback;
	internal: System::Windows::Forms::Panel^  Output_Panel;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Button^  Button_My_Bookings;
	private: System::Windows::Forms::Button^  Button_House_Keeping;
	internal: 
	private: 
	protected: 

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
			this->Button_Book = (gcnew System::Windows::Forms::Button());
			this->Button_Guest_House_Facilities = (gcnew System::Windows::Forms::Button());
			this->Button_Feedback = (gcnew System::Windows::Forms::Button());
			this->Output_Panel = (gcnew System::Windows::Forms::Panel());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->Button_My_Bookings = (gcnew System::Windows::Forms::Button());
			this->Button_House_Keeping = (gcnew System::Windows::Forms::Button());
			this->Button_Logout = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// Button_Book
			// 
			this->Button_Book->Location = System::Drawing::Point(18, 47);
			this->Button_Book->Margin = System::Windows::Forms::Padding(2);
			this->Button_Book->Name = L"Button_Book";
			this->Button_Book->Size = System::Drawing::Size(154, 64);
			this->Button_Book->TabIndex = 0;
			this->Button_Book->Text = L"New Booking";
			this->Button_Book->UseVisualStyleBackColor = true;
			this->Button_Book->Click += gcnew System::EventHandler(this, &Form_Customer_Homepage::Button_Book_Click);
			// 
			// Button_Guest_House_Facilities
			// 
			this->Button_Guest_House_Facilities->Location = System::Drawing::Point(18, 130);
			this->Button_Guest_House_Facilities->Margin = System::Windows::Forms::Padding(2);
			this->Button_Guest_House_Facilities->Name = L"Button_Guest_House_Facilities";
			this->Button_Guest_House_Facilities->Size = System::Drawing::Size(154, 64);
			this->Button_Guest_House_Facilities->TabIndex = 2;
			this->Button_Guest_House_Facilities->Text = L"Guest House Facilities";
			this->Button_Guest_House_Facilities->UseVisualStyleBackColor = true;
			this->Button_Guest_House_Facilities->Click += gcnew System::EventHandler(this, &Form_Customer_Homepage::Button_Guest_House_Facilities_Click);
			// 
			// Button_Feedback
			// 
			this->Button_Feedback->Location = System::Drawing::Point(18, 383);
			this->Button_Feedback->Margin = System::Windows::Forms::Padding(2);
			this->Button_Feedback->Name = L"Button_Feedback";
			this->Button_Feedback->Size = System::Drawing::Size(154, 64);
			this->Button_Feedback->TabIndex = 3;
			this->Button_Feedback->Text = L"Feedback";
			this->Button_Feedback->UseVisualStyleBackColor = true;
			this->Button_Feedback->Click += gcnew System::EventHandler(this, &Form_Customer_Homepage::Button_Feedback_Click);
			// 
			// Output_Panel
			// 
			this->Output_Panel->BackColor = System::Drawing::Color::CornflowerBlue;
			this->Output_Panel->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->Output_Panel->Location = System::Drawing::Point(187, 13);
			this->Output_Panel->Margin = System::Windows::Forms::Padding(2);
			this->Output_Panel->Name = L"Output_Panel";
			this->Output_Panel->Size = System::Drawing::Size(746, 434);
			this->Output_Panel->TabIndex = 16;
			this->Output_Panel->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &Form_Customer_Homepage::Output_Panel_Paint);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(19, 24);
			this->label1->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(35, 13);
			this->label1->TabIndex = 17;
			this->label1->Text = L"label1";
			// 
			// Button_My_Bookings
			// 
			this->Button_My_Bookings->Location = System::Drawing::Point(18, 206);
			this->Button_My_Bookings->Margin = System::Windows::Forms::Padding(2);
			this->Button_My_Bookings->Name = L"Button_My_Bookings";
			this->Button_My_Bookings->Size = System::Drawing::Size(154, 64);
			this->Button_My_Bookings->TabIndex = 18;
			this->Button_My_Bookings->Text = L"My Bookings";
			this->Button_My_Bookings->UseVisualStyleBackColor = true;
			this->Button_My_Bookings->Click += gcnew System::EventHandler(this, &Form_Customer_Homepage::Button_My_Bookings_Click);
			// 
			// Button_House_Keeping
			// 
			this->Button_House_Keeping->Location = System::Drawing::Point(22, 296);
			this->Button_House_Keeping->Name = L"Button_House_Keeping";
			this->Button_House_Keeping->Size = System::Drawing::Size(154, 66);
			this->Button_House_Keeping->TabIndex = 19;
			this->Button_House_Keeping->Text = L"House Keeping";
			this->Button_House_Keeping->UseVisualStyleBackColor = true;
			this->Button_House_Keeping->Click += gcnew System::EventHandler(this, &Form_Customer_Homepage::Button_House_Keeping_Click);
			// 
			// Button_Logout
			// 
			this->Button_Logout->Location = System::Drawing::Point(18, 456);
			this->Button_Logout->Margin = System::Windows::Forms::Padding(2);
			this->Button_Logout->Name = L"Button_Logout";
			this->Button_Logout->Size = System::Drawing::Size(154, 64);
			this->Button_Logout->TabIndex = 21;
			this->Button_Logout->Text = L"Logout";
			this->Button_Logout->UseVisualStyleBackColor = true;
			this->Button_Logout->Click += gcnew System::EventHandler(this, &Form_Customer_Homepage::Button_Logout_Click);
			// 
			// Form_Customer_Homepage
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(941, 531);
			this->Controls->Add(this->Button_Logout);
			this->Controls->Add(this->Button_House_Keeping);
			this->Controls->Add(this->Button_My_Bookings);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->Output_Panel);
			this->Controls->Add(this->Button_Feedback);
			this->Controls->Add(this->Button_Guest_House_Facilities);
			this->Controls->Add(this->Button_Book);
			this->Margin = System::Windows::Forms::Padding(2);
			this->Name = L"Form_Customer_Homepage";
			this->Text = L"Form_Customer_Homepage";
			this->Load += gcnew System::EventHandler(this, &Form_Customer_Homepage::Form_Customer_Homepage_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Form_Customer_Homepage_Load(System::Object^  sender, System::EventArgs^  e) {
				 this->ControlBox = false;
				 gf->Hide();
			 }
	private: System::Void Output_Panel_Paint(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e) {
			 }
	private: System::Void Button_Book_Click(System::Object^  sender, System::EventArgs^  e) {
				 Output_Panel->Controls->Clear();
				 Output_Panel->Controls->Add(gcnew UserControl_Customer_Booking(username_info));
				 /*Form_Customer_Homepage ^form_custom = gcnew Form_Customer_Homepage(username);
				 form_custom->ShowDialog();*/
			 }
	private: System::Void Button_Feedback_Click(System::Object^  sender, System::EventArgs^  e) {
				 //Output_Panel->Controls->Clear();
				 //Output_Panel->Controls->Add(gcnew UserControl_User_Feedback);
			 }
private: System::Void Button_My_Bookings_Click(System::Object^  sender, System::EventArgs^  e) {
				 Output_Panel->Controls->Clear();
				 Output_Panel->Controls->Add(gcnew UserControl_Customer_Book_Edit(username_info));
				// Debug::WriteLine(Convert::ToDateTime("3-12-2019"));
		 }

private: System::Void Button_Cancel_Click(System::Object^  sender, System::EventArgs^  e) {
			 Output_Panel->Controls->Clear();
			 Output_Panel->Controls->Add(gcnew UserControl_Customer_Book_Edit(username_info));
		 }
private: System::Void Button_House_Keeping_Click(System::Object^  sender, System::EventArgs^  e) {
			 Output_Panel->Controls->Clear();
			 Output_Panel->Controls->Add(gcnew UserControl_Customer_Housekeeping(username_info));
		 }
private: System::Void Button_Logout_Click(System::Object^  sender, System::EventArgs^  e) {
			 gf->Close();
			 Application::Restart();
		 }
private: System::Void Button_Guest_House_Facilities_Click(System::Object^  sender, System::EventArgs^  e) {
			 Output_Panel->Controls->Clear();
			 Output_Panel->Controls->Add(gcnew UserControl_In_Stay_Facilities);
		 }
};
}
