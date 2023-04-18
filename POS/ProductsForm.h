#pragma once

#ifndef PRODUCTS_FORM
#define PRODUCTS_FORM

#include "Query.h"
#include "Utils.h"

namespace POS {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for ProductsForm
	/// </summary>
	public ref class ProductsForm : public System::Windows::Forms::Form
	{
	private:
		Query^ query;
	private: Bunifu::Framework::UI::BunifuCustomLabel^ bunifuCustomLabel1;
	private: Bunifu::Framework::UI::BunifuMetroTextbox^ txtPrice;
		   String^ id = "";
	public:
		ProductsForm(void)
		{
			InitializeComponent();
			query = gcnew Query();
		}

		ProductsForm(String^ id, String^ name, String^ stock, bool state, String^ barcode, String^ unitPrice)
		{
			InitializeComponent();
			query = gcnew Query();

			this->id = id;
			txtName->Text = name;
			txtStock->Text = stock;
			switchState->Value = state;
			txtCode->Text = barcode;
			txtPrice->Text = unitPrice;
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~ProductsForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: Bunifu::Framework::UI::BunifuFlatButton^ btnSave;
	protected:
	private: Bunifu::Framework::UI::BunifuCustomLabel^ bunifuCustomLabel6;
	private: Bunifu::Framework::UI::BunifuMetroTextbox^ txtCode;
	private: Bunifu::Framework::UI::BunifuiOSSwitch^ switchState;
	private: Bunifu::Framework::UI::BunifuCustomLabel^ bunifuCustomLabel5;
	private: Bunifu::Framework::UI::BunifuCustomLabel^ bunifuCustomLabel4;
	private: Bunifu::Framework::UI::BunifuMetroTextbox^ txtStock;


	private: Bunifu::Framework::UI::BunifuCustomLabel^ bunifuCustomLabel2;
	private: Bunifu::Framework::UI::BunifuMetroTextbox^ txtName;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(ProductsForm::typeid));
			this->btnSave = (gcnew Bunifu::Framework::UI::BunifuFlatButton());
			this->bunifuCustomLabel6 = (gcnew Bunifu::Framework::UI::BunifuCustomLabel());
			this->txtCode = (gcnew Bunifu::Framework::UI::BunifuMetroTextbox());
			this->switchState = (gcnew Bunifu::Framework::UI::BunifuiOSSwitch());
			this->bunifuCustomLabel5 = (gcnew Bunifu::Framework::UI::BunifuCustomLabel());
			this->bunifuCustomLabel4 = (gcnew Bunifu::Framework::UI::BunifuCustomLabel());
			this->txtStock = (gcnew Bunifu::Framework::UI::BunifuMetroTextbox());
			this->bunifuCustomLabel2 = (gcnew Bunifu::Framework::UI::BunifuCustomLabel());
			this->txtName = (gcnew Bunifu::Framework::UI::BunifuMetroTextbox());
			this->bunifuCustomLabel1 = (gcnew Bunifu::Framework::UI::BunifuCustomLabel());
			this->txtPrice = (gcnew Bunifu::Framework::UI::BunifuMetroTextbox());
			this->SuspendLayout();
			// 
			// btnSave
			// 
			this->btnSave->Activecolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(46)), static_cast<System::Int32>(static_cast<System::Byte>(139)),
				static_cast<System::Int32>(static_cast<System::Byte>(87)));
			this->btnSave->AutoValidate = System::Windows::Forms::AutoValidate::EnableAllowFocusChange;
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
			this->btnSave->IconRightVisible = false;
			this->btnSave->IconRightZoom = 0;
			this->btnSave->IconVisible = false;
			this->btnSave->IconZoom = 90;
			this->btnSave->IsTab = false;
			this->btnSave->Location = System::Drawing::Point(142, 357);
			this->btnSave->Name = L"btnSave";
			this->btnSave->Normalcolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(46)), static_cast<System::Int32>(static_cast<System::Byte>(139)),
				static_cast<System::Int32>(static_cast<System::Byte>(87)));
			this->btnSave->OnHovercolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(36)), static_cast<System::Int32>(static_cast<System::Byte>(129)),
				static_cast<System::Int32>(static_cast<System::Byte>(77)));
			this->btnSave->OnHoverTextColor = System::Drawing::Color::DarkGreen;
			this->btnSave->selected = false;
			this->btnSave->Size = System::Drawing::Size(344, 46);
			this->btnSave->TabIndex = 29;
			this->btnSave->Text = L"Save";
			this->btnSave->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->btnSave->Textcolor = System::Drawing::Color::White;
			this->btnSave->TextFont = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnSave->Click += gcnew System::EventHandler(this, &ProductsForm::btnSave_Click);
			// 
			// bunifuCustomLabel6
			// 
			this->bunifuCustomLabel6->AutoSize = true;
			this->bunifuCustomLabel6->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bunifuCustomLabel6->Location = System::Drawing::Point(134, 185);
			this->bunifuCustomLabel6->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->bunifuCustomLabel6->Name = L"bunifuCustomLabel6";
			this->bunifuCustomLabel6->Size = System::Drawing::Size(44, 19);
			this->bunifuCustomLabel6->TabIndex = 28;
			this->bunifuCustomLabel6->Text = L"Code";
			// 
			// txtCode
			// 
			this->txtCode->BorderColorFocused = System::Drawing::Color::Blue;
			this->txtCode->BorderColorIdle = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->txtCode->BorderColorMouseHover = System::Drawing::Color::Blue;
			this->txtCode->BorderThickness = 3;
			this->txtCode->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->txtCode->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F));
			this->txtCode->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->txtCode->isPassword = false;
			this->txtCode->Location = System::Drawing::Point(138, 207);
			this->txtCode->Margin = System::Windows::Forms::Padding(4);
			this->txtCode->Name = L"txtCode";
			this->txtCode->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->txtCode->Size = System::Drawing::Size(348, 29);
			this->txtCode->TabIndex = 27;
			this->txtCode->Text = L"Type Here";
			this->txtCode->TextAlign = System::Windows::Forms::HorizontalAlignment::Left;
			// 
			// switchState
			// 
			this->switchState->BackColor = System::Drawing::Color::Transparent;
			this->switchState->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"switchState.BackgroundImage")));
			this->switchState->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->switchState->Cursor = System::Windows::Forms::Cursors::Hand;
			this->switchState->Location = System::Drawing::Point(188, 313);
			this->switchState->Name = L"switchState";
			this->switchState->OffColor = System::Drawing::Color::Gray;
			this->switchState->OnColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(71)), static_cast<System::Int32>(static_cast<System::Byte>(202)),
				static_cast<System::Int32>(static_cast<System::Byte>(94)));
			this->switchState->Size = System::Drawing::Size(43, 25);
			this->switchState->TabIndex = 26;
			this->switchState->Value = true;
			// 
			// bunifuCustomLabel5
			// 
			this->bunifuCustomLabel5->AutoSize = true;
			this->bunifuCustomLabel5->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bunifuCustomLabel5->Location = System::Drawing::Point(140, 313);
			this->bunifuCustomLabel5->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->bunifuCustomLabel5->Name = L"bunifuCustomLabel5";
			this->bunifuCustomLabel5->Size = System::Drawing::Size(43, 19);
			this->bunifuCustomLabel5->TabIndex = 25;
			this->bunifuCustomLabel5->Text = L"State";
			// 
			// bunifuCustomLabel4
			// 
			this->bunifuCustomLabel4->AutoSize = true;
			this->bunifuCustomLabel4->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bunifuCustomLabel4->Location = System::Drawing::Point(138, 126);
			this->bunifuCustomLabel4->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->bunifuCustomLabel4->Name = L"bunifuCustomLabel4";
			this->bunifuCustomLabel4->Size = System::Drawing::Size(46, 19);
			this->bunifuCustomLabel4->TabIndex = 24;
			this->bunifuCustomLabel4->Text = L"Stock";
			// 
			// txtStock
			// 
			this->txtStock->BorderColorFocused = System::Drawing::Color::Blue;
			this->txtStock->BorderColorIdle = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->txtStock->BorderColorMouseHover = System::Drawing::Color::Blue;
			this->txtStock->BorderThickness = 3;
			this->txtStock->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->txtStock->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F));
			this->txtStock->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->txtStock->isPassword = false;
			this->txtStock->Location = System::Drawing::Point(138, 148);
			this->txtStock->Margin = System::Windows::Forms::Padding(4);
			this->txtStock->Name = L"txtStock";
			this->txtStock->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->txtStock->Size = System::Drawing::Size(348, 29);
			this->txtStock->TabIndex = 23;
			this->txtStock->Text = L"Type Here";
			this->txtStock->TextAlign = System::Windows::Forms::HorizontalAlignment::Left;
			// 
			// bunifuCustomLabel2
			// 
			this->bunifuCustomLabel2->AutoSize = true;
			this->bunifuCustomLabel2->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bunifuCustomLabel2->Location = System::Drawing::Point(134, 66);
			this->bunifuCustomLabel2->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->bunifuCustomLabel2->Name = L"bunifuCustomLabel2";
			this->bunifuCustomLabel2->Size = System::Drawing::Size(49, 19);
			this->bunifuCustomLabel2->TabIndex = 20;
			this->bunifuCustomLabel2->Text = L"Name";
			// 
			// txtName
			// 
			this->txtName->BorderColorFocused = System::Drawing::Color::Blue;
			this->txtName->BorderColorIdle = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->txtName->BorderColorMouseHover = System::Drawing::Color::Blue;
			this->txtName->BorderThickness = 3;
			this->txtName->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->txtName->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F));
			this->txtName->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->txtName->isPassword = false;
			this->txtName->Location = System::Drawing::Point(138, 88);
			this->txtName->Margin = System::Windows::Forms::Padding(4);
			this->txtName->Name = L"txtName";
			this->txtName->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->txtName->Size = System::Drawing::Size(348, 29);
			this->txtName->TabIndex = 19;
			this->txtName->Text = L"Type Here";
			this->txtName->TextAlign = System::Windows::Forms::HorizontalAlignment::Left;
			// 
			// bunifuCustomLabel1
			// 
			this->bunifuCustomLabel1->AutoSize = true;
			this->bunifuCustomLabel1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bunifuCustomLabel1->Location = System::Drawing::Point(134, 248);
			this->bunifuCustomLabel1->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->bunifuCustomLabel1->Name = L"bunifuCustomLabel1";
			this->bunifuCustomLabel1->Size = System::Drawing::Size(43, 19);
			this->bunifuCustomLabel1->TabIndex = 31;
			this->bunifuCustomLabel1->Text = L"Price";
			// 
			// txtPrice
			// 
			this->txtPrice->BorderColorFocused = System::Drawing::Color::Blue;
			this->txtPrice->BorderColorIdle = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->txtPrice->BorderColorMouseHover = System::Drawing::Color::Blue;
			this->txtPrice->BorderThickness = 3;
			this->txtPrice->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->txtPrice->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F));
			this->txtPrice->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->txtPrice->isPassword = false;
			this->txtPrice->Location = System::Drawing::Point(138, 270);
			this->txtPrice->Margin = System::Windows::Forms::Padding(4);
			this->txtPrice->Name = L"txtPrice";
			this->txtPrice->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->txtPrice->Size = System::Drawing::Size(348, 29);
			this->txtPrice->TabIndex = 30;
			this->txtPrice->Text = L"Type Here";
			this->txtPrice->TextAlign = System::Windows::Forms::HorizontalAlignment::Left;
			// 
			// ProductsForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(585, 425);
			this->Controls->Add(this->bunifuCustomLabel1);
			this->Controls->Add(this->txtPrice);
			this->Controls->Add(this->btnSave);
			this->Controls->Add(this->bunifuCustomLabel6);
			this->Controls->Add(this->txtCode);
			this->Controls->Add(this->switchState);
			this->Controls->Add(this->bunifuCustomLabel5);
			this->Controls->Add(this->bunifuCustomLabel4);
			this->Controls->Add(this->txtStock);
			this->Controls->Add(this->bunifuCustomLabel2);
			this->Controls->Add(this->txtName);
			this->Name = L"ProductsForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"ProductsForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void btnSave_Click(System::Object^ sender, System::EventArgs^ e) {
		if (String::IsNullOrEmpty(id))
		{
			auto customerId = Convert::ToString(static_cast<int>(Utils::roles::supplier));
			if (query->exec("INSERT INTO Products (name, stock, barcode, unitPrice, state) VALUES('"+ txtName->Text +"', '"+ txtStock->Text +"', '"+ txtCode->Text +"', '" + txtPrice->Text + "', '"+ Convert::ToInt16(switchState->Value) + "')"))
				MessageBox::Show("Product Added!");
		}
		else
			if (query->exec("UPDATE Products SET [name] = '"+ txtName->Text +"', stock = '"+ txtStock->Text +"', barcode = '"+ txtCode->Text +"', unitPrice = '" + txtPrice->Text + "', state = '" + Convert::ToInt16(switchState->Value) + "'  WHERE productId = '"+ id +"'"))
			{
				MessageBox::Show("Product Updated!");
				this->Hide();
			}
	}
};
}

#endif