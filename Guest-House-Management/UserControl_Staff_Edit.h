#pragma once

#using <System.dll>
#using <System.data.dll>
#include <string.h>
#include "Form_Edit_Staff_Details.h"
#include <cstdlib>
#include <ctype.h>


using namespace std;
using namespace System;
using namespace System::Diagnostics;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;
using namespace System::Data::OleDb;



namespace GuestHouseManagement {

	/// <summary>
	/// Summary for UserControl_Staff_Edit
	/// </summary>
	public ref class UserControl_Staff_Edit : public System::Windows::Forms::UserControl
	{
	public:
		UserControl_Staff_Edit(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~UserControl_Staff_Edit()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label1;
	protected: 
	private: System::Windows::Forms::TextBox^  Text_Search;
	private: System::Windows::Forms::ComboBox^  combo_Search;
	private: System::Windows::Forms::Button^  Button_Search;
	private: System::Windows::Forms::ListBox^  List_Search;
	private: System::Windows::Forms::ListBox^  ID_List;


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
			this->Text_Search = (gcnew System::Windows::Forms::TextBox());
			this->combo_Search = (gcnew System::Windows::Forms::ComboBox());
			this->Button_Search = (gcnew System::Windows::Forms::Button());
			this->List_Search = (gcnew System::Windows::Forms::ListBox());
			this->ID_List = (gcnew System::Windows::Forms::ListBox());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(269, 20);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(53, 17);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Search";
			// 
			// Text_Search
			// 
			this->Text_Search->Location = System::Drawing::Point(53, 85);
			this->Text_Search->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Text_Search->Name = L"Text_Search";
			this->Text_Search->Size = System::Drawing::Size(211, 22);
			this->Text_Search->TabIndex = 1;
			// 
			// combo_Search
			// 
			this->combo_Search->FormattingEnabled = true;
			this->combo_Search->Items->AddRange(gcnew cli::array< System::Object^  >(2) {L"By Name", L"By ID"});
			this->combo_Search->Location = System::Drawing::Point(365, 85);
			this->combo_Search->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->combo_Search->Name = L"combo_Search";
			this->combo_Search->Size = System::Drawing::Size(121, 24);
			this->combo_Search->TabIndex = 2;
			this->combo_Search->SelectedIndexChanged += gcnew System::EventHandler(this, &UserControl_Staff_Edit::combo_Search_SelectedIndexChanged);
			// 
			// Button_Search
			// 
			this->Button_Search->Location = System::Drawing::Point(596, 85);
			this->Button_Search->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Button_Search->Name = L"Button_Search";
			this->Button_Search->Size = System::Drawing::Size(80, 41);
			this->Button_Search->TabIndex = 3;
			this->Button_Search->Text = L"GO!";
			this->Button_Search->UseVisualStyleBackColor = true;
			this->Button_Search->Click += gcnew System::EventHandler(this, &UserControl_Staff_Edit::Button_Search_Click);
			// 
			// List_Search
			// 
			this->List_Search->FormattingEnabled = true;
			this->List_Search->ItemHeight = 16;
			this->List_Search->Location = System::Drawing::Point(111, 217);
			this->List_Search->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->List_Search->Name = L"List_Search";
			this->List_Search->Size = System::Drawing::Size(453, 148);
			this->List_Search->TabIndex = 4;
			this->List_Search->SelectedIndexChanged += gcnew System::EventHandler(this, &UserControl_Staff_Edit::List_Search_SelectedIndexChanged);
			// 
			// ID_List
			// 
			this->ID_List->FormattingEnabled = true;
			this->ID_List->ItemHeight = 16;
			this->ID_List->Location = System::Drawing::Point(665, 230);
			this->ID_List->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->ID_List->Name = L"ID_List";
			this->ID_List->Size = System::Drawing::Size(0, 4);
			this->ID_List->TabIndex = 5;
			// 
			// UserControl_Staff_Edit
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->Controls->Add(this->ID_List);
			this->Controls->Add(this->List_Search);
			this->Controls->Add(this->Button_Search);
			this->Controls->Add(this->combo_Search);
			this->Controls->Add(this->Text_Search);
			this->Controls->Add(this->label1);
			this->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Name = L"UserControl_Staff_Edit";
			this->Size = System::Drawing::Size(719, 389);
			this->Load += gcnew System::EventHandler(this, &UserControl_Staff_Edit::UserControl_Staff_Edit_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

		static int n = 0;
		static int m = 0;
	private: System::Void Button_Search_Click(System::Object^  sender, System::EventArgs^  e) {

				 //this->Controls->Remove(bt1);
				 //UserControl_Staff_Edit_Load(System::Object^  sender, System::EventArgs^  e);
				 for(int r=0;r<n;r++)
				 {
					 Control ^random = this->Controls["btnn1" + (r)];
					 Controls->Remove(random);
				 }

				 for(int r=0;r<m;r++)
				 {
					 Control ^random = this->Controls["btnnn1" + (r)];
					 Controls->Remove(random);
				 }


				 OleDb::OleDbConnection ^ DB_Connection = gcnew OleDb::OleDbConnection();
				 DB_Connection->ConnectionString = "Provider=Microsoft.ACE.OLEDB.12.0;Data Source=GuestHouse.accdb";
				 DB_Connection->Open();
				 List_Search->Items->Clear();

				 extern int joke[];
				 int  j = 0;
				 int count=0;
				 if(combo_Search->Text == "By Name")
				 {
					 String ^ input = Text_Search->Text;
					 String ^ query = "Select * From Staff_Register where Employee_Name like '%" + input + "%'";

					 OleDb::OleDbCommand ^ cmd = gcnew OleDbCommand(query, DB_Connection);

					 OleDbDataReader ^ user_data = cmd->ExecuteReader();
					 int i = 0;
					 n=0;
					 String ^ sname;
					 while(user_data->Read() == true)
					 {
						 count++;

						 sname=user_data->GetString(1);
						 joke[j]=user_data->GetInt32(0);
						 Button ^ bt1 = gcnew Button;
						 bt1->Text = sname;
						 bt1->Name = "btnn1" + (i);
						 bt1->Size = System::Drawing::Size(170,30);
						 bt1->Location = System::Drawing::Point(30,140 + 30*i);
						 i++;
						 n = n+1;
						 this->Controls->Add(bt1);
						 bt1->Click+=gcnew EventHandler(this,&UserControl_Staff_Edit::bt1_Click);
						 List_Search->Items->Add(sname + " - " + "ID(" + joke[j++] + ")");
					 }
					 DB_Connection->Close();
				 }
				 else
				 {
					 if(Text_Search->Text == "")
					 {
						 MessageBox::Show("Field must not be empty!", "Warning");
						 return;
					 }

					 String ^ str = Text_Search->Text;
					 for(int i=0;i<str->Length;i++)
					 {
						 if(!isdigit(str[i])) 
						 {
							 MessageBox::Show("Search by ID can contain only digits");
							 return; 
						 }
					 }
					 int ^ input = Convert::ToInt32(Text_Search->Text);
					 String ^ query = "Select * From Staff_Register where Employee_ID = " + input + ";";
					 OleDb::OleDbCommand ^ cmd = gcnew OleDbCommand(query, DB_Connection);
					 OleDbDataReader ^ user_data = cmd->ExecuteReader();
					 int i = 0;
					 m=0;
					 while(user_data->Read() == true)
					 {
						 count++;
						 List_Search->Items->Add(user_data->GetString(1));
						 joke[j]=Convert::ToInt32(input);
						 Button ^ bt1 = gcnew Button;
						 bt1->Text = user_data->GetString(1);
						 bt1->Size = System::Drawing::Size(170,30);
						 bt1->Name = "btnnn1" + (i);
						 m++;
						 bt1->Location = System::Drawing::Point(30,140 + 30*i);
						 i++;
						 this->Controls->Add(bt1);
						 bt1->Click+=gcnew EventHandler(this,&UserControl_Staff_Edit::bt1_Click);
					 }
					 DB_Connection->Close();
				 }
				 if(count==0)
				 {
					 MessageBox::Show("No search result found","Warning");
					 Text_Search->Clear();
				 }

			 }

	public: System::Void bt1_Click(System::Object^  sender, System::EventArgs^  e)
			{
				Button ^ bt1=(System::Windows::Forms::Button^) sender;
				int loc=bt1->Location.Y;

				// The error occurs when we scroll, because when we scroll, the location Y changes due to the scroll
				int scr=this->AutoScrollPosition.Y;
				//MessageBox::Show("scr=" + Convert::ToString(scr));
				int pos=(loc-140-scr)/30;
				extern int joke[];
				extern int S_ID;
				S_ID = joke[pos];
				//MessageBox::Show(Convert::ToString(S_ID));
				Form_Edit_Staff_Details ^ f2 = gcnew Form_Edit_Staff_Details();
				f2->ShowDialog();

			}

	private: System::Void List_Search_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
				 int  Index = List_Search->SelectedIndex;
				 extern int joke[];
				 extern int S_ID;
				 S_ID = joke[Index];
				 //MessageBox::Show(Convert::ToString(S_ID));
				 Form_Edit_Staff_Details ^ f2 = gcnew Form_Edit_Staff_Details();
				 f2->ShowDialog();
			 }


	private: System::Void UserControl_Staff_Edit_Load(System::Object^  sender, System::EventArgs^  e) {
				 List_Search->Visible  = false;
			 }
	private: System::Void combo_Search_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
			 }
	};
}