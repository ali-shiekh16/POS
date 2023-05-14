// TODO:
//Sale form improvements
//4. on complete sale button click event, first subtract the stock of the products thereafter insert the sale record.

#pragma once
#ifndef SELL_FORM
#define SELL_FORM

#include "Query.h"
#include "Utils.h"
#include "ProductInfo.h"



namespace POS {

	using namespace System;
	using namespace System::ComponentModel;
		using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Collections::Generic;

	/// <summary>
	/// Summary for SellForm
	/// </summary>
	public ref class SellForm : public System::Windows::Forms::Form
	{
	private:
		Query^ query;
		bool isEditing;
		String^ insertQuery;
		List<ProductInfo^>^ productsInfo;
		DataTable^ products;
	public:
		SellForm(void)
		{
			InitializeComponent();
			intializeTableCols();
			query = gcnew Query();
			productsInfo = gcnew List<ProductInfo^>();
			isEditing = false;
			table->ClearSelection();
			disableButtons();
			products = gcnew DataTable();

			insertQuery = "";
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~SellForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: Bunifu::Framework::UI::BunifuCustomLabel^ lblRemaningAmount;
	protected:
	private: Bunifu::Framework::UI::BunifuCustomLabel^ bunifuCustomLabel5;
	private: Bunifu::Framework::UI::BunifuFlatButton^ btnEdit;
	private: Bunifu::Framework::UI::BunifuFlatButton^ btnDelete;
	private: System::Windows::Forms::ComboBox^ comboCustomer;
	private: System::Windows::Forms::ComboBox^ comboProducts;
	private: Bunifu::Framework::UI::BunifuFlatButton^ btnSell;
	private: Bunifu::Framework::UI::BunifuCustomDataGrid^ table;
	private: Bunifu::Framework::UI::BunifuCustomLabel^ lblDues;
	private: Bunifu::Framework::UI::BunifuCustomLabel^ bunifuCustomLabel3;
	private: Bunifu::Framework::UI::BunifuMetroTextbox^ txtPaidAmount;
	private: Bunifu::Framework::UI::BunifuCustomLabel^ bunifuCustomLabel2;
	private: Bunifu::Framework::UI::BunifuMetroTextbox^ txtQty;
	private: Bunifu::Framework::UI::BunifuCustomLabel^ bunifuCustomLabel1;
	private: Bunifu::Framework::UI::BunifuFlatButton^ btnAdd;
	private: Bunifu::Framework::UI::BunifuCustomLabel^ Supplier;
	private: Bunifu::Framework::UI::BunifuCustomLabel^ Product;



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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(SellForm::typeid));
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle1 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle2 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			this->lblRemaningAmount = (gcnew Bunifu::Framework::UI::BunifuCustomLabel());
			this->bunifuCustomLabel5 = (gcnew Bunifu::Framework::UI::BunifuCustomLabel());
			this->btnEdit = (gcnew Bunifu::Framework::UI::BunifuFlatButton());
			this->btnDelete = (gcnew Bunifu::Framework::UI::BunifuFlatButton());
			this->comboCustomer = (gcnew System::Windows::Forms::ComboBox());
			this->comboProducts = (gcnew System::Windows::Forms::ComboBox());
			this->btnSell = (gcnew Bunifu::Framework::UI::BunifuFlatButton());
			this->table = (gcnew Bunifu::Framework::UI::BunifuCustomDataGrid());
			this->lblDues = (gcnew Bunifu::Framework::UI::BunifuCustomLabel());
			this->bunifuCustomLabel3 = (gcnew Bunifu::Framework::UI::BunifuCustomLabel());
			this->txtPaidAmount = (gcnew Bunifu::Framework::UI::BunifuMetroTextbox());
			this->bunifuCustomLabel2 = (gcnew Bunifu::Framework::UI::BunifuCustomLabel());
			this->txtQty = (gcnew Bunifu::Framework::UI::BunifuMetroTextbox());
			this->bunifuCustomLabel1 = (gcnew Bunifu::Framework::UI::BunifuCustomLabel());
			this->btnAdd = (gcnew Bunifu::Framework::UI::BunifuFlatButton());
			this->Supplier = (gcnew Bunifu::Framework::UI::BunifuCustomLabel());
			this->Product = (gcnew Bunifu::Framework::UI::BunifuCustomLabel());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->table))->BeginInit();
			this->SuspendLayout();
			// 
			// lblRemaningAmount
			// 
			this->lblRemaningAmount->AutoSize = true;
			this->lblRemaningAmount->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblRemaningAmount->Location = System::Drawing::Point(180, 416);
			this->lblRemaningAmount->Name = L"lblRemaningAmount";
			this->lblRemaningAmount->Size = System::Drawing::Size(18, 20);
			this->lblRemaningAmount->TabIndex = 65;
			this->lblRemaningAmount->Text = L"0";
			// 
			// bunifuCustomLabel5
			// 
			this->bunifuCustomLabel5->AutoSize = true;
			this->bunifuCustomLabel5->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11.25F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bunifuCustomLabel5->Location = System::Drawing::Point(27, 416);
			this->bunifuCustomLabel5->Name = L"bunifuCustomLabel5";
			this->bunifuCustomLabel5->Size = System::Drawing::Size(132, 20);
			this->bunifuCustomLabel5->TabIndex = 64;
			this->bunifuCustomLabel5->Text = L"Remaning Amount:";
			// 
			// btnEdit
			// 
			this->btnEdit->Activecolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(46)), static_cast<System::Int32>(static_cast<System::Byte>(139)),
				static_cast<System::Int32>(static_cast<System::Byte>(87)));
			this->btnEdit->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(46)), static_cast<System::Int32>(static_cast<System::Byte>(139)),
				static_cast<System::Int32>(static_cast<System::Byte>(87)));
			this->btnEdit->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->btnEdit->BorderRadius = 0;
			this->btnEdit->ButtonText = L"Edit";
			this->btnEdit->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnEdit->DisabledColor = System::Drawing::Color::Gray;
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
			this->btnEdit->Location = System::Drawing::Point(699, 28);
			this->btnEdit->Name = L"btnEdit";
			this->btnEdit->Normalcolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(46)), static_cast<System::Int32>(static_cast<System::Byte>(139)),
				static_cast<System::Int32>(static_cast<System::Byte>(87)));
			this->btnEdit->OnHovercolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(36)), static_cast<System::Int32>(static_cast<System::Byte>(129)),
				static_cast<System::Int32>(static_cast<System::Byte>(77)));
			this->btnEdit->OnHoverTextColor = System::Drawing::Color::White;
			this->btnEdit->selected = false;
			this->btnEdit->Size = System::Drawing::Size(65, 48);
			this->btnEdit->TabIndex = 63;
			this->btnEdit->Text = L"Edit";
			this->btnEdit->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->btnEdit->Textcolor = System::Drawing::Color::White;
			this->btnEdit->TextFont = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnEdit->Click += gcnew System::EventHandler(this, &SellForm::btnEdit_Click);
			// 
			// btnDelete
			// 
			this->btnDelete->Activecolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(46)), static_cast<System::Int32>(static_cast<System::Byte>(139)),
				static_cast<System::Int32>(static_cast<System::Byte>(87)));
			this->btnDelete->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(46)), static_cast<System::Int32>(static_cast<System::Byte>(139)),
				static_cast<System::Int32>(static_cast<System::Byte>(87)));
			this->btnDelete->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->btnDelete->BorderRadius = 0;
			this->btnDelete->ButtonText = L"Delete";
			this->btnDelete->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnDelete->DisabledColor = System::Drawing::Color::Gray;
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
			this->btnDelete->Location = System::Drawing::Point(770, 28);
			this->btnDelete->Name = L"btnDelete";
			this->btnDelete->Normalcolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(46)), static_cast<System::Int32>(static_cast<System::Byte>(139)),
				static_cast<System::Int32>(static_cast<System::Byte>(87)));
			this->btnDelete->OnHovercolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(36)), static_cast<System::Int32>(static_cast<System::Byte>(129)),
				static_cast<System::Int32>(static_cast<System::Byte>(77)));
			this->btnDelete->OnHoverTextColor = System::Drawing::Color::White;
			this->btnDelete->selected = false;
			this->btnDelete->Size = System::Drawing::Size(65, 48);
			this->btnDelete->TabIndex = 62;
			this->btnDelete->Text = L"Delete";
			this->btnDelete->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->btnDelete->Textcolor = System::Drawing::Color::White;
			this->btnDelete->TextFont = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnDelete->Click += gcnew System::EventHandler(this, &SellForm::btnDelete_Click);
			// 
			// comboCustomer
			// 
			this->comboCustomer->FormattingEnabled = true;
			this->comboCustomer->Location = System::Drawing::Point(131, 462);
			this->comboCustomer->Name = L"comboCustomer";
			this->comboCustomer->Size = System::Drawing::Size(209, 21);
			this->comboCustomer->TabIndex = 61;
			// 
			// comboProducts
			// 
			this->comboProducts->FormattingEnabled = true;
			this->comboProducts->Location = System::Drawing::Point(21, 82);
			this->comboProducts->Name = L"comboProducts";
			this->comboProducts->Size = System::Drawing::Size(316, 21);
			this->comboProducts->TabIndex = 60;
			// 
			// btnSell
			// 
			this->btnSell->Activecolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(46)), static_cast<System::Int32>(static_cast<System::Byte>(139)),
				static_cast<System::Int32>(static_cast<System::Byte>(87)));
			this->btnSell->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(46)), static_cast<System::Int32>(static_cast<System::Byte>(139)),
				static_cast<System::Int32>(static_cast<System::Byte>(87)));
			this->btnSell->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->btnSell->BorderRadius = 0;
			this->btnSell->ButtonText = L"Complete Sale";
			this->btnSell->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnSell->DisabledColor = System::Drawing::Color::Gray;
			this->btnSell->Iconcolor = System::Drawing::Color::Transparent;
			this->btnSell->Iconimage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnSell.Iconimage")));
			this->btnSell->Iconimage_right = nullptr;
			this->btnSell->Iconimage_right_Selected = nullptr;
			this->btnSell->Iconimage_Selected = nullptr;
			this->btnSell->IconMarginLeft = 0;
			this->btnSell->IconMarginRight = 0;
			this->btnSell->IconRightVisible = true;
			this->btnSell->IconRightZoom = 0;
			this->btnSell->IconVisible = false;
			this->btnSell->IconZoom = 90;
			this->btnSell->IsTab = false;
			this->btnSell->Location = System::Drawing::Point(30, 522);
			this->btnSell->Name = L"btnSell";
			this->btnSell->Normalcolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(46)), static_cast<System::Int32>(static_cast<System::Byte>(139)),
				static_cast<System::Int32>(static_cast<System::Byte>(87)));
			this->btnSell->OnHovercolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(36)), static_cast<System::Int32>(static_cast<System::Byte>(129)),
				static_cast<System::Int32>(static_cast<System::Byte>(77)));
			this->btnSell->OnHoverTextColor = System::Drawing::Color::White;
			this->btnSell->selected = false;
			this->btnSell->Size = System::Drawing::Size(310, 48);
			this->btnSell->TabIndex = 59;
			this->btnSell->Text = L"Complete Sale";
			this->btnSell->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->btnSell->Textcolor = System::Drawing::Color::White;
			this->btnSell->TextFont = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnSell->Click += gcnew System::EventHandler(this, &SellForm::btnSell_Click);
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
			this->table->Location = System::Drawing::Point(360, 82);
			this->table->Name = L"table";
			this->table->RowHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::None;
			this->table->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::FullRowSelect;
			this->table->Size = System::Drawing::Size(475, 533);
			this->table->TabIndex = 58;
			this->table->SelectionChanged += gcnew System::EventHandler(this, &SellForm::table_SelectionChanged);
			// 
			// lblDues
			// 
			this->lblDues->AutoSize = true;
			this->lblDues->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblDues->Location = System::Drawing::Point(127, 314);
			this->lblDues->Name = L"lblDues";
			this->lblDues->Size = System::Drawing::Size(18, 20);
			this->lblDues->TabIndex = 57;
			this->lblDues->Text = L"0";
			// 
			// bunifuCustomLabel3
			// 
			this->bunifuCustomLabel3->AutoSize = true;
			this->bunifuCustomLabel3->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11.25F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bunifuCustomLabel3->Location = System::Drawing::Point(27, 314);
			this->bunifuCustomLabel3->Name = L"bunifuCustomLabel3";
			this->bunifuCustomLabel3->Size = System::Drawing::Size(81, 20);
			this->bunifuCustomLabel3->TabIndex = 56;
			this->bunifuCustomLabel3->Text = L"Total Dues:";
			// 
			// txtPaidAmount
			// 
			this->txtPaidAmount->BorderColorFocused = System::Drawing::Color::Blue;
			this->txtPaidAmount->BorderColorIdle = System::Drawing::Color::Silver;
			this->txtPaidAmount->BorderColorMouseHover = System::Drawing::Color::Blue;
			this->txtPaidAmount->BorderThickness = 3;
			this->txtPaidAmount->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->txtPaidAmount->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F));
			this->txtPaidAmount->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->txtPaidAmount->isPassword = false;
			this->txtPaidAmount->Location = System::Drawing::Point(147, 362);
			this->txtPaidAmount->Margin = System::Windows::Forms::Padding(4);
			this->txtPaidAmount->Name = L"txtPaidAmount";
			this->txtPaidAmount->Size = System::Drawing::Size(193, 32);
			this->txtPaidAmount->TabIndex = 55;
			this->txtPaidAmount->TextAlign = System::Windows::Forms::HorizontalAlignment::Left;
			this->txtPaidAmount->OnValueChanged += gcnew System::EventHandler(this, &SellForm::txtPaidAmount_OnValueChanged);
			// 
			// bunifuCustomLabel2
			// 
			this->bunifuCustomLabel2->AutoSize = true;
			this->bunifuCustomLabel2->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bunifuCustomLabel2->Location = System::Drawing::Point(19, 368);
			this->bunifuCustomLabel2->Name = L"bunifuCustomLabel2";
			this->bunifuCustomLabel2->Size = System::Drawing::Size(126, 20);
			this->bunifuCustomLabel2->TabIndex = 54;
			this->bunifuCustomLabel2->Text = L"Received Amount";
			// 
			// txtQty
			// 
			this->txtQty->BorderColorFocused = System::Drawing::Color::Blue;
			this->txtQty->BorderColorIdle = System::Drawing::Color::Silver;
			this->txtQty->BorderColorMouseHover = System::Drawing::Color::Blue;
			this->txtQty->BorderThickness = 3;
			this->txtQty->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->txtQty->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F));
			this->txtQty->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->txtQty->isPassword = false;
			this->txtQty->Location = System::Drawing::Point(24, 151);
			this->txtQty->Margin = System::Windows::Forms::Padding(4);
			this->txtQty->Name = L"txtQty";
			this->txtQty->Size = System::Drawing::Size(313, 32);
			this->txtQty->TabIndex = 53;
			this->txtQty->TextAlign = System::Windows::Forms::HorizontalAlignment::Left;
			// 
			// bunifuCustomLabel1
			// 
			this->bunifuCustomLabel1->AutoSize = true;
			this->bunifuCustomLabel1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bunifuCustomLabel1->Location = System::Drawing::Point(23, 127);
			this->bunifuCustomLabel1->Name = L"bunifuCustomLabel1";
			this->bunifuCustomLabel1->Size = System::Drawing::Size(65, 20);
			this->bunifuCustomLabel1->TabIndex = 52;
			this->bunifuCustomLabel1->Text = L"Quantity";
			// 
			// btnAdd
			// 
			this->btnAdd->Activecolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(46)), static_cast<System::Int32>(static_cast<System::Byte>(139)),
				static_cast<System::Int32>(static_cast<System::Byte>(87)));
			this->btnAdd->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(46)), static_cast<System::Int32>(static_cast<System::Byte>(139)),
				static_cast<System::Int32>(static_cast<System::Byte>(87)));
			this->btnAdd->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->btnAdd->BorderRadius = 0;
			this->btnAdd->ButtonText = L"Add";
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
			this->btnAdd->Location = System::Drawing::Point(21, 209);
			this->btnAdd->Name = L"btnAdd";
			this->btnAdd->Normalcolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(46)), static_cast<System::Int32>(static_cast<System::Byte>(139)),
				static_cast<System::Int32>(static_cast<System::Byte>(87)));
			this->btnAdd->OnHovercolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(36)), static_cast<System::Int32>(static_cast<System::Byte>(129)),
				static_cast<System::Int32>(static_cast<System::Byte>(77)));
			this->btnAdd->OnHoverTextColor = System::Drawing::Color::White;
			this->btnAdd->selected = false;
			this->btnAdd->Size = System::Drawing::Size(316, 48);
			this->btnAdd->TabIndex = 51;
			this->btnAdd->Text = L"Add";
			this->btnAdd->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->btnAdd->Textcolor = System::Drawing::Color::White;
			this->btnAdd->TextFont = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnAdd->Click += gcnew System::EventHandler(this, &SellForm::btnAdd_Click);
			// 
			// Supplier
			// 
			this->Supplier->AutoSize = true;
			this->Supplier->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Supplier->Location = System::Drawing::Point(30, 463);
			this->Supplier->Name = L"Supplier";
			this->Supplier->Size = System::Drawing::Size(61, 18);
			this->Supplier->TabIndex = 50;
			this->Supplier->Text = L"Supplier";
			// 
			// Product
			// 
			this->Product->AutoSize = true;
			this->Product->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Product->Location = System::Drawing::Point(23, 59);
			this->Product->Name = L"Product";
			this->Product->Size = System::Drawing::Size(60, 20);
			this->Product->TabIndex = 49;
			this->Product->Text = L"Product";
			// 
			// SellForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(856, 642);
			this->Controls->Add(this->lblRemaningAmount);
			this->Controls->Add(this->bunifuCustomLabel5);
			this->Controls->Add(this->btnEdit);
			this->Controls->Add(this->btnDelete);
			this->Controls->Add(this->comboCustomer);
			this->Controls->Add(this->comboProducts);
			this->Controls->Add(this->btnSell);
			this->Controls->Add(this->table);
			this->Controls->Add(this->lblDues);
			this->Controls->Add(this->bunifuCustomLabel3);
			this->Controls->Add(this->txtPaidAmount);
			this->Controls->Add(this->bunifuCustomLabel2);
			this->Controls->Add(this->txtQty);
			this->Controls->Add(this->bunifuCustomLabel1);
			this->Controls->Add(this->btnAdd);
			this->Controls->Add(this->Supplier);
			this->Controls->Add(this->Product);
			this->Name = L"SellForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"SellForm";
			this->Load += gcnew System::EventHandler(this, &SellForm::SellForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->table))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
	private:
		void intializeTableCols()
		{
			table->Columns->Add("productName", "Product");
			table->Columns->Add("unitPrice", "Unit Price");
			table->Columns->Add("qty", "Quantity");
		}

		private: void enableButtons()
		{
			btnDelete->Enabled = true;
			btnEdit->Enabled = true;
		}

		private: void disableButtons()
		{
			btnDelete->Enabled = false;
			btnEdit->Enabled = false;
		}

		void populateProductsDropdown()
		{
			products = query->fetchData("SELECT pro.productId, pro.name, pro.unitPrice, pro.stock, pro.state, pur.unitCost FROM Products pro JOIN Purchases pur ON pro.productId = pur.productId WHERE pro.stock > 0 AND pro.state = 1");

			comboProducts->DataSource = products;
			comboProducts->ValueMember = "productId";
			comboProducts->DisplayMember = "name";
		}

		int findProductIndexById(int id)
		{
			for (int i = 0; i < products->Rows->Count; i++)
				if (Convert::ToInt32(products->Rows[i]->ItemArray[0]) == id)
					return i;

			return -1;
		}

		void populateSupplierDropdown()
		{
			comboCustomer->DataSource = query->fetchData("SELECT userId, name FROM Users WHERE roleId = " + Convert::ToInt16(Utils::roles::customer));
			comboCustomer->ValueMember = "userId";
			comboCustomer->DisplayMember = "name";
		}

		private: DataGridViewRow^ createTableRow(ProductInfo^ info)
		{

			auto row = gcnew DataGridViewRow();
			auto cell1 = gcnew DataGridViewTextBoxCell();
			cell1->Value = info->productName;

			auto cell2 = gcnew DataGridViewTextBoxCell();
			cell2->Value = info->unitPrice;

			auto cell3 = gcnew DataGridViewTextBoxCell();
			cell3->Value = info->qty;

			row->Cells->Add(cell1);
			row->Cells->Add(cell2);
			row->Cells->Add(cell3);

			return row;
		}

		ProductInfo^ createProductInfoFromForm()
		{
			auto productName = comboProducts->GetItemText(comboProducts->SelectedItem);
			auto productId = Convert::ToInt32(comboProducts->SelectedValue);
			auto quantity = Convert::ToInt32(txtQty->Text);

			auto productIndex = findProductIndexById(productId);
			auto product = products->Rows[productIndex];

			auto unitCost = Convert::ToDouble(product[5]);
			auto retailPrice = Convert::ToDouble(product[2]);

			return gcnew ProductInfo(productName, productId, unitCost, quantity, retailPrice, 0);
		}

		private: void populateFormFromSelectedRow()
		{
			auto index = table->SelectedRows[0]->Index;
			comboProducts->SelectedValue = productsInfo[index]->productId;
			txtQty->Text = Convert::ToString(productsInfo[index]->qty);
		}

		void clearForm()
		{
			comboProducts->SelectedIndex = 0;
			txtQty->Text = "";
		}

		void clearTable()
		{
			table->AllowUserToAddRows = false;

			while (table->Rows->Count > 0)
				table->Rows->Remove(table->Rows[0]);

			table->AllowUserToAddRows = true;
		}

		private: void clearLabels()
		{
			productsInfo->Clear();

			lblDues->Text = "0";

			lblRemaningAmount->Text = "0";

			txtPaidAmount->Text = "";

			comboCustomer->SelectedIndex = 0;

		}

		private: double calculateDues()
		{
			double totalDues = 0;
			for (int i = 0; i < productsInfo->Count; i++)
				totalDues += (productsInfo[i]->unitPrice * productsInfo[i]->qty);

			return totalDues;
		}

		private: void updateDuesLabel(double totalDues)
		{
			lblDues->Text = Convert::ToString(totalDues);
		}

		private: void updateRemaningLabel()
		{
			double paidAmount = String::IsNullOrEmpty(txtPaidAmount->Text) ? 0 : Convert::ToDouble(txtPaidAmount->Text);
			double totalDues = Convert::ToDouble(lblDues->Text);
			double remaning = totalDues - paidAmount;

			lblRemaningAmount->Text = Convert::ToString(remaning);
		}

		private: bool checkStock(int productId)
		{
			int productIndex = findProductIndexById(productId);
			if (productIndex == -1)
				return false;

			return (Convert::ToInt32(products->Rows[productIndex]->ItemArray[3]) >= Convert::ToInt32(txtQty->Text));
		}

		private: void updateStock(int productId, int newStock)
		{
			int productIndex = findProductIndexById(productId);
			auto prevItemsArr = products->Rows[productIndex]->ItemArray;
			auto newItemsArray = gcnew array<Object^>(6) {
				prevItemsArr[0], 
				prevItemsArr[1],
				prevItemsArr[2],
				newStock,
				prevItemsArr[4],
				prevItemsArr[5]
			};

			products->Rows[productIndex]->ItemArray = newItemsArray;
		}

		private: System::Void SellForm_Load(System::Object^ sender, System::EventArgs^ e) 
		{
			populateProductsDropdown();
			populateSupplierDropdown();
		}


		private: System::Void btnAdd_Click(System::Object^ sender, System::EventArgs^ e) 
		{
			auto productInfo = createProductInfoFromForm();

			auto row = createTableRow(productInfo);

			if (!checkStock(productInfo->productId))
			{
				MessageBox::Show("Cannot add product, stock not available");
				return;
			}

			auto productIndex = findProductIndexById(productInfo->productId);
			auto newStock = Convert::ToInt32(products->Rows[productIndex]->ItemArray[3]) - Convert::ToInt32(txtQty->Text);
			updateStock(productInfo->productId, newStock);

			productInfo->remaningStock = newStock;


			if (isEditing)
			{
				auto index = table->SelectedRows[0]->Index;

				productsInfo->RemoveAt(index);
				productsInfo->Insert(index, productInfo);

				table->Rows->RemoveAt(index);
				table->Rows->Insert(index, row);

				isEditing = false;
				btnAdd->Text = "Add";
			}
			else
			{
				productsInfo->Add(productInfo);
				table->Rows->Add(row);
			}

			table->ClearSelection();
			clearForm();
			disableButtons();

			updateDuesLabel(calculateDues());
			updateRemaningLabel();
		}

		private: System::Void btnEdit_Click(System::Object^ sender, System::EventArgs^ e) 
		{
			isEditing = true;
			btnAdd->Text = "Save";
			populateFormFromSelectedRow();
		}

		private: System::Void btnDelete_Click(System::Object^ sender, System::EventArgs^ e) 
		{
			auto index = table->SelectedRows[0]->Index;

			auto productIndex = findProductIndexById(productsInfo[index]->productId);
			auto newStock = Convert::ToInt32(products->Rows[productIndex]->ItemArray[3]) + productsInfo[index]->qty;
			updateStock(productsInfo[index]->productId, newStock);


			products->Rows[productIndex]->ItemArray[3] = (Convert::ToInt32(products->Rows[productIndex]->ItemArray[3]) + productsInfo[index]->qty);

			table->Rows->RemoveAt(index);
			productsInfo->RemoveAt(index);

			table->ClearSelection();

			disableButtons();
		}

		private: System::Void txtPaidAmount_OnValueChanged(System::Object^ sender, System::EventArgs^ e) 
		{
			updateDuesLabel(calculateDues());
			updateRemaningLabel();
		}

		private: System::Void table_SelectionChanged(System::Object^ sender, System::EventArgs^ e) 
		{
			enableButtons();
		}

		private: System::Void btnSell_Click(System::Object^ sender, System::EventArgs^ e) 
		{
			auto balance = String::IsNullOrEmpty(txtPaidAmount->Text) ? 0 : Convert::ToDouble(txtPaidAmount->Text);

			insertQuery = "BEGIN TRANSACTION;";

			for (int i = 0; i < productsInfo->Count; i++)
				insertQuery += ("UPDATE Products SET STOCK = " + productsInfo[i]->remaningStock + " WHERE productId = " + productsInfo[i]->productId + ";");

			insertQuery += "INSERT INTO Sales (customerId, saleDate, receivedAmount, productId, qty, cost, retailPrice) VALUES";

			for (int i = 0; i < productsInfo->Count; i++)
			{
				double payAmount = 0;
				double itemPrice = (productsInfo[i]->unitPrice * productsInfo[i]->qty);
				if (balance > itemPrice)
				{
					payAmount = itemPrice;
					balance -= itemPrice;
				}
				else if (balance > 0)
				{
					payAmount = balance;
					balance = 0;
				}

				insertQuery += "('"+ comboCustomer->SelectedValue + "', '" + DateTime::Now + "', '" + payAmount + "', '" + productsInfo[i]->productId + "', '" + productsInfo[i]->qty + "', '" + productsInfo[i]->unitCost+ "', '" + productsInfo[i]->unitPrice + "')";

				insertQuery += (i == (productsInfo->Count - 1)) ? "" : ", ";
			}

			insertQuery += ";COMMIT;";

			if (query->exec(insertQuery))
			{
				MessageBox::Show("Sale Completed!");
				clearTable();
				clearLabels();
				clearForm();
			}
		}
};
}


#endif
#pragma endregion