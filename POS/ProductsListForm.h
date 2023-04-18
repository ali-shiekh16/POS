#pragma once
#ifndef PRODUCTS_LIST_FORM
#define PRODUCTS_LIST_FORM

#include "ProductsForm.h"
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
	/// Summary for ProductsListForm
	/// </summary>
	public ref class ProductsListForm : public System::Windows::Forms::Form
	{
	private:
		Query^ query;
		bool isUpdated = false;

	public:
		ProductsListForm(void)
		{
			InitializeComponent();
			query = gcnew Query();
			populateTable();
		}
	private:
		void populateTable()
		{
			auto datatable = query->fetchData("SELECT NULL AS ID, NULL AS [Name], NULL AS 'Unit Price', NULL AS [Stock], NULL AS[State] FROM Products UNION SELECT productId, [name], unitPrice, stock, state FROM Products");
			table->DataSource = datatable;
			table->ClearSelection();
			isUpdated = false;
			disableButtons();
		}

		void enableButtons()
		{
			btnEdit->Enabled = true;
			btnDelete->Enabled = true;
		}

		void disableButtons()
		{
			btnEdit->Enabled = false;
			btnDelete->Enabled = false;
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~ProductsListForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: Bunifu::Framework::UI::BunifuMetroTextbox^ txtSearch;
	private: Bunifu::Framework::UI::BunifuCustomDataGrid^ table;
	private: Bunifu::Framework::UI::BunifuFlatButton^ btnAdd;
	private: Bunifu::Framework::UI::BunifuFlatButton^ btnDelete;
	private: Bunifu::Framework::UI::BunifuFlatButton^ btnEdit;
	private: Bunifu::Framework::UI::BunifuCustomLabel^ Search;
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
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle1 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle2 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(ProductsListForm::typeid));
			this->txtSearch = (gcnew Bunifu::Framework::UI::BunifuMetroTextbox());
			this->table = (gcnew Bunifu::Framework::UI::BunifuCustomDataGrid());
			this->btnAdd = (gcnew Bunifu::Framework::UI::BunifuFlatButton());
			this->btnDelete = (gcnew Bunifu::Framework::UI::BunifuFlatButton());
			this->btnEdit = (gcnew Bunifu::Framework::UI::BunifuFlatButton());
			this->Search = (gcnew Bunifu::Framework::UI::BunifuCustomLabel());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->table))->BeginInit();
			this->SuspendLayout();
			// 
			// txtSearch
			// 
			this->txtSearch->BorderColorFocused = System::Drawing::Color::Blue;
			this->txtSearch->BorderColorIdle = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->txtSearch->BorderColorMouseHover = System::Drawing::Color::Blue;
			this->txtSearch->BorderThickness = 3;
			this->txtSearch->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->txtSearch->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F));
			this->txtSearch->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->txtSearch->isPassword = false;
			this->txtSearch->Location = System::Drawing::Point(59, 114);
			this->txtSearch->Margin = System::Windows::Forms::Padding(4);
			this->txtSearch->Name = L"txtSearch";
			this->txtSearch->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->txtSearch->Size = System::Drawing::Size(682, 38);
			this->txtSearch->TabIndex = 6;
			this->txtSearch->Text = L"Search Here";
			this->txtSearch->TextAlign = System::Windows::Forms::HorizontalAlignment::Left;
			this->txtSearch->OnValueChanged += gcnew System::EventHandler(this, &ProductsListForm::txtSearch_OnValueChanged);
			// 
			// table
			// 
			dataGridViewCellStyle1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->table->AlternatingRowsDefaultCellStyle = dataGridViewCellStyle1;
			this->table->BackgroundColor = System::Drawing::Color::Gainsboro;
			this->table->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->table->ColumnHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::None;
			dataGridViewCellStyle2->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle2->BackColor = System::Drawing::Color::SeaGreen;
			dataGridViewCellStyle2->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle2->ForeColor = System::Drawing::Color::White;
			dataGridViewCellStyle2->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle2->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle2->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->table->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle2;
			this->table->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->table->DoubleBuffered = true;
			this->table->EnableHeadersVisualStyles = false;
			this->table->HeaderBgColor = System::Drawing::Color::SeaGreen;
			this->table->HeaderForeColor = System::Drawing::Color::White;
			this->table->Location = System::Drawing::Point(59, 167);
			this->table->Margin = System::Windows::Forms::Padding(2);
			this->table->Name = L"table";
			this->table->RowHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::None;
			this->table->RowHeadersWidth = 62;
			this->table->RowTemplate->Height = 28;
			this->table->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::FullRowSelect;
			this->table->Size = System::Drawing::Size(682, 255);
			this->table->TabIndex = 5;
			this->table->SelectionChanged += gcnew System::EventHandler(this, &ProductsListForm::table_SelectionChanged);
			// 
			// btnAdd
			// 
			this->btnAdd->Activecolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(46)), static_cast<System::Int32>(static_cast<System::Byte>(139)),
				static_cast<System::Int32>(static_cast<System::Byte>(87)));
			this->btnAdd->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(46)), static_cast<System::Int32>(static_cast<System::Byte>(139)),
				static_cast<System::Int32>(static_cast<System::Byte>(87)));
			this->btnAdd->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->btnAdd->BorderRadius = 0;
			this->btnAdd->ButtonText = L"ADD PRODUCT";
			this->btnAdd->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnAdd->DisabledColor = System::Drawing::Color::Gray;
			this->btnAdd->Iconcolor = System::Drawing::Color::Transparent;
			this->btnAdd->Iconimage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnAdd.Iconimage")));
			this->btnAdd->Iconimage_right = nullptr;
			this->btnAdd->Iconimage_right_Selected = nullptr;
			this->btnAdd->Iconimage_Selected = nullptr;
			this->btnAdd->IconMarginLeft = 0;
			this->btnAdd->IconMarginRight = 0;
			this->btnAdd->IconRightVisible = true;
			this->btnAdd->IconRightZoom = 0;
			this->btnAdd->IconVisible = false;
			this->btnAdd->IconZoom = 90;
			this->btnAdd->IsTab = false;
			this->btnAdd->Location = System::Drawing::Point(388, 59);
			this->btnAdd->Name = L"btnAdd";
			this->btnAdd->Normalcolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(46)), static_cast<System::Int32>(static_cast<System::Byte>(139)),
				static_cast<System::Int32>(static_cast<System::Byte>(87)));
			this->btnAdd->OnHovercolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(36)), static_cast<System::Int32>(static_cast<System::Byte>(129)),
				static_cast<System::Int32>(static_cast<System::Byte>(77)));
			this->btnAdd->OnHoverTextColor = System::Drawing::Color::White;
			this->btnAdd->selected = false;
			this->btnAdd->Size = System::Drawing::Size(114, 48);
			this->btnAdd->TabIndex = 32;
			this->btnAdd->Text = L"ADD PRODUCT";
			this->btnAdd->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->btnAdd->Textcolor = System::Drawing::Color::White;
			this->btnAdd->TextFont = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnAdd->Click += gcnew System::EventHandler(this, &ProductsListForm::btnAdd_Click);
			// 
			// btnDelete
			// 
			this->btnDelete->Activecolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(46)), static_cast<System::Int32>(static_cast<System::Byte>(139)),
				static_cast<System::Int32>(static_cast<System::Byte>(87)));
			this->btnDelete->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(46)), static_cast<System::Int32>(static_cast<System::Byte>(139)),
				static_cast<System::Int32>(static_cast<System::Byte>(87)));
			this->btnDelete->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->btnDelete->BorderRadius = 0;
			this->btnDelete->ButtonText = L"DELETE";
			this->btnDelete->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnDelete->DisabledColor = System::Drawing::Color::Gray;
			this->btnDelete->Enabled = false;
			this->btnDelete->Iconcolor = System::Drawing::Color::Transparent;
			this->btnDelete->Iconimage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnDelete.Iconimage")));
			this->btnDelete->Iconimage_right = nullptr;
			this->btnDelete->Iconimage_right_Selected = nullptr;
			this->btnDelete->Iconimage_Selected = nullptr;
			this->btnDelete->IconMarginLeft = 0;
			this->btnDelete->IconMarginRight = 0;
			this->btnDelete->IconRightVisible = true;
			this->btnDelete->IconRightZoom = 0;
			this->btnDelete->IconVisible = false;
			this->btnDelete->IconZoom = 90;
			this->btnDelete->IsTab = false;
			this->btnDelete->Location = System::Drawing::Point(628, 59);
			this->btnDelete->Name = L"btnDelete";
			this->btnDelete->Normalcolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(46)), static_cast<System::Int32>(static_cast<System::Byte>(139)),
				static_cast<System::Int32>(static_cast<System::Byte>(87)));
			this->btnDelete->OnHovercolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(36)), static_cast<System::Int32>(static_cast<System::Byte>(129)),
				static_cast<System::Int32>(static_cast<System::Byte>(77)));
			this->btnDelete->OnHoverTextColor = System::Drawing::Color::White;
			this->btnDelete->selected = false;
			this->btnDelete->Size = System::Drawing::Size(114, 48);
			this->btnDelete->TabIndex = 31;
			this->btnDelete->Text = L"DELETE";
			this->btnDelete->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->btnDelete->Textcolor = System::Drawing::Color::White;
			this->btnDelete->TextFont = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnDelete->Click += gcnew System::EventHandler(this, &ProductsListForm::btnDelete_Click);
			// 
			// btnEdit
			// 
			this->btnEdit->Activecolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(46)), static_cast<System::Int32>(static_cast<System::Byte>(139)),
				static_cast<System::Int32>(static_cast<System::Byte>(87)));
			this->btnEdit->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(46)), static_cast<System::Int32>(static_cast<System::Byte>(139)),
				static_cast<System::Int32>(static_cast<System::Byte>(87)));
			this->btnEdit->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->btnEdit->BorderRadius = 0;
			this->btnEdit->ButtonText = L"EDIT";
			this->btnEdit->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnEdit->DisabledColor = System::Drawing::Color::Gray;
			this->btnEdit->Enabled = false;
			this->btnEdit->Iconcolor = System::Drawing::Color::Transparent;
			this->btnEdit->Iconimage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnEdit.Iconimage")));
			this->btnEdit->Iconimage_right = nullptr;
			this->btnEdit->Iconimage_right_Selected = nullptr;
			this->btnEdit->Iconimage_Selected = nullptr;
			this->btnEdit->IconMarginLeft = 0;
			this->btnEdit->IconMarginRight = 0;
			this->btnEdit->IconRightVisible = true;
			this->btnEdit->IconRightZoom = 0;
			this->btnEdit->IconVisible = false;
			this->btnEdit->IconZoom = 90;
			this->btnEdit->IsTab = false;
			this->btnEdit->Location = System::Drawing::Point(508, 59);
			this->btnEdit->Name = L"btnEdit";
			this->btnEdit->Normalcolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(46)), static_cast<System::Int32>(static_cast<System::Byte>(139)),
				static_cast<System::Int32>(static_cast<System::Byte>(87)));
			this->btnEdit->OnHovercolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(36)), static_cast<System::Int32>(static_cast<System::Byte>(129)),
				static_cast<System::Int32>(static_cast<System::Byte>(77)));
			this->btnEdit->OnHoverTextColor = System::Drawing::Color::White;
			this->btnEdit->selected = false;
			this->btnEdit->Size = System::Drawing::Size(114, 48);
			this->btnEdit->TabIndex = 30;
			this->btnEdit->Text = L"EDIT";
			this->btnEdit->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->btnEdit->Textcolor = System::Drawing::Color::White;
			this->btnEdit->TextFont = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnEdit->Click += gcnew System::EventHandler(this, &ProductsListForm::btnEdit_Click);
			// 
			// Search
			// 
			this->Search->AutoSize = true;
			this->Search->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Search->Location = System::Drawing::Point(61, 87);
			this->Search->Name = L"Search";
			this->Search->Size = System::Drawing::Size(53, 20);
			this->Search->TabIndex = 29;
			this->Search->Text = L"Search";
			// 
			// ProductsListForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(800, 486);
			this->Controls->Add(this->btnAdd);
			this->Controls->Add(this->btnDelete);
			this->Controls->Add(this->btnEdit);
			this->Controls->Add(this->Search);
			this->Controls->Add(this->txtSearch);
			this->Controls->Add(this->table);
			this->Name = L"ProductsListForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Products List";
			this->Activated += gcnew System::EventHandler(this, &ProductsListForm::ProductsListForm_Activated);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->table))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void ProductsListForm_Activated(System::Object^ sender, System::EventArgs^ e) {
		populateTable();
	}
private: System::Void txtSearch_OnValueChanged(System::Object^ sender, System::EventArgs^ e) {
	table->DataSource = query->fetchData("SELECT NULL AS ID, NULL AS[Name], NULL AS[Stock], NULL AS[State] FROM Products UNION SELECT productId, [name], stock, state FROM Products WHERE productId LIKE '%" + txtSearch->Text + "%' OR [name] LIKE '%" + txtSearch->Text + "%' OR barcode LIKE '%" + txtSearch->Text + "%'");
}

private: System::Void btnAdd_Click(System::Object^ sender, System::EventArgs^ e) {
	auto form = gcnew ProductsForm();
	form->Show();
	this->Hide();
}
private: System::Void btnEdit_Click(System::Object^ sender, System::EventArgs^ e) {
	if (!String::IsNullOrEmpty(Convert::ToString(table->CurrentRow->Cells[0]->Value)) && !isUpdated)
	{
		auto id = Convert::ToString(table->CurrentRow->Cells[0]->Value);
		auto name = Convert::ToString(table->CurrentRow->Cells[1]->Value);
		auto unitPrice = Convert::ToString(table->CurrentRow->Cells[2]->Value);
		auto stock = Convert::ToString(table->CurrentRow->Cells[3]->Value);
		auto state = Convert::ToBoolean(table->CurrentRow->Cells[4]->Value);
		auto barcode = query->fetchData("SELECT barcode FROM Products WHERE productId = '"+ id +"'")->Rows[0]->ItemArray[0]->ToString();
		
		auto form = gcnew ProductsForm(id, name, stock, state, barcode, unitPrice);
		form->Show();

		isUpdated = true;
	}
}
private: System::Void btnDelete_Click(System::Object^ sender, System::EventArgs^ e) {
	auto id = Convert::ToString(table->CurrentRow->Cells[0]->Value);
	if (!String::IsNullOrEmpty(id) && !isUpdated)
		if (MessageBox::Show("Are you sure you want to delete?", "Confirmation", MessageBoxButtons::YesNo, MessageBoxIcon::Question) == Windows::Forms::DialogResult::Yes)
			if (query->exec("DELETE FROM Products WHERE productId = " + id))
			{
				MessageBox::Show("Supplier deleted!");
				populateTable();
			}
}

private: System::Void table_SelectionChanged(System::Object^ sender, System::EventArgs^ e) {
	if (!String::IsNullOrEmpty(Convert::ToString(table->CurrentRow->Cells[0]->Value)) && !isUpdated)
		enableButtons();
}
};
}

#endif