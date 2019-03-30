#pragma once
#using <System.dll>
#using <System.data.dll>
#include <cliext/vector>
#include<string.h>
#include<ctype.h>

using namespace std;
using namespace System;
using namespace System::Diagnostics;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;
using namespace System::Data::OleDb;
using namespace System::Collections::Generic;

namespace GuestHouseManagement {

	/// <summary>
	/// Summary for UserControl_Staff_Housekeeping_Approval
	/// </summary>
	public ref class UserControl_Staff_Housekeeping_Approval : public System::Windows::Forms::UserControl
	{
	public:
		Panel ^pnl;
		Panel ^pn2;
		Panel ^pn3;
		Panel ^pn4;
		Panel ^pn5;

		UserControl_Staff_Housekeeping_Approval(Panel ^testpanel1, Panel ^testpanel2, Panel ^testpanel3, Panel ^testpanel4, Panel ^testpanel5)
		{
			InitializeComponent();
			pnl = testpanel1;
			pn2 = testpanel2;
			pn3 = testpanel3;
			pn4 = testpanel4;
			pn5 = testpanel5;
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~UserControl_Staff_Housekeeping_Approval()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label1;
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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(100, 14);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(441, 29);
			this->label1->TabIndex = 0;
			this->label1->Text = L"House Keeping Requests Resolution";
			// 
			// UserControl_Staff_Housekeeping_Approval
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoScroll = true;
			this->Controls->Add(this->label1);
			this->Name = L"UserControl_Staff_Housekeeping_Approval";
			this->Size = System::Drawing::Size(682, 553);
			this->Load += gcnew System::EventHandler(this, &UserControl_Staff_Housekeeping_Approval::UserControl_Staff_Housekeeping_Approval_Load);
			this->MouseEnter += gcnew System::EventHandler(this, &UserControl_Staff_Housekeeping_Approval::eneterm);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		static int n = 0;

		void finish_button_click(System::Object^  sender, System::EventArgs^  e)
		{
			Button^ btn = gcnew Button();
			btn = static_cast<Button^>(sender);
			int x = static_cast<int>(btn->Tag);
			String ^room_number;

			OleDb::OleDbConnection ^ DB_Connection = gcnew OleDb::OleDbConnection();
			DB_Connection->ConnectionString = "Provider=Microsoft.ACE.OLEDB.12.0;Data Source=GuestHouse.accdb";

			DB_Connection->Open();
			String ^ getroomNo = "Select * from [House_Keeping_Request] where [Request_Status] = 'NO';";
			OleDb::OleDbCommand ^ cmd = gcnew OleDbCommand(getroomNo, DB_Connection);
			OleDbDataReader ^ room_data = cmd->ExecuteReader();
			cliext::vector<String^> vec;
			while(room_data->Read() == true)
			{
				room_number = room_data->GetString(2);
				vec.push_back(room_number);
			}
			DB_Connection->Close();

			//---------UPDATING ROOM STATUS---------------//
			DB_Connection->Open();
			String ^ updateRoomStatus = "UPDATE [House_Keeping_Request] SET [Request_Status] = 'YES' Where [Room_No] = '"+ room_number +"' ;";
			cmd = gcnew OleDbCommand(updateRoomStatus, DB_Connection);
			cmd->ExecuteNonQuery();
			DB_Connection->Close();

			//--------DISPLAYING THE MESSAGE-------------//
			MessageBox::Show("Request approved");
			UserControl_Staff_Housekeeping_Approval_Load(sender,e);

		}

	private: System::Void UserControl_Staff_Housekeeping_Approval_Load(System::Object^  sender, System::EventArgs^  e) {
				 for (int i=1;i<=n;i++)
				 {
					 Control ^temp2 = this->Controls["TextBox"+(i)];
					 Controls->Remove(temp2);
					 Control ^temp3 = this->Controls["btnFin"+(i)];
					 Controls->Remove(temp3);
				 }

				 OleDb::OleDbConnection ^ DB_Connection = gcnew OleDb::OleDbConnection();
				 DB_Connection->ConnectionString = "Provider=Microsoft.ACE.OLEDB.12.0;Data Source=GuestHouse.accdb";
				 DB_Connection->Open();

				 String ^ getUsers = "Select * from House_Keeping_Request where [Request_Status] = 'NO' ";
				 //MessageBox::Show(getUsers);
				 OleDb::OleDbCommand ^ cmd = gcnew OleDbCommand(getUsers, DB_Connection);
				 OleDbDataReader ^ users_data = cmd->ExecuteReader();

				 int i=0;
				 //n=0;
				 while(users_data->Read() == true)
				 {
					 n=n+1;
					 i=i+1;
					 TextBox ^tb = gcnew TextBox();
					 tb->Text = users_data->GetString(1) + "\r\n" + users_data->GetString(2) + "\r\n" + users_data->GetString(3);
					 //MessageBox::Show(tb->Text);
					 tb->Location = System::Drawing::Point(20,140*i);
					 tb->Width = 200;
					 tb->Height = 100;
					 tb->Name = "TextBox" + i;
					 tb->Multiline = true;
					 tb->ReadOnly = true;
					 tb->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
					 this->Controls->Add(tb);

					 Button ^ btnFinish = gcnew Button();
					 btnFinish->Width = 120;
					 btnFinish->Height = 80;
					 btnFinish->Name = "btnFin" + i;
					 btnFinish->Tag = users_data->GetInt32(0);
					 btnFinish->Text = "Finished";
					 btnFinish->Location = System::Drawing::Point(320,140*i);
					 btnFinish->Click += gcnew System::EventHandler(this,&UserControl_Staff_Housekeeping_Approval::finish_button_click);
					 this->Controls->Add(btnFinish);
				 }
				 DB_Connection->Close();
			 }
	private: System::Void eneterm(System::Object^  sender, System::EventArgs^  e) {
				 pnl->Size = System::Drawing::Size(168, 23);
				 pn2->Size = System::Drawing::Size(168, 23);
				 pn3->Size = System::Drawing::Size(168, 23);
				 pn4->Size = System::Drawing::Size(168, 23);
				 pn5->Size = System::Drawing::Size(168, 23);
			 }
};
}