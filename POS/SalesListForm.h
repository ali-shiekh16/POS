#pragma once
#include "Query.h"

namespace POS {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for SalesListForm
	/// </summary>
	public ref class SalesListForm : public System::Windows::Forms::Form
	{
	private:
		Query^ query;
		void populateTable()
		{
			table->DataSource = query->fetchData("SELECT NULL 'Sale ID', NULL  'Customer', NULL  'Item', NULL  'Quantity', NULL  'Price', NULL 'Date' UNION SELECT s.saleId 'Sale ID', c.name 'Customer', p.name 'Item', s.qty 'Quantity', s.retailPrice 'Price', saleDate 'Date' FROM Sales s JOIN Users c ON s.customerId = c.userId JOIN Products p ON p.productId = s.productId;");
			table->ClearSelection();
		}

	public:
		SalesListForm(void)
		{
			InitializeComponent();

			query = gcnew Query;

			populateTable();
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~SalesListForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: Bunifu::Framework::UI::BunifuCustomLabel^ bunifuCustomLabel2;
	protected:
	private: Bunifu::Framework::UI::BunifuCustomLabel^ bunifuCustomLabel1;
	private: Bunifu::Framework::UI::BunifuDatepicker^ startDatePicker;
	private: Bunifu::Framework::UI::BunifuDatepicker^ endDatePicker;
	private: Bunifu::Framework::UI::BunifuCustomLabel^ Search;
	private: Bunifu::Framework::UI::BunifuMetroTextbox^ txtSearch;
	private: Bunifu::Framework::UI::BunifuCustomDataGrid^ table;

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
			this->bunifuCustomLabel2 = (gcnew Bunifu::Framework::UI::BunifuCustomLabel());
			this->bunifuCustomLabel1 = (gcnew Bunifu::Framework::UI::BunifuCustomLabel());
			this->startDatePicker = (gcnew Bunifu::Framework::UI::BunifuDatepicker());
			this->endDatePicker = (gcnew Bunifu::Framework::UI::BunifuDatepicker());
			this->Search = (gcnew Bunifu::Framework::UI::BunifuCustomLabel());
			this->txtSearch = (gcnew Bunifu::Framework::UI::BunifuMetroTextbox());
			this->table = (gcnew Bunifu::Framework::UI::BunifuCustomDataGrid());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->table))->BeginInit();
			this->SuspendLayout();
			// 
			// bunifuCustomLabel2
			// 
			this->bunifuCustomLabel2->AutoSize = true;
			this->bunifuCustomLabel2->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bunifuCustomLabel2->Location = System::Drawing::Point(325, 54);
			this->bunifuCustomLabel2->Name = L"bunifuCustomLabel2";
			this->bunifuCustomLabel2->Size = System::Drawing::Size(76, 20);
			this->bunifuCustomLabel2->TabIndex = 46;
			this->bunifuCustomLabel2->Text = L"Start Date";
			// 
			// bunifuCustomLabel1
			// 
			this->bunifuCustomLabel1->AutoSize = true;
			this->bunifuCustomLabel1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bunifuCustomLabel1->Location = System::Drawing::Point(325, 104);
			this->bunifuCustomLabel1->Name = L"bunifuCustomLabel1";
			this->bunifuCustomLabel1->Size = System::Drawing::Size(70, 20);
			this->bunifuCustomLabel1->TabIndex = 45;
			this->bunifuCustomLabel1->Text = L"End Date";
			// 
			// startDatePicker
			// 
			this->startDatePicker->BackColor = System::Drawing::Color::SeaGreen;
			this->startDatePicker->BorderRadius = 0;
			this->startDatePicker->ForeColor = System::Drawing::Color::White;
			this->startDatePicker->Format = System::Windows::Forms::DateTimePickerFormat::Long;
			this->startDatePicker->FormatCustom = nullptr;
			this->startDatePicker->Location = System::Drawing::Point(409, 46);
			this->startDatePicker->Name = L"startDatePicker";
			this->startDatePicker->Size = System::Drawing::Size(303, 36);
			this->startDatePicker->TabIndex = 44;
			this->startDatePicker->Value = System::DateTime(2023, 4, 27, 22, 31, 40, 271);
			// 
			// endDatePicker
			// 
			this->endDatePicker->BackColor = System::Drawing::Color::SeaGreen;
			this->endDatePicker->BorderRadius = 0;
			this->endDatePicker->ForeColor = System::Drawing::Color::White;
			this->endDatePicker->Format = System::Windows::Forms::DateTimePickerFormat::Long;
			this->endDatePicker->FormatCustom = nullptr;
			this->endDatePicker->Location = System::Drawing::Point(409, 96);
			this->endDatePicker->Name = L"endDatePicker";
			this->endDatePicker->Size = System::Drawing::Size(303, 36);
			this->endDatePicker->TabIndex = 43;
			this->endDatePicker->Value = System::DateTime(2023, 4, 27, 22, 31, 40, 271);
			this->endDatePicker->onValueChanged += gcnew System::EventHandler(this, &SalesListForm::endDatePicker_onValueChanged);
			// 
			// Search
			// 
			this->Search->AutoSize = true;
			this->Search->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Search->Location = System::Drawing::Point(41, 112);
			this->Search->Name = L"Search";
			this->Search->Size = System::Drawing::Size(53, 20);
			this->Search->TabIndex = 42;
			this->Search->Text = L"Search";
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
			this->txtSearch->Location = System::Drawing::Point(39, 139);
			this->txtSearch->Margin = System::Windows::Forms::Padding(4);
			this->txtSearch->Name = L"txtSearch";
			this->txtSearch->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->txtSearch->Size = System::Drawing::Size(682, 38);
			this->txtSearch->TabIndex = 41;
			this->txtSearch->Text = L"Search Here";
			this->txtSearch->TextAlign = System::Windows::Forms::HorizontalAlignment::Left;
			this->txtSearch->OnValueChanged += gcnew System::EventHandler(this, &SalesListForm::txtSearch_OnValueChanged);
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
			this->table->Location = System::Drawing::Point(39, 192);
			this->table->Margin = System::Windows::Forms::Padding(2);
			this->table->Name = L"table";
			this->table->RowHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::None;
			this->table->RowHeadersWidth = 62;
			this->table->RowTemplate->Height = 28;
			this->table->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::FullRowSelect;
			this->table->Size = System::Drawing::Size(682, 255);
			this->table->TabIndex = 40;
			// 
			// SalesListForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(760, 492);
			this->Controls->Add(this->bunifuCustomLabel2);
			this->Controls->Add(this->bunifuCustomLabel1);
			this->Controls->Add(this->startDatePicker);
			this->Controls->Add(this->endDatePicker);
			this->Controls->Add(this->Search);
			this->Controls->Add(this->txtSearch);
			this->Controls->Add(this->table);
			this->Name = L"SalesListForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"SalesListForm";
			this->Load += gcnew System::EventHandler(this, &SalesListForm::SalesListForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->table))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void SalesListForm_Load(System::Object^ sender, System::EventArgs^ e) 
	{

	}
private: System::Void txtSearch_OnValueChanged(System::Object^ sender, System::EventArgs^ e) 
{
	if (String::IsNullOrWhiteSpace(txtSearch->Text))
		populateTable();

	table->DataSource = query->fetchData("SELECT NULL 'Sale ID', NULL  'Customer', NULL  'Item', NULL  'Quantity', NULL  'Price', NULL 'Date' UNION SELECT s.saleId 'Sale ID', c.name 'Customer', p.name 'Item', s.qty 'Quantity', s.retailPrice 'Price', saleDate 'Date' FROM Sales s JOIN Users c ON s.customerId = c.userId JOIN Products p ON p.productId = s.productId WHERE p.name LIKE '%" + txtSearch->Text + "%';");
	table->ClearSelection();
}
private: System::Void endDatePicker_onValueChanged(System::Object^ sender, System::EventArgs^ e) 
{
	table->DataSource = query->fetchData("SELECT NULL 'Sale ID', NULL  'Customer', NULL  'Item', NULL  'Quantity', NULL  'Price', NULL 'Date' UNION SELECT s.saleId 'Sale ID', c.name 'Customer', p.name 'Item', s.qty 'Quantity', s.retailPrice 'Price', saleDate 'Date' FROM Sales s JOIN Users c ON s.customerId = c.userId JOIN Products p ON p.productId = s.productId WHERE p.name LIKE '%" + txtSearch->Text + "%' AND s.saleDate BETWEEN '" + startDatePicker->Value + "' AND '" + endDatePicker->Value + "';");
	table->ClearSelection();
}
};
}
