#pragma once
#include "Query.h"
#include "Utils.h"
#include <string>
#include <iostream>
#ifndef CUSTOMERS_FORM
#define CUSTOMERS_FORM

namespace POS {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for CustomersForm
	/// </summary>
	/// 
	public ref class CustomersForm : public System::Windows::Forms::Form
	{

	private:
		Query^ query;
	private: Bunifu::Framework::UI::BunifuFlatButton^ btnSave;
		   String^ id = "";
	public:
		CustomersForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			query = gcnew Query();
		}


		CustomersForm(String^ id, String^ name, String^ email, String^ phone, String^ address)
		{
			InitializeComponent();
			
			query = gcnew Query();

			txtName->Text = name;
			txtEmail->Text = email;
			txtPhone->Text = phone;
			txtAddress->Text = address;

			this->id = id;
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~CustomersForm()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:
	private: Bunifu::Framework::UI::BunifuMetroTextbox^ txtAddress;
	private: Bunifu::Framework::UI::BunifuMetroTextbox^ txtPhone;
	private: Bunifu::Framework::UI::BunifuMetroTextbox^ txtEmail;
	private: Bunifu::Framework::UI::BunifuCustomLabel^ Address;
	private: Bunifu::Framework::UI::BunifuCustomLabel^ Phone;
	private: Bunifu::Framework::UI::BunifuCustomLabel^ Email;
	private: Bunifu::Framework::UI::BunifuMetroTextbox^ txtName;
	private: Bunifu::Framework::UI::BunifuCustomLabel^ Name;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(CustomersForm::typeid));
			this->txtAddress = (gcnew Bunifu::Framework::UI::BunifuMetroTextbox());
			this->txtPhone = (gcnew Bunifu::Framework::UI::BunifuMetroTextbox());
			this->txtEmail = (gcnew Bunifu::Framework::UI::BunifuMetroTextbox());
			this->Address = (gcnew Bunifu::Framework::UI::BunifuCustomLabel());
			this->Phone = (gcnew Bunifu::Framework::UI::BunifuCustomLabel());
			this->Email = (gcnew Bunifu::Framework::UI::BunifuCustomLabel());
			this->txtName = (gcnew Bunifu::Framework::UI::BunifuMetroTextbox());
			this->Name = (gcnew Bunifu::Framework::UI::BunifuCustomLabel());
			this->btnSave = (gcnew Bunifu::Framework::UI::BunifuFlatButton());
			this->SuspendLayout();
			// 
			// txtAddress
			// 
			this->txtAddress->BorderColorFocused = System::Drawing::Color::Blue;
			this->txtAddress->BorderColorIdle = System::Drawing::Color::Silver;
			this->txtAddress->BorderColorMouseHover = System::Drawing::Color::Blue;
			this->txtAddress->BorderThickness = 3;
			this->txtAddress->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->txtAddress->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F));
			this->txtAddress->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->txtAddress->isPassword = false;
			this->txtAddress->Location = System::Drawing::Point(220, 294);
			this->txtAddress->Margin = System::Windows::Forms::Padding(4);
			this->txtAddress->Name = L"txtAddress";
			this->txtAddress->Size = System::Drawing::Size(307, 32);
			this->txtAddress->TabIndex = 20;
			this->txtAddress->TextAlign = System::Windows::Forms::HorizontalAlignment::Left;
			// 
			// txtPhone
			// 
			this->txtPhone->BorderColorFocused = System::Drawing::Color::Blue;
			this->txtPhone->BorderColorIdle = System::Drawing::Color::Silver;
			this->txtPhone->BorderColorMouseHover = System::Drawing::Color::Blue;
			this->txtPhone->BorderThickness = 3;
			this->txtPhone->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->txtPhone->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F));
			this->txtPhone->ForeColor = System::Drawing::SystemColors::ButtonShadow;
			this->txtPhone->isPassword = false;
			this->txtPhone->Location = System::Drawing::Point(220, 214);
			this->txtPhone->Margin = System::Windows::Forms::Padding(4);
			this->txtPhone->Name = L"txtPhone";
			this->txtPhone->Size = System::Drawing::Size(310, 30);
			this->txtPhone->TabIndex = 19;
			this->txtPhone->Text = L"(000) 000-0000";
			this->txtPhone->TextAlign = System::Windows::Forms::HorizontalAlignment::Left;
			// 
			// txtEmail
			// 
			this->txtEmail->BorderColorFocused = System::Drawing::Color::Blue;
			this->txtEmail->BorderColorIdle = System::Drawing::Color::Silver;
			this->txtEmail->BorderColorMouseHover = System::Drawing::Color::Blue;
			this->txtEmail->BorderThickness = 3;
			this->txtEmail->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->txtEmail->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F));
			this->txtEmail->ForeColor = System::Drawing::SystemColors::ButtonShadow;
			this->txtEmail->isPassword = false;
			this->txtEmail->Location = System::Drawing::Point(217, 144);
			this->txtEmail->Margin = System::Windows::Forms::Padding(4);
			this->txtEmail->Name = L"txtEmail";
			this->txtEmail->Size = System::Drawing::Size(310, 32);
			this->txtEmail->TabIndex = 18;
			this->txtEmail->Text = L"ex: email@yahoo.com";
			this->txtEmail->TextAlign = System::Windows::Forms::HorizontalAlignment::Left;
			// 
			// Address
			// 
			this->Address->AutoSize = true;
			this->Address->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Address->Location = System::Drawing::Point(219, 258);
			this->Address->Name = L"Address";
			this->Address->Size = System::Drawing::Size(62, 20);
			this->Address->TabIndex = 17;
			this->Address->Text = L"Address";
			// 
			// Phone
			// 
			this->Phone->AutoSize = true;
			this->Phone->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Phone->Location = System::Drawing::Point(220, 192);
			this->Phone->Name = L"Phone";
			this->Phone->Size = System::Drawing::Size(51, 18);
			this->Phone->TabIndex = 16;
			this->Phone->Text = L"Phone";
			// 
			// Email
			// 
			this->Email->AutoSize = true;
			this->Email->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Email->Location = System::Drawing::Point(219, 110);
			this->Email->Name = L"Email";
			this->Email->Size = System::Drawing::Size(46, 20);
			this->Email->TabIndex = 15;
			this->Email->Text = L"Email";
			// 
			// txtName
			// 
			this->txtName->BorderColorFocused = System::Drawing::Color::Blue;
			this->txtName->BorderColorIdle = System::Drawing::Color::Silver;
			this->txtName->BorderColorMouseHover = System::Drawing::Color::Blue;
			this->txtName->BorderThickness = 3;
			this->txtName->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->txtName->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F));
			this->txtName->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->txtName->isPassword = false;
			this->txtName->Location = System::Drawing::Point(217, 62);
			this->txtName->Margin = System::Windows::Forms::Padding(4);
			this->txtName->Name = L"txtName";
			this->txtName->Size = System::Drawing::Size(310, 32);
			this->txtName->TabIndex = 14;
			this->txtName->TextAlign = System::Windows::Forms::HorizontalAlignment::Left;
			// 
			// Name
			// 
			this->Name->AutoSize = true;
			this->Name->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Name->Location = System::Drawing::Point(216, 38);
			this->Name->Name = L"Name";
			this->Name->Size = System::Drawing::Size(49, 20);
			this->Name->TabIndex = 13;
			this->Name->Text = L"Name";
			// 
			// btnSave
			// 
			this->btnSave->Activecolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(46)), static_cast<System::Int32>(static_cast<System::Byte>(139)),
				static_cast<System::Int32>(static_cast<System::Byte>(87)));
			this->btnSave->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(46)), static_cast<System::Int32>(static_cast<System::Byte>(139)),
				static_cast<System::Int32>(static_cast<System::Byte>(87)));
			this->btnSave->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->btnSave->BorderRadius = 0;
			this->btnSave->ButtonText = L"Save";
			this->btnSave->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnSave->DisabledColor = System::Drawing::Color::Gray;
			this->btnSave->Iconcolor = System::Drawing::Color::Transparent;
			this->btnSave->Iconimage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnSave.Iconimage")));
			this->btnSave->Iconimage_right = nullptr;
			this->btnSave->Iconimage_right_Selected = nullptr;
			this->btnSave->Iconimage_Selected = nullptr;
			this->btnSave->IconMarginLeft = 0;
			this->btnSave->IconMarginRight = 0;
			this->btnSave->IconRightVisible = true;
			this->btnSave->IconRightZoom = 0;
			this->btnSave->IconVisible = false;
			this->btnSave->IconZoom = 90;
			this->btnSave->IsTab = false;
			this->btnSave->Location = System::Drawing::Point(223, 359);
			this->btnSave->Name = L"btnSave";
			this->btnSave->Normalcolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(46)), static_cast<System::Int32>(static_cast<System::Byte>(139)),
				static_cast<System::Int32>(static_cast<System::Byte>(87)));
			this->btnSave->OnHovercolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(36)), static_cast<System::Int32>(static_cast<System::Byte>(129)),
				static_cast<System::Int32>(static_cast<System::Byte>(77)));
			this->btnSave->OnHoverTextColor = System::Drawing::Color::White;
			this->btnSave->selected = false;
			this->btnSave->Size = System::Drawing::Size(304, 48);
			this->btnSave->TabIndex = 21;
			this->btnSave->Text = L"Save";
			this->btnSave->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->btnSave->Textcolor = System::Drawing::Color::White;
			this->btnSave->TextFont = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnSave->Click += gcnew System::EventHandler(this, &CustomersForm::btnSave_Click);
			// 
			// CustomersForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(747, 445);
			this->Controls->Add(this->btnSave);
			this->Controls->Add(this->txtAddress);
			this->Controls->Add(this->txtPhone);
			this->Controls->Add(this->txtEmail);
			this->Controls->Add(this->Address);
			this->Controls->Add(this->Phone);
			this->Controls->Add(this->Email);
			this->Controls->Add(this->txtName);
			this->Controls->Add(this->Name);
			//this->Name = L"CustomersForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Customers Form";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void btnSave_Click(System::Object^ sender, System::EventArgs^ e) {
		if (String::IsNullOrEmpty(id))
		{
			auto customerId = Convert::ToString(static_cast<int>(Utils::roles::customer));
			if (query->exec("INSERT INTO Users (name, email, phone, address, roleId) VALUES('" + txtName->Text + "', '" + txtEmail->Text + "', '" + txtPhone->Text + "', '" + txtAddress->Text + "', '" + customerId + "')"))
				MessageBox::Show("Customer Added!");
		}
		else 
		{
			if (query->exec("UPDATE Users SET name = '" + txtName->Text + "', email = '" + txtEmail->Text + "', phone = '" + txtPhone->Text + "', address = '" + txtAddress->Text + "' WHERE userId = '" + id + "'"))
			{
				MessageBox::Show("Customer Updated!");
				this->Hide();
			}

		}
	}
};
}
#endif